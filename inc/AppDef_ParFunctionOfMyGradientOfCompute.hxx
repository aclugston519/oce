// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_ParFunctionOfMyGradientOfCompute_HeaderFile
#define _AppDef_ParFunctionOfMyGradientOfCompute_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AppDef_MultiLine_HeaderFile
#include <AppDef_MultiLine.hxx>
#endif
#ifndef _AppParCurves_MultiCurve_HeaderFile
#include <AppParCurves_MultiCurve.hxx>
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
#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _AppDef_ParLeastSquareOfMyGradientOfCompute_HeaderFile
#include <AppDef_ParLeastSquareOfMyGradientOfCompute.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_AppParCurves_HArray1OfConstraintCouple_HeaderFile
#include <Handle_AppParCurves_HArray1OfConstraintCouple.hxx>
#endif
#ifndef _math_MultipleVarFunctionWithGradient_HeaderFile
#include <math_MultipleVarFunctionWithGradient.hxx>
#endif
#ifndef _AppParCurves_Constraint_HeaderFile
#include <AppParCurves_Constraint.hxx>
#endif
class TColStd_HArray1OfInteger;
class AppParCurves_HArray1OfConstraintCouple;
class AppDef_MultiLine;
class AppDef_MyLineTool;
class AppDef_ParLeastSquareOfMyGradientOfCompute;
class AppDef_ResConstraintOfMyGradientOfCompute;
class AppParCurves_MultiCurve;



class AppDef_ParFunctionOfMyGradientOfCompute  : public math_MultipleVarFunctionWithGradient {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AppDef_ParFunctionOfMyGradientOfCompute(const AppDef_MultiLine& SSP,const Standard_Integer FirstPoint,const Standard_Integer LastPoint,const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints,const math_Vector& Parameters,const Standard_Integer Deg);
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Gradient(const math_Vector& X,math_Vector& G) ;
  
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,Standard_Real& F,math_Vector& G) ;
  
  Standard_EXPORT    const math_Vector& NewParameters() const;
  
  Standard_EXPORT    const AppParCurves_MultiCurve& CurveValue() ;
  
  Standard_EXPORT     Standard_Real Error(const Standard_Integer IPoint,const Standard_Integer CurveIndex) const;
  
  Standard_EXPORT     Standard_Real MaxError3d() const;
  
  Standard_EXPORT     Standard_Real MaxError2d() const;
  
  Standard_EXPORT     AppParCurves_Constraint FirstConstraint(const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints,const Standard_Integer FirstPoint) const;
  
  Standard_EXPORT     AppParCurves_Constraint LastConstraint(const Handle(AppParCurves_HArray1OfConstraintCouple)& TheConstraints,const Standard_Integer LastPoint) const;





protected:

  
  Standard_EXPORT     void Perform(const math_Vector& X) ;




private:



Standard_Boolean Done;
AppDef_MultiLine MyMultiLine;
AppParCurves_MultiCurve MyMultiCurve;
Standard_Integer Degre;
math_Vector myParameters;
Standard_Real FVal;
math_Vector ValGrad_F;
math_Matrix MyF;
math_Matrix PTLX;
math_Matrix PTLY;
math_Matrix PTLZ;
math_Matrix A;
math_Matrix DA;
AppDef_ParLeastSquareOfMyGradientOfCompute MyLeastSquare;
Standard_Boolean Contraintes;
Standard_Integer NbP;
Standard_Integer NbCu;
Standard_Integer Adeb;
Standard_Integer Afin;
Handle_TColStd_HArray1OfInteger tabdim;
Standard_Real ERR3d;
Standard_Real ERR2d;
Standard_Integer FirstP;
Standard_Integer LastP;
Handle_AppParCurves_HArray1OfConstraintCouple myConstraints;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
