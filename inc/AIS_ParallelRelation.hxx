// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ParallelRelation_HeaderFile
#define _AIS_ParallelRelation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_ParallelRelation_HeaderFile
#include <Handle_AIS_ParallelRelation.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _AIS_Relation_HeaderFile
#include <AIS_Relation.hxx>
#endif
#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _DsgPrs_ArrowSide_HeaderFile
#include <DsgPrs_ArrowSide.hxx>
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
class TopoDS_Shape;
class Geom_Plane;
class gp_Pnt;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;


//! A framework to display constraints of parallelism <br>
//! between two or more Interactive Objects. These <br>
//! entities can be faces or edges. <br>
class AIS_ParallelRelation : public AIS_Relation {

public:

  //!  Constructs an object to display parallel constraints. <br>
//! This object is defined by the first shape aFShape and <br>
//! the second shape aSShape and the plane aPlane. <br>
  Standard_EXPORT   AIS_ParallelRelation(const TopoDS_Shape& aFShape,const TopoDS_Shape& aSShape,const Handle(Geom_Plane)& aPlane);
  //! Constructs an object to display parallel constraints. <br>
//! This object is defined by the first shape aFShape and <br>
//! the second shape aSShape the plane aPlane, the <br>
//! position aPosition, the type of arrow, aSymbolPrs and <br>
//! its size anArrowSize. <br>
  Standard_EXPORT   AIS_ParallelRelation(const TopoDS_Shape& aFShape,const TopoDS_Shape& aSShape,const Handle(Geom_Plane)& aPlane,const gp_Pnt& aPosition,const DsgPrs_ArrowSide aSymbolPrs,const Standard_Real anArrowSize = 0.01);
  //! Returns true if the parallelism is movable. <br>
      virtual  Standard_Boolean IsMovable() const;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;




  DEFINE_STANDARD_RTTI(AIS_ParallelRelation)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void ComputeTwoFacesParallel(const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeTwoEdgesParallel(const Handle(Prs3d_Presentation)& aPresentation) ;

gp_Pnt myFAttach;
gp_Pnt mySAttach;
gp_Dir myDirAttach;


};


#include <AIS_ParallelRelation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
