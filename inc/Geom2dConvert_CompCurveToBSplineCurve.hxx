// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dConvert_CompCurveToBSplineCurve_HeaderFile
#define _Geom2dConvert_CompCurveToBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Handle_Geom2d_BoundedCurve_HeaderFile
#include <Handle_Geom2d_BoundedCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_BSplineCurve;
class Geom2d_BoundedCurve;


//! This algorithm converts and concat several curve in an BSplineCurve <br>
class Geom2dConvert_CompCurveToBSplineCurve  {
public:

  DEFINE_STANDARD_ALLOC

  //! Initialize the algorithme <br>
//!        - Parameterisation is used to convert <br>
  Standard_EXPORT   Geom2dConvert_CompCurveToBSplineCurve(const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);
  //! Initialize the algorithme with one curve <br>
//!        - Parameterisation is used to convert <br>
  Standard_EXPORT   Geom2dConvert_CompCurveToBSplineCurve(const Handle(Geom2d_BoundedCurve)& BasisCurve,const Convert_ParameterisationType Parameterisation = Convert_TgtThetaOver2);
  //! Append a curve in the BSpline <br>
//!          Return False if the curve is not G0 with the BSplineCurve. <br>
//!          Tolerance is used to check continuity and decrease <br>
//!          Multiplicty at the common Knot <br>
//!          After is usefull if BasisCurve is a closed curve . <br>
  Standard_EXPORT     Standard_Boolean Add(const Handle(Geom2d_BoundedCurve)& NewCurve,const Standard_Real Tolerance,const Standard_Boolean After = Standard_False) ;
  
  Standard_EXPORT     Handle_Geom2d_BSplineCurve BSplineCurve() const;
  //! Clear result curve <br>
  Standard_EXPORT     void Clear() ;





protected:





private:

  //! Concat two BSplineCurves. <br>
  Standard_EXPORT     void Add(Handle(Geom2d_BSplineCurve)& FirstCurve,Handle(Geom2d_BSplineCurve)& SecondCurve,const Standard_Boolean After) ;


Handle_Geom2d_BSplineCurve myCurve;
Standard_Real myTol;
Convert_ParameterisationType myType;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
