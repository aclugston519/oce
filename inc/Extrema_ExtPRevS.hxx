// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtPRevS_HeaderFile
#define _Extrema_ExtPRevS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Extrema_ExtPRevS_HeaderFile
#include <Handle_Extrema_ExtPRevS.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurfaceOfRevolution_HeaderFile
#include <Handle_Adaptor3d_HSurfaceOfRevolution.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Extrema_GenExtPS_HeaderFile
#include <Extrema_GenExtPS.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Extrema_POnSurf_HeaderFile
#include <Extrema_POnSurf.hxx>
#endif
#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
class Adaptor3d_HSurfaceOfRevolution;
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Pnt;
class Extrema_POnSurf;


//! It calculates all the extremum (minimum and <br>
//!          maximum) distances between a point and a surface <br>
//!          of revolution. <br>
class Extrema_ExtPRevS : public Standard_Transient {

public:

  
  Standard_EXPORT   Extrema_ExtPRevS();
  //! It calculates all the distances between a point <br>
//!          from gp and a SurfacePtr from Adaptor3d. <br>
  Standard_EXPORT   Extrema_ExtPRevS(const gp_Pnt& P,const Handle(Adaptor3d_HSurfaceOfRevolution)& S,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real Vmin,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV);
  //! It calculates all the distances between a point <br>
//!          from gp and a SurfacePtr from Adaptor3d. <br>
  Standard_EXPORT   Extrema_ExtPRevS(const gp_Pnt& P,const Handle(Adaptor3d_HSurfaceOfRevolution)& S,const Standard_Real TolU,const Standard_Real TolV);
  
  Standard_EXPORT     void Initialize(const Handle(Adaptor3d_HSurfaceOfRevolution)& S,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real Vmin,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV) ;
  
  Standard_EXPORT     void Perform(const gp_Pnt& P) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth resulting square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the point of the Nth resulting distance. <br>
  Standard_EXPORT    const Extrema_POnSurf& Point(const Standard_Integer N) const;




  DEFINE_STANDARD_RTTI(Extrema_ExtPRevS)

protected:




private: 


Handle_Adaptor3d_HSurfaceOfRevolution myS;
Standard_Real myvinf;
Standard_Real myvsup;
Standard_Real mytolv;
gp_Ax2 myPosition;
Extrema_GenExtPS myExtPS;
Standard_Boolean myIsAnalyticallyComputable;
Standard_Boolean myDone;
Standard_Integer myNbExt;
Standard_Real mySqDist[8];
Extrema_POnSurf myPoint[8];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
