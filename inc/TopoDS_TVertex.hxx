// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_TVertex_HeaderFile
#define _TopoDS_TVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopoDS_TVertex_HeaderFile
#include <Handle_TopoDS_TVertex.hxx>
#endif

#ifndef _TopoDS_TShape_HeaderFile
#include <TopoDS_TShape.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif


//! A  Vertex is a topological  point in  two or three <br>
//!          dimensions. <br>
class TopoDS_TVertex : public TopoDS_TShape {

public:

  //! Returns VERTEX. <br>
  Standard_EXPORT     TopAbs_ShapeEnum ShapeType() const;




  DEFINE_STANDARD_RTTI(TopoDS_TVertex)

protected:

  //! Construct a vertex. <br>
      TopoDS_TVertex();



private: 




};


#include <TopoDS_TVertex.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
