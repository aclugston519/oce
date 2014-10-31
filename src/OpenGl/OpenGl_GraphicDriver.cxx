// Created on: 2011-10-20
// Created by: Sergey ZERCHANINOV
// Copyright (c) 2011-2013 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_Flipper.hxx>
#include <OpenGl_GraduatedTrihedron.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_CView.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_StencilTest.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_Trihedron.hxx>
#include <OpenGl_Workspace.hxx>

#include <Aspect_GraphicDeviceDefinitionError.hxx>
#include <Message_Messenger.hxx>
#include <OSD_Environment.hxx>
#include <Standard_NotImplemented.hxx>

#if !defined(_WIN32) && !defined(__ANDROID__) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX))
  #include <X11/Xlib.h> // XOpenDisplay()
#endif

#if defined(HAVE_EGL) || defined(__ANDROID__)
  #include <EGL/egl.h>
#endif

IMPLEMENT_STANDARD_HANDLE(OpenGl_GraphicDriver,Graphic3d_GraphicDriver)
IMPLEMENT_STANDARD_RTTIEXT(OpenGl_GraphicDriver,Graphic3d_GraphicDriver)

namespace
{
  static const Handle(OpenGl_Context) TheNullGlCtx;
}

// =======================================================================
// function : OpenGl_GraphicDriver
// purpose  :
// =======================================================================
OpenGl_GraphicDriver::OpenGl_GraphicDriver (const Handle(Aspect_DisplayConnection)& theDisp,
                                            const Standard_Boolean                  theToStealActiveContext)
: Graphic3d_GraphicDriver (theDisp),
#if defined(HAVE_EGL) || defined(__ANDROID__)
  myEglDisplay ((Aspect_Display )EGL_NO_DISPLAY),
  myEglContext ((Aspect_RenderingContext )EGL_NO_CONTEXT),
  myEglConfig  (NULL),
#endif
  myCaps           (new OpenGl_Caps()),
  myMapOfView      (1, NCollection_BaseAllocator::CommonBaseAllocator()),
  myMapOfWS        (1, NCollection_BaseAllocator::CommonBaseAllocator()),
  myMapOfStructure (1, NCollection_BaseAllocator::CommonBaseAllocator()),
  myUserDrawCallback (NULL),
  myTempText (new OpenGl_Text())
{
#if !defined(_WIN32) && !defined(__ANDROID__) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX))
  if (myDisplayConnection.IsNull())
  {
    //Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: cannot connect to X server!");
    return;
  }

  Display* aDisplay = myDisplayConnection->GetDisplay();
  Bool toSync = ::getenv ("CSF_GraphicSync") != NULL
             || ::getenv ("CALL_SYNCHRO_X")  != NULL;
  XSynchronize (aDisplay, toSync);

#if !defined(HAVE_EGL)
  // does the server know about OpenGL & GLX?
  int aDummy;
  if (!XQueryExtension (aDisplay, "GLX", &aDummy, &aDummy, &aDummy))
  {
  #ifdef DEBUG
    std::cerr << "This system doesn't appear to support OpenGL\n";
  #endif
  }
#endif
#endif

#if defined(HAVE_EGL) || defined(__ANDROID__)
  if (theToStealActiveContext)
  {
    myEglDisplay = (Aspect_Display )eglGetCurrentDisplay();
    myEglContext = (Aspect_RenderingContext )eglGetCurrentContext();
    EGLSurface aEglSurf = eglGetCurrentSurface(EGL_DRAW);
    if ((EGLDisplay )myEglDisplay == EGL_NO_DISPLAY
     || (EGLContext )myEglContext == EGL_NO_CONTEXT)
    {
      Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: no active EGL context to steal!");
      return;
    }

    TCollection_AsciiString anEglInfo = TCollection_AsciiString()
      + "EGL info"
      + "\n  Version:     " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_VERSION)
      + "\n  Vendor:      " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_VENDOR)
      + "\n  Client APIs: " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_CLIENT_APIS)
      + "\n  Extensions:  " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_EXTENSIONS);
    ::Message::DefaultMessenger()->Send (anEglInfo, Message_Info);

    EGLint aCfgId = 0;
    eglQuerySurface((EGLDisplay )myEglDisplay, aEglSurf, EGL_CONFIG_ID, &aCfgId);
    const EGLint aConfigAttribs[] =
    {
      EGL_CONFIG_ID, aCfgId,
      EGL_NONE
    };

    EGLint aNbConfigs = 0;
    if (eglChooseConfig ((EGLDisplay )myEglDisplay, aConfigAttribs, &myEglConfig, 1, &aNbConfigs) != EGL_TRUE)
    {
      Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL does not provide compatible configurations!");
    }
    return;
  }

