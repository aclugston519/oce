// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppParCurves_HeaderFile
#define _AppParCurves_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _math_IntegerVector_HeaderFile
#include <math_IntegerVector.hxx>
#endif
class math_Matrix;
class AppParCurves_MultiPoint;
class AppParCurves_MultiCurve;
class AppParCurves_MultiBSpCurve;
class AppParCurves_ConstraintCouple;
class AppParCurves_LeastSquare;
class AppParCurves_ResolConstraint;
class AppParCurves_Function;
class AppParCurves_BSpFunction;
class AppParCurves_Gradient;
class AppParCurves_Gradient_BFGS;
class AppParCurves_ParLeastSquare;
class AppParCurves_ResConstraint;
class AppParCurves_ParFunction;
class AppParCurves_BSpGradient;
class AppParCurves_BSpGradient_BFGS;
class AppParCurves_BSpParLeastSquare;
class AppParCurves_BSpParFunction;
class AppParCurves_Array1OfConstraintCouple;
class AppParCurves_HArray1OfConstraintCouple;
class AppParCurves_Array1OfMultiPoint;
class AppParCurves_HArray1OfMultiPoint;
class AppParCurves_Array1OfMultiCurve;
class AppParCurves_HArray1OfMultiCurve;
class AppParCurves_SequenceOfMultiCurve;
class AppParCurves_Array1OfMultiBSpCurve;
class AppParCurves_HArray1OfMultiBSpCurve;
class AppParCurves_SequenceOfMultiBSpCurve;
class AppParCurves_SequenceNodeOfSequenceOfMultiCurve;
class AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve;


//! Parallel Approximation in n curves. <br>
//! This package gives all the algorithms used to approximate a MultiLine <br>
//! described by the tool MLineTool. <br>
//! The result of the approximation will be a MultiCurve. <br>
class AppParCurves  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void BernsteinMatrix(const Standard_Integer NbPoles,const math_Vector& U,math_Matrix& A) ;
  
  Standard_EXPORT   static  void Bernstein(const Standard_Integer NbPoles,const math_Vector& U,math_Matrix& A,math_Matrix& DA) ;
  
  Standard_EXPORT   static  void SecondDerivativeBernstein(const Standard_Real U,math_Vector& DDA) ;
  
  Standard_EXPORT   static  void SplineFunction(const Standard_Integer NbPoles,const Standard_Integer Degree,const math_Vector& Parameters,const math_Vector& FlatKnots,math_Matrix& A,math_Matrix& DA,math_IntegerVector& Index) ;





protected:





private:




friend class AppParCurves_MultiPoint;
friend class AppParCurves_MultiCurve;
friend class AppParCurves_MultiBSpCurve;
friend class AppParCurves_ConstraintCouple;
friend class AppParCurves_LeastSquare;
friend class AppParCurves_ResolConstraint;
friend class AppParCurves_Function;
friend class AppParCurves_BSpFunction;
friend class AppParCurves_Gradient;
friend class AppParCurves_Gradient_BFGS;
friend class AppParCurves_ParLeastSquare;
friend class AppParCurves_ResConstraint;
friend class AppParCurves_ParFunction;
friend class AppParCurves_BSpGradient;
friend class AppParCurves_BSpGradient_BFGS;
friend class AppParCurves_BSpParLeastSquare;
friend class AppParCurves_BSpParFunction;
friend class AppParCurves_Array1OfConstraintCouple;
friend class AppParCurves_HArray1OfConstraintCouple;
friend class AppParCurves_Array1OfMultiPoint;
friend class AppParCurves_HArray1OfMultiPoint;
friend class AppParCurves_Array1OfMultiCurve;
friend class AppParCurves_HArray1OfMultiCurve;
friend class AppParCurves_SequenceOfMultiCurve;
friend class AppParCurves_Array1OfMultiBSpCurve;
friend class AppParCurves_HArray1OfMultiBSpCurve;
friend class AppParCurves_SequenceOfMultiBSpCurve;
friend class AppParCurves_SequenceNodeOfSequenceOfMultiCurve;
friend class AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
