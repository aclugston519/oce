// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_Intersection_HeaderFile
#define _IntPatch_Intersection_HeaderFile

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
#ifndef _IntPatch_SequenceOfPoint_HeaderFile
#include <IntPatch_SequenceOfPoint.hxx>
#endif
#ifndef _IntPatch_SequenceOfLine_HeaderFile
#include <IntPatch_SequenceOfLine.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_TopolTool_HeaderFile
#include <Handle_Adaptor3d_TopolTool.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IntPatch_Line_HeaderFile
#include <Handle_IntPatch_Line.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_DomainError;
class Standard_ConstructionError;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;
class IntSurf_ListOfPntOn2S;
class IntPatch_Point;
class IntPatch_Line;
class IntPatch_SequenceOfLine;


//! This class provides a generic algorithm to intersect <br>
//!          2 surfaces. <br>
class IntPatch_Intersection  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntPatch_Intersection();
  
  Standard_EXPORT   IntPatch_Intersection(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang);
  
  Standard_EXPORT   IntPatch_Intersection(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Standard_Real TolArc,const Standard_Real TolTang);
  //! Set the tolerances used by the algorithms: <br>
//!          --- Implicit   - Parametric <br>
//!          --- Parametric - Parametric <br>
//!          --- Implicit   - Implicit <br>
//! <br>
//!          TolArc   is  used  to   compute  the intersections <br>
//!          between the restrictions   of  a  surface   and  a <br>
//!          walking line. <br>
//! <br>
//!          TolTang is used to compute the points on a walking <br>
//!          line, and in geometric algorithms. <br>
//! <br>
//!          Fleche  is  a  parameter   used in    the  walking <br>
//!          algorithms to provide small curvatures on a line. <br>
//! <br>
//!          UVMaxStep is  a  parameter   used in  the  walking <br>
//!          algorithms  to    compute the  distance between to <br>
//!          points in their respective parametrtic spaces. <br>
//! <br>
  Standard_EXPORT     void SetTolerances(const Standard_Real TolArc,const Standard_Real TolTang,const Standard_Real UVMaxStep,const Standard_Real Fleche) ;
  
  Standard_EXPORT     void Perform(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang,const Standard_Boolean isGeomInt = Standard_True) ;
  //! If isGeomInt == Standard_False, then method <br>
//!          Param-Param intersection will be used. <br>
  Standard_EXPORT     void Perform(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang,IntSurf_ListOfPntOn2S& LOfPnts,const Standard_Boolean RestrictLine = Standard_True,const Standard_Boolean isGeomInt = Standard_True) ;
  
  Standard_EXPORT     void Perform(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real U1,const Standard_Real V1,const Standard_Real U2,const Standard_Real V2,const Standard_Real TolArc,const Standard_Real TolTang) ;
  
  Standard_EXPORT     void Perform(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Standard_Real TolArc,const Standard_Real TolTang) ;
  //! Returns True if the calculus was succesfull. <br>
        Standard_Boolean IsDone() const;
  //! Returns true if the is no intersection. <br>
        Standard_Boolean IsEmpty() const;
  //! Returns True if the two patches are considered as <br>
//!          entierly tangent, i-e every restriction arc of one <br>
//!          patch is inside the geometric base of the other patch. <br>
        Standard_Boolean TangentFaces() const;
  //! Returns True when the TangentFaces returns True and the <br>
//!          normal vectors evaluated at a point on the first and the <br>
//!          second surface are opposite. <br>
//!          The exception DomainError is raised if TangentFaces <br>
//!          returns False. <br>
        Standard_Boolean OppositeFaces() const;
  //! Returns the number of "single" points. <br>
        Standard_Integer NbPnts() const;
  //! Returns the point of range Index. <br>
//!          An exception is raised if Index<=0 or Index>NbPnt. <br>
       const IntPatch_Point& Point(const Standard_Integer Index) const;
  //! Returns the number of intersection lines. <br>
        Standard_Integer NbLines() const;
  //! Returns the line of range Index. <br>
//!          An exception is raised if Index<=0 or Index>NbLine. <br>
       const Handle_IntPatch_Line& Line(const Standard_Integer Index) const;
  
  Standard_EXPORT    const IntPatch_SequenceOfLine& SequenceOfLine() const;
  //! Dump of each result line. <br>
//!         Mode for more accurate dumps. <br>
//! <br>
  Standard_EXPORT     void Dump(const Standard_Integer Mode,const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2) const;





protected:





private:

  
  Standard_EXPORT     void ParamParamPerfom(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang,IntSurf_ListOfPntOn2S& LOfPnts,const Standard_Boolean RestrictLine,const GeomAbs_SurfaceType typs1,const GeomAbs_SurfaceType typs2) ;
  
  Standard_EXPORT     void GeomGeomPerfom(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang,IntSurf_ListOfPntOn2S& LOfPnts,const Standard_Boolean RestrictLine,const GeomAbs_SurfaceType typs1,const GeomAbs_SurfaceType typs2) ;
  
  Standard_EXPORT     void GeomGeomPerfomTrimSurf(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Real TolArc,const Standard_Real TolTang,IntSurf_ListOfPntOn2S& LOfPnts,const Standard_Boolean RestrictLine,const GeomAbs_SurfaceType typs1,const GeomAbs_SurfaceType typs2) ;
  
  Standard_EXPORT     void GeomParamPerfom(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_TopolTool)& D1,const Handle(Adaptor3d_HSurface)& S2,const Handle(Adaptor3d_TopolTool)& D2,const Standard_Boolean isNotAnalitical,const GeomAbs_SurfaceType typs1,const GeomAbs_SurfaceType typs2) ;


Standard_Boolean done;
Standard_Boolean empt;
Standard_Boolean tgte;
Standard_Boolean oppo;
IntPatch_SequenceOfPoint spnt;
IntPatch_SequenceOfLine slin;
Standard_Real myTolArc;
Standard_Real myTolTang;
Standard_Real myUVMaxStep;
Standard_Real myFleche;
Standard_Boolean myIsStartPnt;
Standard_Real myU1Start;
Standard_Real myV1Start;
Standard_Real myU2Start;
Standard_Real myV2Start;


};


#include <IntPatch_Intersection.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
