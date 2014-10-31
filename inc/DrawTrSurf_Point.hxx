// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Point_HeaderFile
#define _DrawTrSurf_Point_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_Point_HeaderFile
#include <Handle_DrawTrSurf_Point.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Draw_MarkerShape_HeaderFile
#include <Draw_MarkerShape.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
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
class gp_Pnt;
class Draw_Color;
class gp_Pnt2d;
class Draw_Display;
class Draw_Drawable3D;


//! A drawable point. <br>
class DrawTrSurf_Point : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   DrawTrSurf_Point(const gp_Pnt& P,const Draw_MarkerShape Shape,const Draw_Color& Col);
  
  Standard_EXPORT   DrawTrSurf_Point(const gp_Pnt2d& P,const Draw_MarkerShape Shape,const Draw_Color& Col);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  //! Is a 3D object. (Default True). <br>
  Standard_EXPORT   virtual  Standard_Boolean Is3D() const;
  
  Standard_EXPORT     gp_Pnt Point() const;
  
  Standard_EXPORT     void Point(const gp_Pnt& P) ;
  
  Standard_EXPORT     gp_Pnt2d Point2d() const;
  
  Standard_EXPORT     void Point2d(const gp_Pnt2d& P) ;
  
  Standard_EXPORT     void Color(const Draw_Color& aColor) ;
  
  Standard_EXPORT     Draw_Color Color() const;
  
  Standard_EXPORT     void Shape(const Draw_MarkerShape S) ;
  
  Standard_EXPORT     Draw_MarkerShape Shape() const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  //! For variable dump. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! For variable whatis command. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Point)

protected:




private: 


gp_Pnt myPoint;
Standard_Boolean is3D;
Draw_MarkerShape myShape;
Draw_Color myColor;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
