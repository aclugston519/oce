// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Plane_HeaderFile
#define _AIS_Plane_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS_Plane_HeaderFile
#include <Handle_AIS_Plane.hxx>
#endif

#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _Handle_Geom_Axis2Placement_HeaderFile
#include <Handle_Geom_Axis2Placement.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _AIS_TypeOfPlane_HeaderFile
#include <AIS_TypeOfPlane.hxx>
#endif
#ifndef _Select3D_TypeOfSensitivity_HeaderFile
#include <Select3D_TypeOfSensitivity.hxx>
#endif
#ifndef _AIS_InteractiveObject_HeaderFile
#include <AIS_InteractiveObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _AIS_KindOfInteractive_HeaderFile
#include <AIS_KindOfInteractive.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
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
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class Geom_Plane;
class Geom_Axis2Placement;
class gp_Pnt;
class AIS_InteractiveContext;
class Prs3d_Presentation;
class Prs3d_Projector;
class Geom_Transformation;
class SelectMgr_Selection;
class Quantity_Color;


//! Constructs plane datums to be used in construction of <br>
//! composite shapes. <br>
class AIS_Plane : public AIS_InteractiveObject {

public:

  //! initializes the plane aComponent. If <br>
//!   the mode aCurrentMode equals true, the drawing <br>
//!   tool, "Drawer" is not initialized. <br>
  Standard_EXPORT   AIS_Plane(const Handle(Geom_Plane)& aComponent,const Standard_Boolean aCurrentMode = Standard_False);
  //!   initializes the plane aComponent and <br>
//!   the point aCenter. If the mode aCurrentMode <br>
//!   equals true, the drawing tool, "Drawer" is not <br>
//!   initialized. aCurrentMode equals true, the drawing <br>
//!   tool, "Drawer" is not initialized. <br>
  Standard_EXPORT   AIS_Plane(const Handle(Geom_Plane)& aComponent,const gp_Pnt& aCenter,const Standard_Boolean aCurrentMode = Standard_False);
  //!   initializes the plane aComponent, the <br>
//!   point aCenter, and the minimum and maximum <br>
//!   points, aPmin and aPmax. If the mode <br>
//! aCurrentMode equals true, the drawing tool, "Drawer" is not initialized. <br>
  Standard_EXPORT   AIS_Plane(const Handle(Geom_Plane)& aComponent,const gp_Pnt& aCenter,const gp_Pnt& aPmin,const gp_Pnt& aPmax,const Standard_Boolean aCurrentMode = Standard_False);
  
  Standard_EXPORT   AIS_Plane(const Handle(Geom_Axis2Placement)& aComponent,const AIS_TypeOfPlane aPlaneType,const Standard_Boolean aCurrentMode = Standard_False);
  //! Same value for x and y directions <br>
  Standard_EXPORT     void SetSize(const Standard_Real aValue) ;
  //! Sets the size defined by the length along the X axis <br>
//! XVal and the length along the Y axis YVal. <br>
  Standard_EXPORT     void SetSize(const Standard_Real Xval,const Standard_Real YVal) ;
  
  Standard_EXPORT     void UnsetSize() ;
  
  Standard_EXPORT     Standard_Boolean Size(Standard_Real& X,Standard_Real& Y) const;
  
        Standard_Boolean HasOwnSize() const;
  
  Standard_EXPORT   virtual  Standard_Integer Signature() const;
  
