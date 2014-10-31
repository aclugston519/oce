// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_EdgeFace_HeaderFile
#define _IntTools_EdgeFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRepAdaptor_Curve_HeaderFile
#include <BRepAdaptor_Curve.hxx>
#endif
#ifndef _BRepAdaptor_Surface_HeaderFile
#include <BRepAdaptor_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IntTools_Context_HeaderFile
#include <Handle_IntTools_Context.hxx>
#endif
#ifndef _IntTools_SequenceOfRanges_HeaderFile
#include <IntTools_SequenceOfRanges.hxx>
#endif
#ifndef _IntTools_FClass2d_HeaderFile
#include <IntTools_FClass2d.hxx>
#endif
#ifndef _IntTools_CArray1OfReal_HeaderFile
#include <IntTools_CArray1OfReal.hxx>
#endif
#ifndef _IntTools_SequenceOfRoots_HeaderFile
#include <IntTools_SequenceOfRoots.hxx>
#endif
#ifndef _IntTools_SequenceOfCommonPrts_HeaderFile
#include <IntTools_SequenceOfCommonPrts.hxx>
#endif
#ifndef _IntTools_Range_HeaderFile
#include <IntTools_Range.hxx>
#endif
class IntTools_Context;
class TopoDS_Edge;
class TopoDS_Face;
class IntTools_Range;
class IntTools_SequenceOfCommonPrts;
class gp_Pnt;
class BRepAdaptor_Surface;
class IntTools_CArray1OfReal;
class IntTools_CommonPrt;


//! The  class  provides  Edge/Face  algorithm  to  determine <br>
//!         common  parts  between edge and face in  3-d space. <br>
//!          Common  parts can be :  Vertices  or Edges. <br>
class IntTools_EdgeFace  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Empty Constructor <br>
//! <br>
  Standard_EXPORT   IntTools_EdgeFace();
  
//! Initializes algorithm by the edge anEdge <br>
  Standard_EXPORT     void SetEdge(const TopoDS_Edge& anEdge) ;
  
//! Initializes algorithm by edge tolerance <br>
  Standard_EXPORT     void SetTolE(const Standard_Real aTolEdge1) ;
  
//! Initializes algorithm by the face aFace <br>
  Standard_EXPORT     void SetFace(const TopoDS_Face& aFace) ;
  
//! Initializes algorithm by face tolerance <br>
  Standard_EXPORT     void SetTolF(const Standard_Real aTolFace) ;
  
//! Returns edge <br>
  Standard_EXPORT    const TopoDS_Edge& Edge() const;
  
//! Returns face <br>
  Standard_EXPORT    const TopoDS_Face& Face() const;
  
//! Returns  tolerance of the edge <br>
  Standard_EXPORT     Standard_Real TolE() const;
  
//! Returns  tolerance of the face <br>
  Standard_EXPORT     Standard_Real TolF() const;
  
//! Initializes algorithm by discretization value <br>
  Standard_EXPORT     void SetDiscretize(const Standard_Integer aDiscret) ;
  
//! Initializes algorithm by deflection value <br>
  Standard_EXPORT     void SetDeflection(const Standard_Real aDeflection) ;
  
//! Initializes algorithm by parameter tolerance <br>
  Standard_EXPORT     void SetEpsilonT(const Standard_Real anEpsT) ;
  
//! Initializes algorithm by distance tolerance <br>
  Standard_EXPORT     void SetEpsilonNull(const Standard_Real anEpsNull) ;
  
//! Sets boundaries for edge. <br>
//! The algorithm processes edge inside these boundaries. <br>
  Standard_EXPORT     void SetRange(const IntTools_Range& aRange) ;
  
//! Sets boundaries for edge. <br>
//! The algorithm processes edge inside these boundaries. <br>
  Standard_EXPORT     void SetRange(const Standard_Real aFirst,const Standard_Real aLast) ;
  
//! Sets the intersecton context <br>
  Standard_EXPORT     void SetContext(const Handle(IntTools_Context)& theContext) ;
  
