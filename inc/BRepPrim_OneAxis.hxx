// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_OneAxis_HeaderFile
#define _BRepPrim_OneAxis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepPrim_Builder_HeaderFile
#include <BRepPrim_Builder.hxx>
#endif
#ifndef _gp_Ax2_HeaderFile
#include <gp_Ax2.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopoDS_Shell_HeaderFile
#include <TopoDS_Shell.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopoDS_Vertex_HeaderFile
#include <TopoDS_Vertex.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class BRepPrim_Builder;
class gp_Ax2;
class TopoDS_Face;
class TopoDS_Edge;
class gp_Pnt2d;
class TopoDS_Shell;
class TopoDS_Wire;
class TopoDS_Vertex;


//! Algorithm to  build  primitives with  one  axis of <br>
//!          revolution. <br>
//! <br>
//!          The revolution  body is described by : <br>
//! <br>
//!          A coordinate  system (Ax2 from  gp). The Z axis is <br>
//!          the rotational axis. <br>
//! <br>
//!          An Angle around the Axis, When  the Angle  is 2*PI <br>
//!          the primitive is not limited  by planar faces. The <br>
//!          U parameter range from 0 to Angle. <br>
//! <br>
//!          A parameter range VMin, VMax on the meridian. <br>
//! <br>
//!          A meridian : The  meridian is a curve described by <br>
//!          a set of deferred methods. <br>
//! <br>
//! <br>
//!         The  topology consists of  A shell,  Faces,  Wires, <br>
//!         Edges and Vertices.  Methods  are provided to build <br>
//!         all the elements.  Building an element  implies the <br>
//!         automatic building  of  all its  sub-elements. <br>
//! <br>
//!         So building the shell builds everything. <br>
//! <br>
//!         There are at most 5 faces : <br>
//! <br>
//!         - The LateralFace. <br>
//! <br>
//!         - The TopFace and the BottomFace. <br>
//! <br>
//!         - The StartFace and the EndFace. <br>
//! <br>
class BRepPrim_OneAxis  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   virtual  void Delete() ;
~BRepPrim_OneAxis()
{
  Delete();
}
  //! The MeridianOffset is added  to the  parameters on <br>
//!          the meridian curve and  to  the  V values  of  the <br>
//!          pcurves. This is  used for the sphere for example, <br>
//!          to give a range on the meridian  edge which is not <br>
//!          VMin, VMax. <br>
  Standard_EXPORT     void SetMeridianOffset(const Standard_Real MeridianOffset = 0) ;
  //! Returns the Ax2 from <me>. <br>
  Standard_EXPORT    const gp_Ax2& Axes() const;
  
  Standard_EXPORT     void Axes(const gp_Ax2& A) ;
  
  Standard_EXPORT     Standard_Real Angle() const;
  
  Standard_EXPORT     void Angle(const Standard_Real A) ;
  
  Standard_EXPORT     Standard_Real VMin() const;
  
  Standard_EXPORT     void VMin(const Standard_Real V) ;
  
  Standard_EXPORT     Standard_Real VMax() const;
  
  Standard_EXPORT     void VMax(const Standard_Real V) ;
  //! Returns a face with  no edges.  The surface is the <br>
//!          lateral surface with normals pointing outward. The <br>
//!          U parameter is the angle with the  origin on the X <br>
//!          axis. The  V parameter is   the  parameter of  the <br>
//!          meridian. <br>
  Standard_EXPORT   virtual  TopoDS_Face MakeEmptyLateralFace() const = 0;
  //! Returns  an  edge with  a 3D curve   made from the <br>
//!          meridian  in the XZ  plane rotated by <Ang> around <br>
//!          the Z-axis. Ang may be 0 or myAngle. <br>
  Standard_EXPORT   virtual  TopoDS_Edge MakeEmptyMeridianEdge(const Standard_Real Ang) const = 0;
  //! Sets the  parametric curve of the  edge <E> in the <br>
//!          face  <F> to be  the   2d representation  of   the <br>
//!          meridian. <br>
  Standard_EXPORT   virtual  void SetMeridianPCurve(TopoDS_Edge& E,const TopoDS_Face& F) const = 0;
  //! Returns the meridian point at parameter <V> in the <br>
//!          plane XZ. <br>
  Standard_EXPORT   virtual  gp_Pnt2d MeridianValue(const Standard_Real V) const = 0;
  //! Returns True if the point of  parameter <V> on the <br>
//!          meridian is on the Axis. Default implementation is <br>
//!          Abs(MeridianValue(V).X()) < Precision::Confusion() <br>
  Standard_EXPORT   virtual  Standard_Boolean MeridianOnAxis(const Standard_Real V) const;
  //! Returns True  if the  meridian is  closed. Default <br>
//!          implementation                                  is <br>
//!          MeridianValue(VMin).IsEqual(MeridianValue(VMax), <br>
//!                                      Precision::Confusion()) <br>
  Standard_EXPORT   virtual  Standard_Boolean MeridianClosed() const;
  //! Returns  True   if  VMax    is  infinite.  Default <br>
//!          Precision::IsPositiveInfinite(VMax); <br>
  Standard_EXPORT   virtual  Standard_Boolean VMaxInfinite() const;
  //! Returns  True   if  VMin    is  infinite.  Default <br>
