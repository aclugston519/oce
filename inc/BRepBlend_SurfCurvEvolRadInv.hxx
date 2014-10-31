// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBlend_SurfCurvEvolRadInv_HeaderFile
#define _BRepBlend_SurfCurvEvolRadInv_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Blend_SurfCurvFuncInv_HeaderFile
#include <Blend_SurfCurvFuncInv.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Adaptor2d_HCurve2d;
class Law_Function;
class math_Matrix;


//! Function of reframing between a surface restriction <br>
//!          of the surface and a curve. <br>
//!          Class     used   to   compute  a    solution   of  the <br>
//!          surfRstConstRad  problem  on a done restriction of the <br>
//!          surface. <br>
//!          The vector  <X> used in  Value, Values and Derivatives <br>
//!          methods  has   to  be the   vector  of  the parametric <br>
//!          coordinates  wguide, wcurv, wrst  where  wguide is the <br>
//!          parameter on the guide line, wcurv is the parameter on <br>
//!          the curve, wrst is the parameter on the restriction on <br>
//!          the surface. <br>
class BRepBlend_SurfCurvEvolRadInv  : public Blend_SurfCurvFuncInv {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRepBlend_SurfCurvEvolRadInv(const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HCurve)& C,const Handle(Adaptor3d_HCurve)& Cg,const Handle(Law_Function)& Evol);
  
  Standard_EXPORT     void Set(const Standard_Integer Choix) ;
  //! returns 3. <br>
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;
  //! Set the restriction on which a solution has to be found. <br>
  Standard_EXPORT     void Set(const Handle(Adaptor2d_HCurve2d)& Rst) ;
  //! Returns in the vector Tolerance the parametric tolerance <br>
//!          for each of the 3 variables; <br>
//!          Tol is the tolerance used in 3d space. <br>
  Standard_EXPORT     void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const;
  //! Returns in the vector InfBound the lowest values allowed <br>
//!          for each of the 3 variables. <br>
//!          Returns in the vector SupBound the greatest values allowed <br>
//!          for each of the 3 variables. <br>
  Standard_EXPORT     void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const;
  //! Returns Standard_True if Sol is a zero of the function. <br>
//!          Tol is the tolerance used in 3d space. <br>
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;





protected:





private:



Handle_Adaptor3d_HSurface surf;
Handle_Adaptor3d_HCurve curv;
Handle_Adaptor3d_HCurve guide;
Handle_Adaptor2d_HCurve2d rst;
Standard_Real ray;
Standard_Integer choix;
Handle_Law_Function tevol;
Standard_Real sg1;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