#if !defined(_WIN32) && !defined(__ANDROID__) && (!defined(__APPLE__) || defined(MACOSX_USE_GLX))
  myEglDisplay = (Aspect_Display )eglGetDisplay (aDisplay);
#else
  myEglDisplay = (Aspect_Display )eglGetDisplay (EGL_DEFAULT_DISPLAY);
#endif
  if ((EGLDisplay )myEglDisplay == EGL_NO_DISPLAY)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: no EGL display!");
    return;
  }

  EGLint aVerMajor = 0; EGLint aVerMinor = 0;
  if (eglInitialize ((EGLDisplay )myEglDisplay, &aVerMajor, &aVerMinor) != EGL_TRUE)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL display is unavailable!");
    return;
  }

  TCollection_AsciiString anEglInfo = TCollection_AsciiString()
    + "EGL info"
    + "\n  Version:     " + aVerMajor + "." + aVerMinor + " (" + eglQueryString ((EGLDisplay )myEglDisplay, EGL_VERSION)
    + "\n  Vendor:      " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_VENDOR)
    + "\n  Client APIs: " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_CLIENT_APIS)
    + "\n  Extensions:  " + eglQueryString ((EGLDisplay )myEglDisplay, EGL_EXTENSIONS);
  ::Message::DefaultMessenger()->Send (anEglInfo, Message_Info);

  const EGLint aConfigAttribs[] =
  {
    EGL_RED_SIZE,     8,
    EGL_GREEN_SIZE,   8,
    EGL_BLUE_SIZE,    8,
    EGL_ALPHA_SIZE,   0,
    EGL_DEPTH_SIZE,   24,
    EGL_STENCIL_SIZE, 8,
  #if defined(GL_ES_VERSION_2_0)
    EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
  #else
    EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
  #endif
    EGL_NONE
  };

  EGLint aNbConfigs = 0;
  if (eglChooseConfig ((EGLDisplay )myEglDisplay, aConfigAttribs, &myEglConfig, 1, &aNbConfigs) != EGL_TRUE)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL does not provide compatible configurations!");
    return;
  }

#if defined(GL_ES_VERSION_2_0)
  if (eglBindAPI (EGL_OPENGL_ES_API) != EGL_TRUE)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL does not provide OpenGL ES client!");
    return;
  }
#else
  if (eglBindAPI (EGL_OPENGL_API) != EGL_TRUE)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL does not provide OpenGL client!");
    return;
  }
#endif

#if defined(GL_ES_VERSION_2_0)
  EGLint anEglCtxAttribs[] =
  {
    EGL_CONTEXT_CLIENT_VERSION, 2,
    EGL_NONE
  };
#else
  EGLint* anEglCtxAttribs = NULL;
#endif

  myEglContext = (Aspect_RenderingContext )eglCreateContext ((EGLDisplay )myEglDisplay, myEglConfig, EGL_NO_CONTEXT, anEglCtxAttribs);
  if ((EGLContext )myEglContext == EGL_NO_CONTEXT)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL is unable to create OpenGL context!");
    return;
  }
  if (eglMakeCurrent ((EGLDisplay )myEglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, (EGLContext )myEglContext) != EGL_TRUE)
  {
    Aspect_GraphicDeviceDefinitionError::Raise ("OpenGl_GraphicDriver: EGL is unable bind OpenGL context!");
    return;
  }
#else
  // not yet implemented
  (void )theToStealActiveContext;
#endif
}

// =======================================================================
// function : InquireLightLimit
// purpose  :
// =======================================================================
Standard_Integer OpenGl_GraphicDriver::InquireLightLimit()
{
  return OpenGLMaxLights;
}

// =======================================================================
// function : InquireViewLimit
// purpose  :
// =======================================================================
Standard_Integer OpenGl_GraphicDriver::InquireViewLimit()
{
  return 10000;
}

