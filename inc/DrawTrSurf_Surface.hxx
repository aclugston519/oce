// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Surface_HeaderFile
#define _DrawTrSurf_Surface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_Surface_HeaderFile
#include <Handle_DrawTrSurf_Surface.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _DrawTrSurf_Drawable_HeaderFile
#include <DrawTrSurf_Drawable.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Draw_Interpretor_HeaderFile
#include <Draw_Interpretor.hxx>
#endif
class Geom_Surface;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;


//!  This class defines a drawable surface. <br>
//! With this class you can draw a general surface from <br>
//! package Geom. <br>
class DrawTrSurf_Surface : public DrawTrSurf_Drawable {

public:

  //! default drawing mode <br>
//!  Just the middle isoparametric curves are drawn. <br>
//!  The boundaries are yellow, the isoparametric curves are blues. <br>
//!  For the discretisation 50 points are computed in each parametric <br>
//!  direction. <br>
  Standard_EXPORT   DrawTrSurf_Surface(const Handle(Geom_Surface)& S);
  
  Standard_EXPORT   DrawTrSurf_Surface(const Handle(Geom_Surface)& S,const Standard_Integer Nu,const Standard_Integer Nv,const Draw_Color& BoundsColor,const Draw_Color& IsosColor,const Standard_Integer Discret,const Standard_Real Deflection,const Standard_Integer DrawMode);
  
        Draw_Color BoundsColor() const;
  //! rub out all the isoparametric curves. <br>
  Standard_EXPORT   virtual  void ClearIsos() ;
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  //! Iso = True : Draw the isos, the boundaries, the UVMarker. <br>
//!          Iso = False: Only Draw the boundary and the UVMarker. <br>
  Standard_EXPORT     void DrawOn(Draw_Display& dis,const Standard_Boolean Iso) const;
  
        Handle_Geom_Surface GetSurface() const;
  
        Draw_Color IsosColor() const;
  
        void NbIsos(Standard_Integer& Nu,Standard_Integer& Nb) const;
  
        void SetBoundsColor(const Draw_Color& aColor) ;
  
        void SetIsosColor(const Draw_Color& aColor) ;
  //! change the number of isoparametric curves to be drawn. <br>
  Standard_EXPORT   virtual  void ShowIsos(const Standard_Integer Nu,const Standard_Integer Nv) ;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  //! For variable dump. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! For variable whatis command. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Surface)

protected:


Handle_Geom_Surface surf;
Draw_Color boundsLook;
Draw_Color isosLook;
Standard_Integer nbUIsos;
Standard_Integer nbVIsos;


private: 




};


#include <DrawTrSurf_Surface.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
