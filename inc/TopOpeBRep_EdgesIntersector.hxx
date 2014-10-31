// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_EdgesIntersector_HeaderFile
#define _TopOpeBRep_EdgesIntersector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _GeomAbs_SurfaceType_HeaderFile
#include <GeomAbs_SurfaceType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IntRes2d_Domain_HeaderFile
#include <IntRes2d_Domain.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom2dInt_GInter_HeaderFile
#include <Geom2dInt_GInter.hxx>
#endif
#ifndef _IntRes2d_SequenceOfIntersectionPoint_HeaderFile
#include <IntRes2d_SequenceOfIntersectionPoint.hxx>
#endif
#ifndef _IntRes2d_SequenceOfIntersectionSegment_HeaderFile
#include <IntRes2d_SequenceOfIntersectionSegment.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _TopOpeBRep_SequenceOfPoint2d_HeaderFile
#include <TopOpeBRep_SequenceOfPoint2d.hxx>
#endif
#ifndef _TopOpeBRep_P2Dstatus_HeaderFile
#include <TopOpeBRep_P2Dstatus.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TopOpeBRepDS_Config_HeaderFile
#include <TopOpeBRepDS_Config.hxx>
#endif
class BRepAdaptor_HSurface;
class TopoDS_Shape;
class Bnd_Box;
class Geom2dAdaptor_Curve;
class BRepAdaptor_Surface;
class TCollection_AsciiString;
class TopOpeBRep_SequenceOfPoint2d;
class TopOpeBRep_Point2d;
class IntRes2d_IntersectionSegment;
class IntRes2d_IntersectionPoint;
class TopOpeBRepDS_Transition;
class gp_Pnt;


