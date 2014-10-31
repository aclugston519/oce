// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopExp_HeaderFile
#define _TopExp_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;
class TopTools_IndexedMapOfShape;
class TopTools_IndexedDataMapOfShapeListOfShape;
class TopoDS_Vertex;
class TopoDS_Edge;
class TopoDS_Wire;
class TopExp_Explorer;


//! This package   provides  basic tools  to   explore the <br>
//!          topological data structures. <br>
//! <br>
//!          * Explorer : A tool to find all sub-shapes of  a given <br>
//!          type. e.g. all faces of a solid. <br>
//! <br>
//!          * Package methods to map sub-shapes of a shape. <br>
//! <br>
//! Level : Public <br>
//!  All methods of all  classes will be public. <br>
class TopExp  {
public:

  DEFINE_STANDARD_ALLOC

  //! Tool to explore a topological data structure. <br>//! Stores in the map <M> all  the sub-shapes of <S> <br>
//!          of type <T>. <br>
//! <br>
//!  Warning: The map is not cleared at first. <br>
  Standard_EXPORT   static  void MapShapes(const TopoDS_Shape& S,const TopAbs_ShapeEnum T,TopTools_IndexedMapOfShape& M) ;
  //! Stores in the map <M> all  the sub-shapes of <S>. <br>
  Standard_EXPORT   static  void MapShapes(const TopoDS_Shape& S,TopTools_IndexedMapOfShape& M) ;
  //! Stores in the map <M> all the subshape of <S> of <br>
//!          type <TS>  for each one append  to  the list all <br>
//!          the ancestors of type <TA>.  For example map all <br>
//!          the edges and bind the list of faces. <br>
//!  Warning: The map is not cleared at first. <br>
  Standard_EXPORT   static  void MapShapesAndAncestors(const TopoDS_Shape& S,const TopAbs_ShapeEnum TS,const TopAbs_ShapeEnum TA,TopTools_IndexedDataMapOfShapeListOfShape& M) ;
  //! Returns the Vertex of orientation FORWARD in E. If <br>
//!          there is none returns a Null Shape. <br>
//!          CumOri = True : taking account the edge orientation <br>
  Standard_EXPORT   static  TopoDS_Vertex FirstVertex(const TopoDS_Edge& E,const Standard_Boolean CumOri = Standard_False) ;
  //! Returns the Vertex of orientation REVERSED in E. If <br>
//!          there is none returns a Null Shape. <br>
//!          CumOri = True : taking account the edge orientation <br>
  Standard_EXPORT   static  TopoDS_Vertex LastVertex(const TopoDS_Edge& E,const Standard_Boolean CumOri = Standard_False) ;
  //! Returns in Vfirst, Vlast the  FORWARD and REVERSED <br>
//!          vertices of the edge <E>. May be null shapes. <br>
//!          CumOri = True : taking account the edge orientation <br>
  Standard_EXPORT   static  void Vertices(const TopoDS_Edge& E,TopoDS_Vertex& Vfirst,TopoDS_Vertex& Vlast,const Standard_Boolean CumOri = Standard_False) ;
  //! Returns  in  Vfirst,  Vlast   the first   and last <br>
//!          vertices of the open wire <W>. May be null shapes. <br>
//!          if   <W>  is closed Vfirst and Vlast  are a same <br>
//!          vertex on <W>. <br>
//!          if <W> is no manifold. VFirst and VLast are null <br>
//!          shapes. <br>
  Standard_EXPORT   static  void Vertices(const TopoDS_Wire& W,TopoDS_Vertex& Vfirst,TopoDS_Vertex& Vlast) ;
  //! Finds   the  vertex <V> common   to  the two edges <br>
//!          <E1,E2>, returns True if this vertex exists. <br>
//! <br>
//!  Warning: <V> has sense only if the value <True> is returned <br>
  Standard_EXPORT   static  Standard_Boolean CommonVertex(const TopoDS_Edge& E1,const TopoDS_Edge& E2,TopoDS_Vertex& V) ;





protected:





private:




friend class TopExp_Explorer;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