// =======================================================================
// function : InquirePlaneLimit
// purpose  :
// =======================================================================
Standard_Integer OpenGl_GraphicDriver::InquirePlaneLimit()
{
  // NOTE the 2 first planes are reserved for ZClipping
  const Handle(OpenGl_Context)& aCtx = GetSharedContext();
  return aCtx.IsNull() ? 0 : Max (aCtx->MaxClipPlanes() - 2, 0);
}

// =======================================================================
// function : UserDrawCallback
// purpose  :
// =======================================================================
OpenGl_GraphicDriver::OpenGl_UserDrawCallback_t& OpenGl_GraphicDriver::UserDrawCallback()
{
  return myUserDrawCallback;
}

// =======================================================================
// function : DefaultTextHeight
// purpose  :
// =======================================================================
Standard_ShortReal OpenGl_GraphicDriver::DefaultTextHeight() const
{
  return 16.;
}

// =======================================================================
// function : EnableVBO
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::EnableVBO (const Standard_Boolean theToTurnOn)
{
  myCaps->vboDisable = !theToTurnOn;
}

// =======================================================================
// function : GetSharedContext
// purpose  :
// =======================================================================
const Handle(OpenGl_Context)& OpenGl_GraphicDriver::GetSharedContext() const
{
  if (myMapOfWS.IsEmpty())
  {
    return TheNullGlCtx;
  }

  NCollection_DataMap<Standard_Integer, Handle(OpenGl_Workspace)>::Iterator anIter (myMapOfWS);
  return anIter.Value()->GetGlContext();
}

// =======================================================================
// function : MemoryInfo
// purpose  :
// =======================================================================
Standard_Boolean OpenGl_GraphicDriver::MemoryInfo (Standard_Size&           theFreeBytes,
                                                   TCollection_AsciiString& theInfo) const
{
  // this is extra work (for OpenGl_Context initialization)...
  OpenGl_Context aGlCtx;
  if (!aGlCtx.Init())
  {
    return Standard_False;
  }
  theFreeBytes = aGlCtx.AvailableMemory();
  theInfo      = aGlCtx.MemoryInfo();
  return !theInfo.IsEmpty();
}

// =======================================================================
// function : SetImmediateModeDrawToFront
// purpose  :
// =======================================================================
Standard_Boolean OpenGl_GraphicDriver::SetImmediateModeDrawToFront (const Graphic3d_CView& theCView,
                                                                    const Standard_Boolean theDrawToFrontBuffer)
{
  if (theCView.ViewId == -1)
  {
    return Standard_False;
  }

  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    return aCView->WS->SetImmediateModeDrawToFront (theDrawToFrontBuffer);
  }
  return Standard_False;
}

// =======================================================================
// function : DisplayImmediateStructure
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::DisplayImmediateStructure (const Graphic3d_CView&      theCView,
                                                      const Graphic3d_CStructure& theCStructure)
{
  OpenGl_CView*     aCView     = (OpenGl_CView*     )theCView.ptrView;
  OpenGl_Structure* aStructure = (OpenGl_Structure* )&theCStructure;
  if (aCView == NULL)
  {
    return;
  }

  aCView->View->DisplayImmediateStructure (aStructure);
}

// =======================================================================
// function : EraseImmediateStructure
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::EraseImmediateStructure (const Graphic3d_CView&      theCView,
                                                    const Graphic3d_CStructure& theCStructure)
{
  OpenGl_CView*     aCView     = (OpenGl_CView*     )theCView.ptrView;
  OpenGl_Structure* aStructure = (OpenGl_Structure* )&theCStructure;
  if (aCView == NULL)
  {
    return;
  }

  aCView->View->EraseImmediateStructure (aStructure);
}


// =======================================================================
// function : Print
// purpose  :
// =======================================================================
Standard_Boolean OpenGl_GraphicDriver::Print (const Graphic3d_CView& theCView,
                                              const Aspect_CLayer2d& theCUnderLayer,
                                              const Aspect_CLayer2d& theCOverLayer,
                                              const Aspect_Handle    thePrintDC,
                                              const Standard_Boolean theToShowBackground,
                                              const Standard_CString theFilename,
                                              const Aspect_PrintAlgo thePrintAlgorithm,
                                              const Standard_Real    theScaleFactor) const
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView == NULL
   || !myPrintContext.IsNull())
  {
    return Standard_False;
  }

  Standard_Boolean isPrinted = Standard_False;
  myPrintContext = new OpenGl_PrinterContext();
