// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_ChamfInv_HeaderFile
#define _BlendFunc_ChamfInv_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BlendFunc_Corde_HeaderFile
#include <BlendFunc_Corde.hxx>
#endif
#ifndef _Blend_FuncInv_HeaderFile
#include <Blend_FuncInv.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Adaptor2d_HCurve2d;
class math_Matrix;



class BlendFunc_ChamfInv  : public Blend_FuncInv {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BlendFunc_ChamfInv(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT     void Set(const Standard_Boolean OnFirst,const Handle(Adaptor2d_HCurve2d)& COnSurf) ;
  
  Standard_EXPORT     void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const;
  
  Standard_EXPORT     void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const;
  
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;
  //! returns the number of equations of the function. <br>
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
  
  Standard_EXPORT     void Set(const Standard_Real Dist1,const Standard_Real Dist2,const Standard_Integer Choix) ;





protected:





private:



Handle_Adaptor3d_HSurface surf1;
Handle_Adaptor3d_HSurface surf2;
Handle_Adaptor3d_HCurve curv;
Handle_Adaptor2d_HCurve2d csurf;
Standard_Integer choix;
Standard_Boolean first;
BlendFunc_Corde corde1;
BlendFunc_Corde corde2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
