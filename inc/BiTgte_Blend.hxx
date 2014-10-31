// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BiTgte_Blend_HeaderFile
#define _BiTgte_Blend_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_HeaderFile
#include <BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _TopTools_MapOfShape_HeaderFile
#include <TopTools_MapOfShape.hxx>
#endif
#ifndef _BRepOffset_Analyse_HeaderFile
#include <BRepOffset_Analyse.hxx>
#endif
#ifndef _BRepOffset_DataMapOfShapeOffset_HeaderFile
#include <BRepOffset_DataMapOfShapeOffset.hxx>
#endif
#ifndef _BRepAlgo_Image_HeaderFile
#include <BRepAlgo_Image.hxx>
#endif
#ifndef _Handle_BRepAlgo_AsDes_HeaderFile
#include <Handle_BRepAlgo_AsDes.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _BiTgte_ContactType_HeaderFile
#include <BiTgte_ContactType.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class BRepAlgo_AsDes;
class TColStd_HArray1OfInteger;
class StdFail_NotDone;
class Standard_OutOfRange;
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Edge;
class Geom_Surface;
class TopTools_ListOfShape;
class Geom_Curve;
class Geom2d_Curve;
class BiTgte_DataMapOfShapeBox;
class BRepOffset_Offset;
class BRepOffset_Inter3d;


//! Root class <br>
class BiTgte_Blend  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BiTgte_Blend();
  //! <S>: Shape to be rounded <br>
//!          <Radius>: radius of the fillet <br>
//!          <Tol>: Tol3d used in approximations <br>
//!          <NUBS>: if true,  generate only NUBS surfaces, <br>
//!                  if false, generate analytical surfaces if possible <br>
//! <br>
  Standard_EXPORT   BiTgte_Blend(const TopoDS_Shape& S,const Standard_Real Radius,const Standard_Real Tol,const Standard_Boolean NUBS);
  
  Standard_EXPORT     void Init(const TopoDS_Shape& S,const Standard_Real Radius,const Standard_Real Tol,const Standard_Boolean NUBS) ;
  //! Clear all the Fields. <br>
  Standard_EXPORT     void Clear() ;
  //!  Set two faces   of <myShape> on which the  Sphere <br>
//!                    must roll. <br>
  Standard_EXPORT     void SetFaces(const TopoDS_Face& F1,const TopoDS_Face& F2) ;
  //! Set an edge of <myShape> to be rounded. <br>
  Standard_EXPORT     void SetEdge(const TopoDS_Edge& Edge) ;
  //! Set a face on which the fillet must stop. <br>
  Standard_EXPORT     void SetStoppingFace(const TopoDS_Face& Face) ;
  //! Compute the generated surfaces. <br>
//!          If <BuildShape> is true, compute the resulting Shape. <br>
//!          If false, only the blending surfaces are computed. <br>
  Standard_EXPORT     void Perform(const Standard_Boolean BuildShape = Standard_True) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! returns the result <br>
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  //! returns the Number of generated surfaces. <br>
  Standard_EXPORT     Standard_Integer NbSurfaces() const;
  //! returns the surface of range Index <br>
  Standard_EXPORT     Handle_Geom_Surface Surface(const Standard_Integer Index) const;
  //! returns the surface of range Index <br>
  Standard_EXPORT    const TopoDS_Face& Face(const Standard_Integer Index) const;
  //! set in <LC> all the center lines <br>
  Standard_EXPORT     void CenterLines(TopTools_ListOfShape& LC) const;
  //! returns  the surface generated  by the centerline. <br>
//!          <CenterLine> may be <br>
//!             - an edge  : generate a pipe. <br>
//!             - a vertex : generate a sphere. <br>
//!  Warning: returns a Null Handle if <CenterLine> generates <br>
//!          no surface. <br>
  Standard_EXPORT     Handle_Geom_Surface Surface(const TopoDS_Shape& CenterLine) const;
  //! returns  the face generated  by the centerline. <br>
//!          <CenterLine> may be <br>
//!             - an edge  : generate a pipe. <br>
//!             - a vertex : generate a sphere. <br>
//!  Warning: returns a Null Shape if <CenterLine> generates <br>
//!          no surface. <br>
  Standard_EXPORT    const TopoDS_Face& Face(const TopoDS_Shape& CenterLine) const;
  //! returns the type of contact <br>
  Standard_EXPORT     BiTgte_ContactType ContactType(const Standard_Integer Index) const;
  //! gives the first support shape relative to <br>
