// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox_HeaderFile
#define _GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _math_BFGS_HeaderFile
#include <math_BFGS.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class GeomInt_TheMultiLineOfWLApprox;
class GeomInt_TheMultiLineToolOfWLApprox;
class GeomInt_MyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox;
class GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox;
class math_MultipleVarFunctionWithGradient;



class GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox  : public math_BFGS {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox(math_MultipleVarFunctionWithGradient& F,const math_Vector& StartingPoint,const Standard_Real Tolerance3d,const Standard_Real Tolerance2d,const Standard_Real Eps,const Standard_Integer NbIterations = 200);
  
  Standard_EXPORT   virtual  Standard_Boolean IsSolutionReached(math_MultipleVarFunctionWithGradient& F) const;





protected:





private:



Standard_Real myTol3d;
Standard_Real myTol2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
