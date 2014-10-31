// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomLib_CheckBSplineCurve_HeaderFile
#define _GeomLib_CheckBSplineCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
class Geom_BSplineCurve;
class StdFail_NotDone;
class Standard_OutOfRange;


//!  Checks for the end  tangents : wether or not those <br>
//!           are reversed regarding the third or n-3rd control <br>
class GeomLib_CheckBSplineCurve  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomLib_CheckBSplineCurve(const Handle(Geom_BSplineCurve)& Curve,const Standard_Real Tolerance,const Standard_Real AngularTolerance);
  
        Standard_Boolean IsDone() const;
  
  Standard_EXPORT     void NeedTangentFix(Standard_Boolean& FirstFlag,Standard_Boolean& SecondFlag) const;
  
  Standard_EXPORT     void FixTangent(const Standard_Boolean FirstFlag,const Standard_Boolean LastFlag) ;
  //!  modifies the curve <br>
//! by fixing the first or the last tangencies <br>
//! <br>//! if Index3D not in the Range [1,Nb3dSpaces] <br>//! if the Approx is not Done <br>
  Standard_EXPORT     Handle_Geom_BSplineCurve FixedTangent(const Standard_Boolean FirstFlag,const Standard_Boolean LastFlag) ;





protected:





private:



Handle_Geom_BSplineCurve myCurve;
Standard_Boolean myDone;
Standard_Boolean myFixFirstTangent;
Standard_Boolean myFixLastTangent;
Standard_Real myAngularTolerance;
Standard_Real myTolerance;
gp_Pnt myFirstPole;
gp_Pnt myLastPole;


};


#include <GeomLib_CheckBSplineCurve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
