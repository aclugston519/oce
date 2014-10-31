// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ViewerTest_HeaderFile
#define _ViewerTest_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Draw_Interpretor_HeaderFile
#include <Draw_Interpretor.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_V3d_View_HeaderFile
#include <Handle_V3d_View.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Handle_TopTools_HArray1OfShape_HeaderFile
#include <Handle_TopTools_HArray1OfShape.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif
#ifndef _Handle_V3d_Viewer_HeaderFile
#include <Handle_V3d_Viewer.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
#endif
#ifndef _NIS_InteractiveContext_HeaderFile
#include <NIS_InteractiveContext.hxx>
#endif
#ifndef _Handle_ViewerTest_EventManager_HeaderFile
#include <Handle_ViewerTest_EventManager.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class TCollection_AsciiString;
class V3d_View;
class MMgt_TShared;
class TopoDS_Shape;
class TopTools_HArray1OfShape;
class AIS_InteractiveObject;
class TColStd_HArray1OfTransient;
class V3d_Viewer;
class AIS_InteractiveContext;
class ViewerTest_EventManager;
class ViewerTest_EventManager;
class ViewerTest_DoubleMapOfInteractiveAndName;
class ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName;
class ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName;



class ViewerTest  {
public:

  DEFINE_STANDARD_ALLOC

  //! Loads all Draw commands of  V2d & V3d. Used for plugin. <br>
  Standard_EXPORT   static  void Factory(Draw_Interpretor& theDI) ;
  //! Creates view with default or custom name <br>
//!          and add this name in map to manage muliple views <br>
//!          implemented in ViewerTest_ViewerCommands.cxx <br>
  Standard_EXPORT   static  TCollection_AsciiString ViewerInit(const Standard_Integer thePxLeft = 0,const Standard_Integer thePxTop = 0,const Standard_Integer thePxWidth = 0,const Standard_Integer thePxHeight = 0,const Standard_CString theViewName = "",const Standard_CString theDisplayName = "") ;
  
  Standard_EXPORT   static  void RemoveViewName(const TCollection_AsciiString& theName) ;
  
  Standard_EXPORT   static  void InitViewName(const TCollection_AsciiString& theName,const Handle(V3d_View)& theView) ;
  
  Standard_EXPORT   static  TCollection_AsciiString GetCurrentViewName() ;
  //! Removes view and clear all maps <br>
//!          with information about its resources if neccessary <br>
  Standard_EXPORT   static  void RemoveView(const TCollection_AsciiString& theViewName,const Standard_Boolean theToRemoveContext = Standard_True) ;
  //! Removes view and clear all maps <br>
//!          with information about its resources if neccessary <br>
  Standard_EXPORT   static  void RemoveView(const Handle(V3d_View)& theView,const Standard_Boolean theToRemoveContext = Standard_True) ;
  //!  waits until a shape of type <aType> is picked in the AIS Viewer and returns it. <br>
//! if <aType> == TopAbs_Shape, any shape can be picked... <br>
//! MaxPick  is the Max number before exiting, if no pick is successfull <br>
  Standard_EXPORT   static  TopoDS_Shape PickShape(const TopAbs_ShapeEnum aType,const Standard_Integer MaxPick = 5) ;
  //! wait until the array is filled with picked shapes. <br>
//!          returns True if the array is filled. <br>
//!          exit if number of unsuccesfull picks =  <MaxPick> <br>
  Standard_EXPORT   static  Standard_Boolean PickShapes(const TopAbs_ShapeEnum aType,Handle(TopTools_HArray1OfShape)& thepicked,const Standard_Integer MaxPick = 5) ;
  //! waits until an interactive object of a given Type <br>
//!          and signature is picked (defaut values authorize <br>
//!          selection of any Interactive Object) <br>
//!          exit if number of unsuccesfull picks =  <MaxPick> <br>
  Standard_EXPORT   static  Handle_AIS_InteractiveObject PickObject(const AIS_KindOfInteractive Type = AIS_KOI_None,const Standard_Integer Signature = -1,const Standard_Integer MaxPick = 5) ;
  //! selection of several interactive objects. Number is given <br>
//!          by the size of <thepicked> <br>
//!          exit if number of unsuccesfull picks =  <MaxPick> <br>
  Standard_EXPORT   static  Standard_Boolean PickObjects(Handle(TColStd_HArray1OfTransient)& thepicked,const AIS_KindOfInteractive Type = AIS_KOI_None,const Standard_Integer Signature = -1,const Standard_Integer MaxPick = 5) ;
  
