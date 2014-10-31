// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Blend_Function_HeaderFile
#define _Blend_Function_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Blend_AppFunction_HeaderFile
#include <Blend_AppFunction.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_DomainError;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;
class Blend_Point;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;


//! Deferred class for a function used to compute a blending <br>
//!          surface between two surfaces, using a guide line. <br>
//!          The vector <X> used in Value, Values and Derivatives methods <br>
//!          has to be the vector of the parametric coordinates U1,V1, <br>
//!          U2,V2, of the extremities of a section on the first and <br>
//!          second surface. <br>
class Blend_Function  : public Blend_AppFunction {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns 4. <br>
  Standard_EXPORT     Standard_Integer NbVariables() const;
  //! returns the number of equations of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbEquations() const = 0;
  //! computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& X,math_Vector& F)  = 0;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D)  = 0;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D)  = 0;
  //! Sets the value of the parameter along the guide line. <br>
//!          This determines the plane in which the solution has <br>
//!          to be found. <br>
  Standard_EXPORT   virtual  void Set(const Standard_Real Param)  = 0;
  //! Sets the bounds of the parametric interval on <br>
//!          the guide line. <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
  Standard_EXPORT   virtual  void Set(const Standard_Real First,const Standard_Real Last)  = 0;
  //! Returns in the vector Tolerance the parametric tolerance <br>
//!          for each of the 4 variables; <br>
//!          Tol is the tolerance used in 3d space. <br>
  Standard_EXPORT   virtual  void GetTolerance(math_Vector& Tolerance,const Standard_Real Tol) const = 0;
  //! Returns in the vector InfBound the lowest values allowed <br>
//!          for each of the 4 variables. <br>
//!          Returns in the vector SupBound the greatest values allowed <br>
//!          for each of the 4 variables. <br>
  Standard_EXPORT   virtual  void GetBounds(math_Vector& InfBound,math_Vector& SupBound) const = 0;
  //! Returns Standard_True if Sol is a zero of the function. <br>
//!          Tol is the tolerance used in 3d space. <br>
//!          The computation is made at the current value of <br>
//!          the parameter on the guide line. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol)  = 0;
  //! Returns the point on the first support. <br>
  Standard_EXPORT    const gp_Pnt& Pnt1() const;
  //! Returns the point on the seconde support. <br>
  Standard_EXPORT    const gp_Pnt& Pnt2() const;
  //! Returns the point on the first surface, at parameter <br>
//!          Sol(1),Sol(2) (Sol is the vector used in the call of <br>
//!          IsSolution. <br>
  Standard_EXPORT   virtual const gp_Pnt& PointOnS1() const = 0;
  //! Returns the point on the second surface, at parameter <br>
//!          Sol(3),Sol(4) (Sol is the vector used in the call of <br>
//!          IsSolution. <br>
  Standard_EXPORT   virtual const gp_Pnt& PointOnS2() const = 0;
  //! Returns True when it is not possible to compute <br>
//!          the tangent vectors at PointOnS1 and/or PointOnS2. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsTangencyPoint() const = 0;
  //! Returns the tangent vector at PointOnS1, in 3d space. <br>
  Standard_EXPORT   virtual const gp_Vec& TangentOnS1() const = 0;
  //! Returns the tangent vector at PointOnS1, in the <br>
//!          parametric space of the first surface. <br>
  Standard_EXPORT   virtual const gp_Vec2d& Tangent2dOnS1() const = 0;
  //! Returns the tangent vector at PointOnS2, in 3d space. <br>
  Standard_EXPORT   virtual const gp_Vec& TangentOnS2() const = 0;
  //! Returns the tangent vector at PointOnS2, in the <br>
//!          parametric space of the second surface. <br>
  Standard_EXPORT   virtual const gp_Vec2d& Tangent2dOnS2() const = 0;
  //! Returns the tangent vector at the section, <br>
//!          at the beginning and the end of the section, and <br>
//!          returns the normal (of the surfaces) at <br>
//!          these points. <br>
  Standard_EXPORT   virtual  void Tangent(const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,gp_Vec& TgFirst,gp_Vec& TgLast,gp_Vec& NormFirst,gp_Vec& NormLast) const = 0;
  
  Standard_EXPORT   virtual  Standard_Boolean TwistOnS1() const;
  
  Standard_EXPORT   virtual  Standard_Boolean TwistOnS2() const;
  
  Standard_EXPORT   virtual  void GetShape(Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Standard_Integer& NbPoles2d)  = 0;
  //! Returns the tolerance to reach in approximation <br>
//!          to respecte <br>
//!          BoundTol error at the Boundary <br>
//!          AngleTol tangent error at the Boundary <br>
//!          SurfTol error inside the surface. <br>
  Standard_EXPORT   virtual  void GetTolerance(const Standard_Real BoundTol,const Standard_Real SurfTol,const Standard_Real AngleTol,math_Vector& Tol3d,math_Vector& Tol1D) const = 0;
  
  Standard_EXPORT   virtual  void Knots(TColStd_Array1OfReal& TKnots)  = 0;
  
  Standard_EXPORT   virtual  void Mults(TColStd_Array1OfInteger& TMults)  = 0;
  //! Used for the first and last section <br>
//!          The method returns Standard_True if the derivatives <br>
//!          are computed, otherwise it returns Standard_False. <br>
  Standard_EXPORT   virtual  Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths)  = 0;
  
  Standard_EXPORT   virtual  void Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfPnt2d& Poles2d,TColStd_Array1OfReal& Weigths)  = 0;
  //! Used for the first and last section <br>
//!          The method returns Standard_True if the derivatives <br>
//!          are computed, otherwise it returns Standard_False <br>
  Standard_EXPORT   virtual  Standard_Boolean Section(const Blend_Point& P,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfVec& D2Poles,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColgp_Array1OfVec2d& D2Poles2d,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths,TColStd_Array1OfReal& D2Weigths) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