//! Gets the intersecton context <br>
  Standard_EXPORT    const Handle_IntTools_Context& Context() const;
  
//! Launches the process <br>
  Standard_EXPORT     void Perform() ;
  
//! Returns true if computation was done <br>
//! successfully, otherwise returns false <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
//! Returns code of completion <br>
//! 0 - means successful completion <br>
//! 1 - the process was not started <br>
//! 2,3,4,5 - invalid source data for the algorithm <br>
//! 6 - discretization failed <br>
//! 7 - no projectable ranges found <br>
//! 11 - distance computing error <br>
  Standard_EXPORT     Standard_Integer ErrorStatus() const;
  
//! Returns results <br>
  Standard_EXPORT    const IntTools_SequenceOfCommonPrts& CommonParts() const;
  
//! Returns boundaries for edge <br>
  Standard_EXPORT    const IntTools_Range& Range() const;
  
  Standard_EXPORT   static  Standard_Boolean IsEqDistance(const gp_Pnt& aP,const BRepAdaptor_Surface& aS,const Standard_Real aT,Standard_Real& aD) ;





protected:

  
  Standard_EXPORT     void CheckData() ;
  
  Standard_EXPORT     void Prepare() ;
  
  Standard_EXPORT     Standard_Boolean IsProjectable(const Standard_Real t) const;
  
  Standard_EXPORT     void FindProjectableRoot(const Standard_Real t1,const Standard_Real t2,const Standard_Integer f1,const Standard_Integer f2,Standard_Real& tRoot) ;
  
  Standard_EXPORT     Standard_Real DistanceFunction(const Standard_Real t) ;
  
  Standard_EXPORT     Standard_Real DerivativeFunction(const Standard_Real t) ;
  
  Standard_EXPORT     void PrepareArgsFuncArrays(const Standard_Real t1,const Standard_Real t2) ;
  
  Standard_EXPORT     void AddDerivativePoints(const IntTools_CArray1OfReal& t,const IntTools_CArray1OfReal& f) ;
  
  Standard_EXPORT     Standard_Real FindSimpleRoot(const Standard_Integer IP,const Standard_Real ta,const Standard_Real tb,const Standard_Real fA) ;
  
  Standard_EXPORT     Standard_Real FindGoldRoot(const Standard_Real ta,const Standard_Real tb,const Standard_Real coeff) ;
  
  Standard_EXPORT     Standard_Integer MakeType(IntTools_CommonPrt& aCP) ;
  
  Standard_EXPORT     void IsIntersection(const Standard_Real ta,const Standard_Real tb) ;
  
  Standard_EXPORT     void FindDerivativeRoot(const IntTools_CArray1OfReal& t,const IntTools_CArray1OfReal& f) ;
  
  Standard_EXPORT     void RemoveIdenticalRoots() ;
  
  Standard_EXPORT     Standard_Boolean CheckTouch(const IntTools_CommonPrt& aCP,Standard_Real& aTX) ;
  
  Standard_EXPORT     Standard_Boolean CheckTouchVertex(const IntTools_CommonPrt& aCP,Standard_Real& aTX) ;




private:



TopoDS_Edge myEdge;
TopoDS_Face myFace;
Standard_Real myTolE;
Standard_Real myTolF;
Standard_Integer myDiscret;
Standard_Real myEpsT;
Standard_Real myEpsNull;
Standard_Real myDeflection;
BRepAdaptor_Curve myC;
Standard_Real myTmin;
Standard_Real myTmax;
BRepAdaptor_Surface myS;
Standard_Real myCriteria;
Standard_Boolean myIsDone;
Standard_Integer myErrorStatus;
Handle_IntTools_Context myContext;
IntTools_SequenceOfRanges myProjectableRanges;
IntTools_FClass2d myFClass2d;
IntTools_CArray1OfReal myFuncArray;
IntTools_CArray1OfReal myArgsArray;
IntTools_SequenceOfRoots mySequenceOfRoots;
IntTools_SequenceOfCommonPrts mySeqOfCommonPrts;
Standard_Real myPar1;
Standard_Boolean myParallel;
IntTools_Range myRange;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
