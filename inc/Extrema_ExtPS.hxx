// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtPS_HeaderFile
#define _Extrema_ExtPS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Adaptor3d_SurfacePtr_HeaderFile
#include <Adaptor3d_SurfacePtr.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Extrema_ExtPElS_HeaderFile
#include <Extrema_ExtPElS.hxx>
#endif
#ifndef _Extrema_GenExtPS_HeaderFile
#include <Extrema_GenExtPS.hxx>
#endif
#ifndef _Extrema_SequenceOfPOnSurf_HeaderFile
#include <Extrema_SequenceOfPOnSurf.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Handle_Extrema_ExtPExtS_HeaderFile
#include <Handle_Extrema_ExtPExtS.hxx>
#endif
#ifndef _Handle_Extrema_ExtPRevS_HeaderFile
#include <Handle_Extrema_ExtPRevS.hxx>
#endif
#ifndef _Extrema_ExtFlag_HeaderFile
#include <Extrema_ExtFlag.hxx>
#endif
#ifndef _Extrema_ExtAlgo_HeaderFile
#include <Extrema_ExtAlgo.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Extrema_ExtPExtS;
class Extrema_ExtPRevS;
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class gp_Pnt;
class Adaptor3d_Surface;
class Extrema_POnSurf;


//! It calculates all the extremum distances <br>
//!          between a point and a surface. <br>
//!          These distances can be minimum or maximum. <br>
class Extrema_ExtPS  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_ExtPS();
  //! It calculates all the distances. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
  Standard_EXPORT   Extrema_ExtPS(const gp_Pnt& P,const Adaptor3d_Surface& S,const Standard_Real TolU,const Standard_Real TolV,const Extrema_ExtFlag F = Extrema_ExtFlag_MINMAX,const Extrema_ExtAlgo A = Extrema_ExtAlgo_Grad);
  //! It calculates all the distances. <br>
//!          NbU and NbV are used to locate the close points <br>
//!          to find the zeros. They must be great enough <br>
//!          such that if there is N extrema, there will <br>
//!          be N extrema between P and the grid. <br>
//!          TolU et TolV are used to determine the conditions <br>
//!          to stop the iterations; at the iteration number n: <br>
//!           (Un - Un-1) < TolU and (Vn - Vn-1) < TolV . <br>
  Standard_EXPORT   Extrema_ExtPS(const gp_Pnt& P,const Adaptor3d_Surface& S,const Standard_Real Uinf,const Standard_Real Usup,const Standard_Real Vinf,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV,const Extrema_ExtFlag F = Extrema_ExtFlag_MINMAX,const Extrema_ExtAlgo A = Extrema_ExtAlgo_Grad);
  //! Initializes the fields of the algorithm. <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_Surface& S,const Standard_Real Uinf,const Standard_Real Usup,const Standard_Real Vinf,const Standard_Real Vsup,const Standard_Real TolU,const Standard_Real TolV) ;
  //! Computes the distances. <br>
//!          An exception is raised if the fieds have not been <br>
//!          initialized. <br>
  Standard_EXPORT     void Perform(const gp_Pnt& P) ;
  //! Returns True if the distances are found. <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the number of extremum distances. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Returns the value of the Nth resulting square distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the point of the Nth resulting distance. <br>
  Standard_EXPORT    const Extrema_POnSurf& Point(const Standard_Integer N) const;
  //! if the surface is a trimmed surface, <br>
//!          dUfVf is a square distance between <P> and the point <br>
//!          of parameter FirstUParameter and FirstVParameter <PUfVf>. <br>
//!          dUfVl is a square distance between <P> and the point <br>
//!          of parameter FirstUParameter and LastVParameter <PUfVl>. <br>
//!          dUlVf is a square distance between <P> and the point <br>
//!          of parameter LastUParameter and FirstVParameter <PUlVf>. <br>
//!          dUlVl is a square distance between <P> and the point <br>
//!          of parameter LastUParameter and LastVParameter <PUlVl>. <br>
  Standard_EXPORT     void TrimmedSquareDistances(Standard_Real& dUfVf,Standard_Real& dUfVl,Standard_Real& dUlVf,Standard_Real& dUlVl,gp_Pnt& PUfVf,gp_Pnt& PUfVl,gp_Pnt& PUlVf,gp_Pnt& PUlVl) const;
  
  Standard_EXPORT     void SetFlag(const Extrema_ExtFlag F) ;
  
  Standard_EXPORT     void SetAlgo(const Extrema_ExtAlgo A) ;





protected:





private:

  
  Standard_EXPORT     Adaptor3d_SurfacePtr Bidon() const;
  
  Standard_EXPORT     void TreatSolution(const Extrema_POnSurf& PS,const Standard_Real Val) ;


Adaptor3d_SurfacePtr myS;
Standard_Boolean myDone;
Extrema_ExtPElS myExtPElS;
Extrema_GenExtPS myExtPS;
Extrema_SequenceOfPOnSurf myPoints;
Standard_Real myuinf;
Standard_Real myusup;
Standard_Real myvinf;
Standard_Real myvsup;
Standard_Real mytolu;
Standard_Real mytolv;
Standard_Real d11;
Standard_Real d12;
Standard_Real d21;
Standard_Real d22;
gp_Pnt P11;
gp_Pnt P12;
gp_Pnt P21;
gp_Pnt P22;
TColStd_SequenceOfReal mySqDist;
GeomAbs_SurfaceType mytype;
Handle_Extrema_ExtPExtS myExtPExtS;
Handle_Extrema_ExtPRevS myExtPRevS;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
