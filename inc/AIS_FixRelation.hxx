// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_FixRelation_HeaderFile
#define _AIS_FixRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_FixRelation_HeaderFile
#include <Handle_AIS_FixRelation.hxx>
#endif

#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _PrsMgr_PresentationManager3d_HeaderFile
#include <PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs3d_Projector_HeaderFile
#include <Handle_Prs3d_Projector.hxx>
#endif
#ifndef _Handle_Geom_Transformation_HeaderFile
#include <Handle_Geom_Transformation.hxx>
#endif
#ifndef _Handle_SelectMgr_Selection_HeaderFile
#include <Handle_SelectMgr_Selection.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class TopoDS_Shape;
class Geom_Plane;
class TopoDS_Wire;
class gp_Pnt;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class TopoDS_Vertex;
class Geom_Curve;
class TopoDS_Edge;
class gp_Lin;
class gp_Circ;


//! Constructs and manages a constraint by a fixed <br>
//! relation between two or more interactive datums. This <br>
//! constraint is represented by a wire from a shape - <br>
//! point, vertex, or edge - in the first datum and a <br>
//! corresponding shape in the second. <br>
//! Warning: This relation is not bound with any kind of parametric <br>
//!          constraint : it represents the "status" of an parametric <br>
//!          object. <br>
class AIS_FixRelation : public AIS_Relation {

public:

  //!  initializes the vertex aShape, the <br>
//!   plane aPlane and the wire aWire, which connects <br>
//!   the two vertices in a fixed relation. <br>
  Standard_EXPORT   AIS_FixRelation(const TopoDS_Shape& aShape,const Handle(Geom_Plane)& aPlane,const TopoDS_Wire& aWire);
  //!  initializes the vertex aShape, the <br>
//!   plane aPlane and the wire aWire, the position <br>
//!   aPosition, the arrow size anArrowSize and the <br>
//! wire aWire, which connects the two vertices in a fixed relation. <br>
  Standard_EXPORT   AIS_FixRelation(const TopoDS_Shape& aShape,const Handle(Geom_Plane)& aPlane,const TopoDS_Wire& aWire,const gp_Pnt& aPosition,const Standard_Real anArrowSize = 0.01);
  //!  initializes the edge aShape and the plane aPlane. <br>
  Standard_EXPORT   AIS_FixRelation(const TopoDS_Shape& aShape,const Handle(Geom_Plane)& aPlane);
  //! initializes the edge aShape, the <br>
//!   plane aPlane, the position aPosition and the arrow <br>
//!   size anArrowSize. <br>
  Standard_EXPORT   AIS_FixRelation(const TopoDS_Shape& aShape,const Handle(Geom_Plane)& aPlane,const gp_Pnt& aPosition,const Standard_Real anArrowSize = 0.01);
  //! Returns the wire which connects vertices in a fixed relation. <br>
  Standard_EXPORT     TopoDS_Wire Wire() ;
  //! Constructs the wire aWire. This connects vertices <br>
//! which are in a fixed relation. <br>
  Standard_EXPORT     void SetWire(const TopoDS_Wire& aWire) ;
  //! Returns true if the Interactive Objects in the relation <br>
//! are movable. <br>
      virtual  Standard_Boolean IsMovable() const;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_FixRelation)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   virtual  void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  //! computes the presentation for <myFixShape> if it's a <br>
//!          vertex. <br>
  Standard_EXPORT     void ComputeVertex(const TopoDS_Vertex& FixVertex,gp_Pnt& curpos) ;
  
  Standard_EXPORT     gp_Pnt ComputePosition(const Handle(Geom_Curve)& curv1,const Handle(Geom_Curve)& curv2,const gp_Pnt& firstp1,const gp_Pnt& lastp1,const gp_Pnt& firstp2,const gp_Pnt& lastp2) const;
  
  Standard_EXPORT     gp_Pnt ComputePosition(const Handle(Geom_Curve)& curv,const gp_Pnt& firstp,const gp_Pnt& lastp) const;
  //! computes the presentation for <myFixShape> if it's a <br>
//!          edge. <br>
  Standard_EXPORT     void ComputeEdge(const TopoDS_Edge& FixEdge,gp_Pnt& curpos) ;
  
  Standard_EXPORT     void ComputeLinePosition(const gp_Lin& glin,gp_Pnt& pos,Standard_Real& pfirst,Standard_Real& plast) ;
  
  Standard_EXPORT     void ComputeCirclePosition(const gp_Circ& gcirc,gp_Pnt& pos,Standard_Real& pfirst,Standard_Real& plast) ;
  
  Standard_EXPORT   static  Standard_Boolean ConnectedEdges(const TopoDS_Wire& aWire,const TopoDS_Vertex& aVertex,TopoDS_Edge& Edge1,TopoDS_Edge& Edge2) ;

TopoDS_Wire myWire;
gp_Pnt myPntAttach;


};


#include <AIS_FixRelation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