//! Describes the intersection of two edges on the same surface <br>
class TopOpeBRep_EdgesIntersector  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRep_EdgesIntersector();
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~TopOpeBRep_EdgesIntersector(){Delete() ; }
  
  Standard_EXPORT     void SetFaces(const TopoDS_Shape& F1,const TopoDS_Shape& F2) ;
  
  Standard_EXPORT     void SetFaces(const TopoDS_Shape& F1,const TopoDS_Shape& F2,const Bnd_Box& B1,const Bnd_Box& B2) ;
  
  Standard_EXPORT     void ForceTolerances(const Standard_Real Tol1,const Standard_Real Tol2) ;
  
  Standard_EXPORT     void Dimension(const Standard_Integer D) ;
  //! set working space dimension D = 1 for E &|| W, 2 for E in F <br>
  Standard_EXPORT     Standard_Integer Dimension() const;
  
  Standard_EXPORT     void Perform(const TopoDS_Shape& E1,const TopoDS_Shape& E2,const Standard_Boolean ReduceSegments = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean IsEmpty() ;
  //! true if at least one intersection segment. <br>
  Standard_EXPORT     Standard_Boolean HasSegment() const;
  //! = mySameDomain. <br>
  Standard_EXPORT     Standard_Boolean SameDomain() const;
  
  Standard_EXPORT    const TopoDS_Shape& Edge(const Standard_Integer Index) const;
  
  Standard_EXPORT    const Geom2dAdaptor_Curve& Curve(const Standard_Integer Index) const;
  
  Standard_EXPORT    const TopoDS_Shape& Face(const Standard_Integer Index) const;
  
  Standard_EXPORT    const BRepAdaptor_Surface& Surface(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Boolean SurfacesSameOriented() const;
  
  Standard_EXPORT     Standard_Boolean FacesSameOriented() const;
  
  Standard_EXPORT     Standard_Real ToleranceMax() const;
  
  Standard_EXPORT     void Tolerances(Standard_Real& tol1,Standard_Real& tol2) const;
  
  Standard_EXPORT     Standard_Real Tolerance2() const;
  
  Standard_EXPORT     Standard_Integer NbPoints() const;
  
  Standard_EXPORT     Standard_Integer NbSegments() const;
  
  Standard_EXPORT     void Dump(const TCollection_AsciiString& str,const Standard_Integer ie1 = 0,const Standard_Integer ie2 = 0) ;
  
  Standard_EXPORT     void InitPoint(const Standard_Boolean selectkeep = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean MorePoint() const;
  
  Standard_EXPORT     void NextPoint() ;
  
  Standard_EXPORT    const TopOpeBRep_SequenceOfPoint2d& Points() const;
  
  Standard_EXPORT    const TopOpeBRep_Point2d& Point() const;
  
  Standard_EXPORT    const TopOpeBRep_Point2d& Point(const Standard_Integer I) const;
  
  Standard_EXPORT   virtual  Standard_Boolean ReduceSegment(TopOpeBRep_Point2d& P1,TopOpeBRep_Point2d& P2,TopOpeBRep_Point2d& Pn) const;
  
  Standard_EXPORT     TopOpeBRep_P2Dstatus Status1() const;





protected:





private:

  
  Standard_EXPORT     void Find() ;
  //! process if current edges can be considered as SameDomain <br>
  Standard_EXPORT     Standard_Boolean ComputeSameDomain() ;
  //! set field mySameDomain to B and return B value <br>
  Standard_EXPORT     Standard_Boolean SetSameDomain(const Standard_Boolean B) ;
  
  Standard_EXPORT     void MakePoints2d() ;
  
  Standard_EXPORT     void ReduceSegments() ;
  
  Standard_EXPORT    const IntRes2d_IntersectionSegment& Segment1() const;
  
  Standard_EXPORT     Standard_Boolean IsOpposite1() const;
  
  Standard_EXPORT     void InitPoint1() ;
  
  Standard_EXPORT     Standard_Boolean MorePoint1() const;
  
  Standard_EXPORT     void NextPoint1() ;
  
  Standard_EXPORT    const IntRes2d_IntersectionPoint& Point1() const;
  
  Standard_EXPORT     TopOpeBRepDS_Transition Transition1(const Standard_Integer Index,const TopAbs_Orientation EO) const;
  
  Standard_EXPORT     Standard_Real Parameter1(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Boolean IsVertex1(const Standard_Integer Index) ;
  
  Standard_EXPORT    const TopoDS_Shape& Vertex1(const Standard_Integer Index) ;
  
  Standard_EXPORT     gp_Pnt Value1() const;
  
  Standard_EXPORT     Standard_Boolean IsPointOfSegment1() const;
  
  Standard_EXPORT     Standard_Integer Index1() const;
  //! geometric configuration of E1,E2 at current intersection point : <br>
//! UNSHGEOMETRY if the edges do not share geometry. <br>
//! SAMEORIENTED if the edges share geometry and are same oriented. <br>
//! DIFFORIENTED if the edges share geometry and are not same oriented. <br>
  Standard_EXPORT     TopOpeBRepDS_Config EdgesConfig1() const;


TopoDS_Face myFace1;
TopoDS_Face myFace2;
Handle_BRepAdaptor_HSurface mySurface1;
Handle_BRepAdaptor_HSurface mySurface2;
GeomAbs_SurfaceType mySurfaceType1;
GeomAbs_SurfaceType mySurfaceType2;
Standard_Boolean mySurfacesSameOriented;
Standard_Boolean myFacesSameOriented;
IntRes2d_Domain myDomain1;
IntRes2d_Domain myDomain2;
TopoDS_Edge myEdge1;
TopoDS_Edge myEdge2;
Geom2dAdaptor_Curve myCurve1;
Geom2dAdaptor_Curve myCurve2;
Standard_Real myTol1;
Standard_Real myTol2;
Standard_Boolean myTolForced;
Geom2dInt_GInter myIntersector;
IntRes2d_SequenceOfIntersectionPoint mylpnt;
IntRes2d_SequenceOfIntersectionSegment mylseg;
Standard_Integer myNbPoints;
Standard_Integer myNbSegments;
Standard_Integer myTrueNbPoints;
Standard_Integer myPointIndex;
Standard_Integer myIsVertexPointIndex;
Standard_Integer myIsVertexIndex;
Standard_Boolean myIsVertexValue;
TopoDS_Vertex myIsVertexVertex;
Standard_Integer myDimension;
Standard_Boolean myHasSegment;
Standard_Boolean mySameDomain;
Standard_Boolean myf1surf1F_sameoriented;
Standard_Boolean myf2surf1F_sameoriented;
TopOpeBRep_SequenceOfPoint2d mysp2d;
Standard_Integer myip2d;
Standard_Integer mynp2d;
Standard_Boolean myselectkeep;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
