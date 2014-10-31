// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ShapeDivideContinuity_HeaderFile
#define _ShapeUpgrade_ShapeDivideContinuity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _ShapeUpgrade_ShapeDivide_HeaderFile
#include <ShapeUpgrade_ShapeDivide.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_FaceDivide_HeaderFile
#include <Handle_ShapeUpgrade_FaceDivide.hxx>
#endif
class TopoDS_Shape;
class ShapeUpgrade_FaceDivide;


//! API Tool for converting shapes with C0 geometry into C1 ones <br>
class ShapeUpgrade_ShapeDivideContinuity  : public ShapeUpgrade_ShapeDivide {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   ShapeUpgrade_ShapeDivideContinuity();
  //! Initialize by a Shape. <br>
  Standard_EXPORT   ShapeUpgrade_ShapeDivideContinuity(const TopoDS_Shape& S);
  //! Sets tolerance. <br>
  Standard_EXPORT     void SetTolerance(const Standard_Real Tol) ;
  //! Sets tolerance. <br>
  Standard_EXPORT     void SetTolerance2d(const Standard_Real Tol) ;
  
//!  Defines a criterion of continuity for the boundary (all the <br>
//!  Wires) <br>
//! <br>
//!  The possible values are C0, G1, C1, G2, C2, C3, CN The <br>
//!  default is C1 to respect the Cas.Cade Shape Validity.  G1 <br>
//!  and G2 are not authorized. <br>
  Standard_EXPORT     void SetBoundaryCriterion(const GeomAbs_Shape Criterion = GeomAbs_C1) ;
  
//!  Defines a criterion of continuity for the boundary (all the <br>
//!  pcurves of Wires) <br>
//! <br>
//!  The possible values are C0, G1, C1, G2, C2, C3, CN The <br>
//!  default is C1 to respect the Cas.Cade Shape Validity.  G1 <br>
//!  and G2 are not authorized. <br>
  Standard_EXPORT     void SetPCurveCriterion(const GeomAbs_Shape Criterion = GeomAbs_C1) ;
  
//!  Defines a criterion of continuity for the boundary (all the <br>
//!  Wires) <br>
//! <br>
//!  The possible values are C0, G1, C1, G2, C2, C3, CN The <br>
//!  default is C1 to respect the Cas.Cade Shape Validity.  G1 <br>
//!  and G2 are not authorized. <br>
  Standard_EXPORT     void SetSurfaceCriterion(const GeomAbs_Shape Criterion = GeomAbs_C1) ;





protected:

  //! Returns the tool for dividing faces. <br>
  Standard_EXPORT   virtual  Handle_ShapeUpgrade_FaceDivide GetSplitFaceTool() const;




private:



GeomAbs_Shape myCurve3dCriterion;
GeomAbs_Shape myCurve2dCriterion;
GeomAbs_Shape mySurfaceCriterion;
Standard_Real myTolerance3d;
Standard_Real myTolerance2d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