//!          SurfaceFillet(Index); <br>
  Standard_EXPORT    const TopoDS_Shape& SupportShape1(const Standard_Integer Index) const;
  //! gives the second support shape relative to <br>
//!          SurfaceFillet(Index); <br>
  Standard_EXPORT    const TopoDS_Shape& SupportShape2(const Standard_Integer Index) const;
  //! gives the 3d curve of SurfaceFillet(Index) <br>
//!          on SupportShape1(Index) <br>
  Standard_EXPORT     Handle_Geom_Curve CurveOnShape1(const Standard_Integer Index) const;
  //! gives the 3d curve of SurfaceFillet(Index) <br>
//!          on SupportShape2(Index) <br>
  Standard_EXPORT     Handle_Geom_Curve CurveOnShape2(const Standard_Integer Index) const;
  //! gives the PCurve associated to CurvOnShape1(Index) <br>
//!          on the support face <br>
//!  Warning: returns a Null Handle if SupportShape1 is not a Face <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurveOnFace1(const Standard_Integer Index) const;
  //! gives the PCurve associated to CurveOnShape1(Index) <br>
//!          on the Fillet <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurve1OnFillet(const Standard_Integer Index) const;
  //! gives the PCurve  associated to CurveOnShape2(Index) <br>
//!          on the  support face <br>
//!  Warning: returns a Null Handle if SupportShape2 is not a Face <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurveOnFace2(const Standard_Integer Index) const;
  //! gives the PCurve associated to CurveOnShape2(Index) <br>
//!          on the fillet <br>
  Standard_EXPORT     Handle_Geom2d_Curve PCurve2OnFillet(const Standard_Integer Index) const;
  
  Standard_EXPORT     Standard_Integer NbBranches() ;
  //!  Set in <From>,<To>   the indices of the faces  of <br>
//!  the branche <Index>. <br>
//! <br>
//!  i.e: Branche<Index> = Face(From) + Face(From+1) + ..+ Face(To) <br>
  Standard_EXPORT     void IndicesOfBranche(const Standard_Integer Index,Standard_Integer& From,Standard_Integer& To) const;
  //! Computes the center lines <br>
  Standard_EXPORT     void ComputeCenters() ;





protected:





private:

  //! Perform the generated surfaces. <br>
  Standard_EXPORT     void ComputeSurfaces() ;
  //! Build the resulting shape <br>
//!          All the faces must be computed <br>
  Standard_EXPORT     void ComputeShape() ;
  //! Computes the intersections with <Face> and all the <br>
//!           OffsetFaces stored  in <myMapSF>.  Returns <True> <br>
//!          if an intersections ends on a boundary of a Face. <br>
  Standard_EXPORT     Standard_Boolean Intersect(const TopoDS_Shape& Init,const TopoDS_Face& Face,const BiTgte_DataMapOfShapeBox& MapSBox,const BRepOffset_Offset& OF1,BRepOffset_Inter3d& Inter) ;


Standard_Real myRadius;
Standard_Real myTol;
Standard_Boolean myNubs;
TopoDS_Shape myShape;
TopoDS_Shape myResult;
Standard_Boolean myBuildShape;
TopTools_IndexedDataMapOfShapeListOfShape myAncestors;
BRepFill_DataMapOfShapeDataMapOfShapeListOfShape myCreated;
TopTools_DataMapOfShapeListOfShape myCutEdges;
TopTools_IndexedMapOfShape myFaces;
TopTools_IndexedMapOfShape myEdges;
TopTools_MapOfShape myStopFaces;
BRepOffset_Analyse myAnalyse;
TopTools_IndexedMapOfShape myCenters;
BRepOffset_DataMapOfShapeOffset myMapSF;
BRepAlgo_Image myInitOffsetFace;
BRepAlgo_Image myImage;
BRepAlgo_Image myImageOffset;
Handle_BRepAlgo_AsDes myAsDes;
Standard_Integer myNbBranches;
Handle_TColStd_HArray1OfInteger myIndices;
Standard_Boolean myDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