//!          Precision::IsNegativeInfinite(VMax); <br>
  Standard_EXPORT   virtual  Standard_Boolean VMinInfinite() const;
  //! Returns True if  there is  a top  face. <br>
//! <br>
//!          That is neither : VMaxInfinite() <br>
//!                            MeridianClosed() <br>
//!                            MeridianOnAxis(VMax) <br>
  Standard_EXPORT   virtual  Standard_Boolean HasTop() const;
  //! Returns   True if there is   a bottom  face. <br>
//! <br>
//!          That is neither : VMinInfinite() <br>
//!                            MeridianClosed() <br>
//!                            MeridianOnAxis(VMin) <br>
  Standard_EXPORT   virtual  Standard_Boolean HasBottom() const;
  //! Returns True if  there are Start   and  End faces. <br>
//! <br>
//!          That is : 2*PI  - Angle > Precision::Angular() <br>
  Standard_EXPORT   virtual  Standard_Boolean HasSides() const;
  //! Returns the Shell containing all the  Faces of the <br>
//!          primitive. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Shell& Shell() ;
  //! Returns  the lateral Face.   It is oriented toward <br>
//!          the outside of the primitive. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& LateralFace() ;
  //! Returns the   top planar  Face.    It  is Oriented <br>
//!          toward the +Z axis (outside). <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& TopFace() ;
  //! Returns  the Bottom planar Face.   It is  Oriented <br>
//!          toward the -Z axis (outside). <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& BottomFace() ;
  //! Returns  the  Face   starting   the slice, it   is <br>
//!          oriented toward the exterior of the primitive. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& StartFace() ;
  //! Returns the Face ending the slice, it  is oriented <br>
//!          toward the exterior of the primitive. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Face& EndFace() ;
  //! Returns  the wire in the lateral face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& LateralWire() ;
  //! Returns the   wire in the   lateral  face with the <br>
//!          start edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& LateralStartWire() ;
  //! Returns the wire with in lateral face with the end <br>
//!          edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& LateralEndWire() ;
  //! Returns the wire in the top face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& TopWire() ;
  //! Returns the wire in the bottom face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& BottomWire() ;
  //! Returns the wire  in the  start face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& StartWire() ;
  //! Returns  the wire   in the  start   face  with the <br>
//!          AxisEdge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& AxisStartWire() ;
  //! Returns the Wire in   the end face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& EndWire() ;
  //! Returns  the Wire  in  the   end   face  with  the <br>
//!          AxisEdge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Wire& AxisEndWire() ;
  //! Returns the Edge built along the Axis and oriented <br>
//!          on +Z of the Axis. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& AxisEdge() ;
  //! Returns the   Edge at angle 0. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& StartEdge() ;
  //! Returns the  Edge at  angle Angle.  If !HasSides() <br>
//!          the StartEdge and the EndEdge are the same edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& EndEdge() ;
  //! Returns the linear Edge between start Face and top <br>
//!          Face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& StartTopEdge() ;
  //! Returns the linear  Edge between  start  Face  and <br>
//!          bottom Face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& StartBottomEdge() ;
  //! Returns the linear Edge  between end Face and  top <br>
//!          Face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& EndTopEdge() ;
  //! Returns  the  linear  Edge  between end  Face  and <br>
//!          bottom Face. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& EndBottomEdge() ;
  //! Returns the edge at VMax. If  MeridianClosed() the <br>
//!          TopEdge and the BottomEdge are the same edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& TopEdge() ;
  //! Returns the edge  at VMin. If MeridianClosed() the <br>
//!          TopEdge and the BottomEdge are the same edge. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Edge& BottomEdge() ;
  //! Returns the Vertex at the Top altitude on the axis. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& AxisTopVertex() ;
  //! Returns the Vertex  at the Bottom  altitude on the <br>
//!          axis. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& AxisBottomVertex() ;
  //! Returns the vertex (0,VMax) <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& TopStartVertex() ;
  //! Returns the vertex (angle,VMax) <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& TopEndVertex() ;
  //! Returns the vertex (0,VMin) <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& BottomStartVertex() ;
  //! Returns the vertex (angle,VMax) <br>
//! <br>
  Standard_EXPORT    const TopoDS_Vertex& BottomEndVertex() ;





protected:

  //! Creates a OneAxis algorithm.  <B> is used to build <br>
//!          the Topology. The angle defaults to 2*PI. <br>
  Standard_EXPORT   BRepPrim_OneAxis(const BRepPrim_Builder& B,const gp_Ax2& A,const Standard_Real VMin,const Standard_Real VMax);


BRepPrim_Builder myBuilder;


private:



gp_Ax2 myAxes;
Standard_Real myAngle;
Standard_Real myVMin;
Standard_Real myVMax;
Standard_Real myMeridianOffset;
TopoDS_Shell myShell;
Standard_Boolean ShellBuilt;
TopoDS_Vertex myVertices[6];
Standard_Boolean VerticesBuilt[6];
TopoDS_Edge myEdges[9];
Standard_Boolean EdgesBuilt[9];
TopoDS_Wire myWires[9];
Standard_Boolean WiresBuilt[9];
TopoDS_Face myFaces[5];
Standard_Boolean FacesBuilt[5];


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
