// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Trihedron_HeaderFile
#define _AIS_Trihedron_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Trihedron_HeaderFile
#include <Handle_AIS_Trihedron.hxx>
#endif

#ifndef _Handle_Geom_Axis2Placement_HeaderFile
#include <Handle_Geom_Axis2Placement.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _AIS_InteractiveObject_HeaderFile
#include <AIS_InteractiveObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_AIS_Axis_HeaderFile
#include <Handle_AIS_Axis.hxx>
#endif
#ifndef _Handle_AIS_Point_HeaderFile
#include <Handle_AIS_Point.hxx>
#endif
#ifndef _Handle_AIS_Plane_HeaderFile
#include <Handle_AIS_Plane.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _PrsMgr_PresentationManager3d_HeaderFile
#include <PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
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
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
class Geom_Axis2Placement;
class AIS_InteractiveObject;
class AIS_Axis;
class AIS_Point;
class AIS_Plane;
class AIS_InteractiveContext;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class gp_Trsf;
class SelectMgr_Selection;
class Quantity_Color;
class TColgp_Array1OfPnt;


//! Create a selectable trihedron <br>
//! there are 4 modes of selection : <br>
//!  mode = 0 to select triedron    ,priority = 1 <br>
//!  mode = 1 to select its origine ,priority = 5 <br>
//!  mode = 2 to select its axis    ,priority = 3 <br>
//!  mode = 3 to select its planes  ,priority = 2 <br>
//!  a trihedron has 1 origine,3 axes,3 planes. <br>
//! Warning <br>
//! For the presentation of trihedra, the default unit of <br>
//! length is the millimetre, and the default value for the <br>
//! representation of the axes is 100. If you modify these <br>
//! dimensions, you must temporarily recover the Drawer. <br>
//! From inside it, you take the aspect in which the values <br>
//! for length are stocked. For trihedra, this is <br>
//! AIS_Drawer_FirstAxisAspect. You change the <br>
//! values inside this Aspect and recalculate the presentation. <br>
//! If you want to use extended selection modes, different than 0, <br>
//! you should take care of removing of the shapes from the interactive <br>
//! context that has been computed for selection; it might be necessary <br>
//! when you change selection mode. You can use methods Axis, Point, <br>
//! Plane to retrieve the shapes. <br>
class AIS_Trihedron : public AIS_InteractiveObject {

public:

  //! Initializes a trihedron entity. <br>
  Standard_EXPORT   AIS_Trihedron(const Handle(Geom_Axis2Placement)& aComponent);
  //! Returns the right-handed coordinate system set in SetComponent. <br>
       const Handle_Geom_Axis2Placement& Component() const;
  //! Constructs the right-handed coordinate system aComponent. <br>
  Standard_EXPORT     void SetComponent(const Handle(Geom_Axis2Placement)& aComponent) ;
  //! Returns true if the trihedron object has a size other <br>
//! than the default size of 100 mm. along each axis. <br>
        Standard_Boolean HasOwnSize() const;
  //!  Sets the size aValue for the trihedron object. <br>
//! The default value is 100 mm. <br>
  Standard_EXPORT     void SetSize(const Standard_Real aValue) ;
  //! Removes any non-default settings for size of this <br>
//! trihedron object. <br>
  Standard_EXPORT     void UnsetSize() ;
  
  Standard_EXPORT     Standard_Real Size() const;
  //! Returns the "XAxis". <br>
  Standard_EXPORT     Handle_AIS_Axis XAxis() const;
  //! Returns the "YAxis". <br>
  Standard_EXPORT     Handle_AIS_Axis YAxis() const;
  //! Returns the main Axis. <br>
  Standard_EXPORT     Handle_AIS_Axis Axis() const;
  //! Returns the origine. <br>
  Standard_EXPORT     Handle_AIS_Point Position() const;
  //! Returns the "XYPlane". <br>
  Standard_EXPORT     Handle_AIS_Plane XYPlane() const;
  //! Returns the "XZPlane". <br>
  Standard_EXPORT     Handle_AIS_Plane XZPlane() const;
  //! Returns the "YZPlane". <br>
  Standard_EXPORT     Handle_AIS_Plane YZPlane() const;
  //! connection to <aCtx> default drawer implies a recomputation <br>
//!          of SubObjects values. <br>
  Standard_EXPORT   virtual  void SetContext(const Handle(AIS_InteractiveContext)& aCtx) ;
  //! Returns true if the display mode selected, aMode, is <br>
//! valid for trihedron datums. <br>
  Standard_EXPORT     Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  //! Computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void SetLocalTransformation(const gp_Trsf& theTransformation) ;
  //! Returns index 3, selection of the planes XOY, YOZ, XOZ. <br>
  Standard_EXPORT   virtual  Standard_Integer Signature() const;
  //! Indicates that the type of Interactive Object is datum. <br>
  Standard_EXPORT   virtual  AIS_KindOfInteractive Type() const;
  
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  //! Sets the color aColor for this trihedron object. <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  
  Standard_EXPORT     void SetTextColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     Standard_Boolean HasTextColor() const;
  
  Standard_EXPORT     Quantity_NameOfColor TextColor() const;
  
  Standard_EXPORT     void SetArrowColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     Standard_Boolean HasArrowColor() const;
  
  Standard_EXPORT     Quantity_NameOfColor ArrowColor() const;
  //! Returns the four extremities of the trihedron from the <br>
//! array of points, TheExtrem. <br>
  Standard_EXPORT     void ExtremityPoints(TColgp_Array1OfPnt& TheExtrem) const;
  //! Removes the settings for color. <br>
  Standard_EXPORT     void UnsetColor() ;
  //! Removes the non-default settings for width set in SetWidth. <br>
  Standard_EXPORT     void UnsetWidth() ;




  DEFINE_STANDARD_RTTI(AIS_Trihedron)

protected:




private: 

  
  Standard_EXPORT     void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT     void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,const Standard_Integer aMode) ;
  
  Standard_EXPORT     void LoadSubObjects() ;

Handle_Geom_Axis2Placement myComponent;
Handle_AIS_InteractiveObject myShapes[7];
Standard_Boolean myHasOwnSize;
Standard_Boolean myHasOwnTextColor;
Quantity_NameOfColor myOwnTextColor;
Standard_Boolean myHasOwnArrowColor;
Quantity_NameOfColor myOwnArrowColor;


};


#include <AIS_Trihedron.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