  Standard_EXPORT   virtual  AIS_KindOfInteractive Type() const;
  //! Returns the component specified in SetComponent. <br>
       const Handle_Geom_Plane& Component() ;
  //! Creates an instance of the plane aComponent. <br>
  Standard_EXPORT     void SetComponent(const Handle(Geom_Plane)& aComponent) ;
  //! Returns the settings for the selected plane <br>
//! aComponent, provided in SetPlaneAttributes. <br>
//! These include the points aCenter, aPmin, and aPmax <br>
  Standard_EXPORT     Standard_Boolean PlaneAttributes(Handle(Geom_Plane)& aComponent,gp_Pnt& aCenter,gp_Pnt& aPmin,gp_Pnt& aPmax) ;
  //! Allows you to provide settings other than default ones <br>
//! for the selected plane. These include: center point <br>
//! aCenter, maximum aPmax and minimum aPmin. <br>
  Standard_EXPORT     void SetPlaneAttributes(const Handle(Geom_Plane)& aComponent,const gp_Pnt& aCenter,const gp_Pnt& aPmin,const gp_Pnt& aPmax) ;
  //! Returns the coordinates of the center point. <br>
       const gp_Pnt& Center() const;
  
//! Provides settings for the center aCenter other than (0, 0, 0). <br>
        void SetCenter(const gp_Pnt& aCenter) ;
  //! Allows you to provide settings for the position and <br>
//! direction of one of the plane's axes, aComponent, in <br>
//! 3D space. The coordinate system used is <br>
//! right-handed, and the type of plane aPlaneType is one of: <br>
//! -   AIS_ TOPL_Unknown <br>
//! -   AIS_ TOPL_XYPlane <br>
//! -   AIS_ TOPL_XZPlane <br>
//! -   AIS_ TOPL_YZPlane}. <br>
  Standard_EXPORT     void SetAxis2Placement(const Handle(Geom_Axis2Placement)& aComponent,const AIS_TypeOfPlane aPlaneType) ;
  //! Returns the position of the plane's axis2 system <br>
//! identifying the x, y, or z axis and giving the plane a <br>
//! direction in 3D space. An axis2 system is a right-handed coordinate system. <br>
  Standard_EXPORT     Handle_Geom_Axis2Placement Axis2Placement() ;
  //! Returns the type of plane - xy, yz, xz or unknown. <br>
        AIS_TypeOfPlane TypeOfPlane() ;
  //! Returns the type of plane - xy, yz, or xz. <br>
        Standard_Boolean IsXYZPlane() ;
  //! Returns the non-default current display mode set by SetCurrentMode. <br>
        Standard_Boolean CurrentMode() ;
  
//! Allows you to provide settings for a non-default <br>
//! current display mode. <br>
        void SetCurrentMode(const Standard_Boolean aCurrentMode) ;
  //! Returns true if the display mode selected, aMode, is valid for planes. <br>
  Standard_EXPORT   virtual  Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode) const;
  //! connection to <aCtx> default drawer implies a recomputation of Frame values. <br>
  Standard_EXPORT   virtual  void SetContext(const Handle(AIS_InteractiveContext)& aCtx) ;
  //! Returns the type of sensitivity for the plane; <br>
        Select3D_TypeOfSensitivity TypeOfSensitivity() const;
  //! Sets the type of sensitivity for the plane. <br>
        void SetTypeOfSensitivity(const Select3D_TypeOfSensitivity theTypeOfSensitivity) ;
  //! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Geom_Transformation)& aTrsf,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT   virtual  void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection,const Standard_Integer theMode) ;
  
  Standard_EXPORT     void SetColor(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void SetColor(const Quantity_Color& aColor) ;
  
  Standard_EXPORT     void UnsetColor() ;




  DEFINE_STANDARD_RTTI(AIS_Plane)

protected:




private: 

  
  Standard_EXPORT   virtual  void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager,const Handle(Prs3d_Presentation)& aPresentation,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  void Compute(const Handle(Prs3d_Projector)& aProjector,const Handle(Prs3d_Presentation)& aPresentation) ;
  
  Standard_EXPORT     void ComputeFrame() ;
  
  Standard_EXPORT     void ComputeFields() ;
  
  Standard_EXPORT     void InitDrawerAttributes() ;

Handle_Geom_Plane myComponent;
Handle_Geom_Axis2Placement myAx2;
gp_Pnt myCenter;
gp_Pnt myPmin;
gp_Pnt myPmax;
Standard_Boolean myCurrentMode;
Standard_Boolean myAutomaticPosition;
AIS_TypeOfPlane myTypeOfPlane;
Standard_Boolean myIsXYZPlane;
Standard_Boolean myHasOwnSize;
Select3D_TypeOfSensitivity myTypeOfSensitivity;


};


#include <AIS_Plane.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