#ifdef _WIN32
  isPrinted = aCView->WS->Print (myPrintContext,
                                 theCView,
                                 theCUnderLayer,
                                 theCOverLayer,
                                 thePrintDC,
                                 theToShowBackground,
                                 theFilename,
                                 thePrintAlgorithm,
                                 theScaleFactor);
#else
  Standard_NotImplemented::Raise ("OpenGl_GraphicDriver::Print is implemented only on Windows");
#endif
  myPrintContext.Nullify();
  return isPrinted;
}

// =======================================================================
// function : ZBufferTriedronSetup
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::ZBufferTriedronSetup (const Quantity_NameOfColor theXColor,
                                                 const Quantity_NameOfColor theYColor,
                                                 const Quantity_NameOfColor theZColor,
                                                 const Standard_Real        theSizeRatio,
                                                 const Standard_Real        theAxisDiametr,
                                                 const Standard_Integer     theNbFacettes)
{
  OpenGl_Trihedron::Setup (theXColor, theYColor, theZColor, theSizeRatio, theAxisDiametr, theNbFacettes);
}

// =======================================================================
// function : TriedronDisplay
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::TriedronDisplay (const Graphic3d_CView&              theCView,
                                            const Aspect_TypeOfTriedronPosition thePosition,
                                            const Quantity_NameOfColor          theColor,
                                            const Standard_Real                 theScale,
                                            const Standard_Boolean              theAsWireframe)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->TriedronDisplay (aCView->WS->GetGlContext(), thePosition, theColor, theScale, theAsWireframe);
  }
}

// =======================================================================
// function : TriedronErase
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::TriedronErase (const Graphic3d_CView& theCView)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->TriedronErase (aCView->WS->GetGlContext());
  }
}

// =======================================================================
// function : TriedronEcho
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::TriedronEcho (const Graphic3d_CView& ,
                                         const Aspect_TypeOfTriedronEcho )
{
  // do nothing
}

// =======================================================================
// function : Environment
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::Environment (const Graphic3d_CView& theCView)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView == NULL)
  {
    return;
  }

  aCView->View->SetTextureEnv    (aCView->WS->GetGlContext(), theCView.Context.TextureEnv);
  aCView->View->SetSurfaceDetail ((Visual3d_TypeOfSurfaceDetail)theCView.Context.SurfaceDetail);
}

// =======================================================================
// function : BackgroundImage
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::BackgroundImage (const Standard_CString  theFileName,
                                            const Graphic3d_CView&  theCView,
                                            const Aspect_FillMethod theFillStyle)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->CreateBackgroundTexture (theFileName, theFillStyle);
  }
}

// =======================================================================
// function : SetBgImageStyle
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::SetBgImageStyle (const Graphic3d_CView&  theCView,
                                            const Aspect_FillMethod theFillStyle)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->SetBackgroundTextureStyle (theFillStyle);
  }
}

// =======================================================================
// function : SetBgGradientStyle
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::SetBgGradientStyle (const Graphic3d_CView&          theCView,
                                               const Aspect_GradientFillMethod theFillType)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->SetBackgroundGradientType (theFillType);
  }
}

// =======================================================================
// function : GraduatedTrihedronDisplay
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::GraduatedTrihedronDisplay (const Graphic3d_CView&               theCView,
                                                      const Graphic3d_CGraduatedTrihedron& theCubic)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->GraduatedTrihedronDisplay (aCView->WS->GetGlContext(), theCubic);
  }
}

// =======================================================================
// function : GraduatedTrihedronErase
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::GraduatedTrihedronErase (const Graphic3d_CView& theCView)
{
  const OpenGl_CView* aCView = (const OpenGl_CView* )theCView.ptrView;
  if (aCView != NULL)
  {
    aCView->View->GraduatedTrihedronErase (aCView->WS->GetGlContext());
  }
}

// =======================================================================
// function : GraduatedTrihedronMinMaxValues
// purpose  :
// =======================================================================
void OpenGl_GraphicDriver::GraduatedTrihedronMinMaxValues (const Standard_ShortReal theMinX,
                                                           const Standard_ShortReal theMinY,
                                                           const Standard_ShortReal theMinZ,
                                                           const Standard_ShortReal theMaxX,
                                                           const Standard_ShortReal theMaxY,
                                                           const Standard_ShortReal theMaxZ)
{
  OpenGl_GraduatedTrihedron::SetMinMax (theMinX, theMinY, theMinZ, theMaxX, theMaxY, theMaxZ);
}