  Standard_EXPORT   static  void Commands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void AviCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void ViewerCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void MyCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void RelationCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void ObjectCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void FilletCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void VoxelCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void OpenGlCommands(Draw_Interpretor& theCommands) ;
  
  Standard_EXPORT   static  void GetMousePosition(Standard_Integer& xpix,Standard_Integer& ypix) ;
  
  Standard_EXPORT   static  Handle_V3d_Viewer GetViewerFromContext() ;
  
  Standard_EXPORT   static  Handle_V3d_Viewer GetCollectorFromContext() ;
  
  Standard_EXPORT   static const Handle_AIS_InteractiveContext& GetAISContext() ;
  
  Standard_EXPORT   static  NIS_InteractiveContext& GetNISContext() ;
  
  Standard_EXPORT   static  void SetAISContext(const Handle(AIS_InteractiveContext)& aContext) ;
  
  Standard_EXPORT   static  void SetNISContext(const NIS_InteractiveContext& aContext) ;
  
  Standard_EXPORT   static const Handle_V3d_View& CurrentView() ;
  
  Standard_EXPORT   static  void CurrentView(const Handle(V3d_View)& aViou) ;
  
  Standard_EXPORT   static  void Clear() ;
  //!      puts  <aMgr>   as     current  eventmanager  (the <br>
//!          move,select,...will be applied to <aMgr> <br>
  Standard_EXPORT   static  void SetEventManager(const Handle(ViewerTest_EventManager)& aMgr) ;
  //! removes the last EventManager from the list. <br>
  Standard_EXPORT   static  void UnsetEventManager() ;
  //! clear the list of EventManagers and <br>
//!          sets the default EventManager as current <br>
  Standard_EXPORT   static  void ResetEventManager() ;
  
  Standard_EXPORT   static  Handle_ViewerTest_EventManager CurrentEventManager() ;
  
  Standard_EXPORT   static  void RemoveSelected() ;
  
  Standard_EXPORT   static  void StandardModeActivation(const Standard_Integer Mode) ;
  
  Standard_EXPORT   static  Quantity_NameOfColor GetColorFromName(const Standard_CString name) ;
  //! redraws all defined views. <br>
  Standard_EXPORT   static  void RedrawAllViews() ;
  //! Splits "parameter=value" string into separate <br>
//! parameter and value strings. <br>
//! @return TRUE if the string matches pattern "<string>=<empty or string>" <br>
  Standard_EXPORT   static  Standard_Boolean SplitParameter(const TCollection_AsciiString& theString,TCollection_AsciiString& theName,TCollection_AsciiString& theValue) ;





protected:





private:

  //! Returns a window class that implements standard behavior of <br>
//!          all windows of the ViewerTest. This includes usual Open CASCADE <br>
//!          view conventions for mouse buttons (e.g. Ctrl+MB1 for zoom, <br>
//!          Ctrl+MB2 for pan, etc) and keyboard shortcuts. <br>
//!          This method is relevant for MS Windows only and respectively <br>
//!          returns WNT_WClass handle. <br>
  Standard_EXPORT   static const Handle_MMgt_TShared& WClass() ;



friend class ViewerTest_EventManager;
friend class ViewerTest_DoubleMapOfInteractiveAndName;
friend class ViewerTest_DoubleMapNodeOfDoubleMapOfInteractiveAndName;
friend class ViewerTest_DoubleMapIteratorOfDoubleMapOfInteractiveAndName;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
