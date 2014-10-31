// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_ShapeTool_HeaderFile
#define _Prs3d_ShapeTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopExp_Explorer_HeaderFile
#include <TopExp_Explorer.hxx>
#endif
#ifndef _TopTools_IndexedDataMapOfShapeListOfShape_HeaderFile
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif
#ifndef _Handle_Poly_PolygonOnTriangulation_HeaderFile
#include <Handle_Poly_PolygonOnTriangulation.hxx>
#endif
#ifndef _Handle_Poly_Polygon3D_HeaderFile
#include <Handle_Poly_Polygon3D.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Face;
class Bnd_Box;
class TopoDS_Edge;
class TopTools_HSequenceOfShape;
class TopoDS_Vertex;
class Poly_Triangulation;
class TopLoc_Location;
class Poly_PolygonOnTriangulation;
class Poly_Polygon3D;


//! describes the behaviour requested for a wireframe <br>
//!          shape presentation. <br>
class Prs3d_ShapeTool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs the tool and initializes it using theShape and theAllVertices <br>
//! (optional) arguments. By default, only isolated and internal vertices are considered, <br>
//! however if theAllVertices argument is equal to True, all shape's vertices are taken into account. <br>
  Standard_EXPORT   Prs3d_ShapeTool(const TopoDS_Shape& theShape,const Standard_Boolean theAllVertices = Standard_False);
  
  Standard_EXPORT     void InitFace() ;
  
  Standard_EXPORT     Standard_Boolean MoreFace() const;
  
  Standard_EXPORT     void NextFace() ;
  
  Standard_EXPORT    const TopoDS_Face& GetFace() const;
  
  Standard_EXPORT     Bnd_Box FaceBound() const;
  
  Standard_EXPORT     Standard_Boolean IsPlanarFace() const;
  
  Standard_EXPORT     void InitCurve() ;
  
  Standard_EXPORT     Standard_Boolean MoreCurve() const;
  
  Standard_EXPORT     void NextCurve() ;
  
  Standard_EXPORT    const TopoDS_Edge& GetCurve() const;
  
  Standard_EXPORT     Bnd_Box CurveBound() const;
  
  Standard_EXPORT     Standard_Integer Neighbours() const;
  
  Standard_EXPORT     Handle_TopTools_HSequenceOfShape FacesOfEdge() const;
  
  Standard_EXPORT     void InitVertex() ;
  
  Standard_EXPORT     Standard_Boolean MoreVertex() const;
  
  Standard_EXPORT     void NextVertex() ;
  
  Standard_EXPORT    const TopoDS_Vertex& GetVertex() const;
  
  Standard_EXPORT     Standard_Boolean HasSurface() const;
  
  Standard_EXPORT     Handle_Poly_Triangulation CurrentTriangulation(TopLoc_Location& l) const;
  
  Standard_EXPORT     Standard_Boolean HasCurve() const;
  
  Standard_EXPORT     void PolygonOnTriangulation(Handle(Poly_PolygonOnTriangulation)& Indices,Handle(Poly_Triangulation)& T,TopLoc_Location& l) const;
  
  Standard_EXPORT     Handle_Poly_Polygon3D Polygon3D(TopLoc_Location& l) const;





protected:





private:



TopoDS_Shape myShape;
TopExp_Explorer myFaceExplorer;
TopTools_IndexedDataMapOfShapeListOfShape myEdgeMap;
TopTools_IndexedMapOfShape myVertexMap;
Standard_Integer myEdge;
Standard_Integer myVertex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
