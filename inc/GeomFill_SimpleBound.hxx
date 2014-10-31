// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_SimpleBound_HeaderFile
#define _GeomFill_SimpleBound_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_SimpleBound_HeaderFile
#include <Handle_GeomFill_SimpleBound.hxx>
#endif

#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _GeomFill_Boundary_HeaderFile
#include <GeomFill_Boundary.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Adaptor3d_HCurve;
class Law_Function;
class gp_Pnt;
class gp_Vec;


//! Defines a 3d curve as a boundary for a <br>
//! GeomFill_ConstrainedFilling algorithm. <br>
//! This curve is unattached to an existing surface.D <br>
//! Contains fields to allow a reparametrization of curve. <br>
class GeomFill_SimpleBound : public GeomFill_Boundary {

public:

  
//! Constructs the boundary object defined by the 3d curve. <br>
//! The surface to be built along this boundary will be in the <br>
//! tolerance range defined by Tol3d. <br>
//! This object is to be used as a boundary for a <br>
//! GeomFill_ConstrainedFilling framework. <br>
//! Dummy is initialized but has no function in this class. <br>
//! Warning <br>
//! Curve is an adapted curve, that is, an object which is an interface between: <br>
//! -   the services provided by a 3D curve from the package Geom <br>
//! -   and those required of the curve by the computation <br>
//!   algorithm which uses it. <br>
//! The adapted curve is created in one of the following ways: <br>
//! -   First sequence: <br>
//! Handle(Geom_Curve) myCurve = ... ; <br>
//! Handle(GeomAdaptor_HCurve) <br>
//!     Curve = new <br>
//! GeomAdaptor_HCurve(myCurve); <br>
//! -   Second sequence: <br>
//! // Step 1 <br>
//! Handle(Geom_Curve) myCurve = ... ; <br>
//! GeomAdaptor_Curve Crv (myCurve); <br>
//! // Step 2 <br>
//! Handle(GeomAdaptor_HCurve) <br>
//!     Curve = new <br>
//! GeomAdaptor_HCurve(Crv); <br>
//! You use the second part of this sequence if you already <br>
//! have the adapted curve Crv. <br>
//! The boundary is then constructed with the Curve object: <br>
//! Standard_Real Tol = ... ; <br>
//! Standard_Real dummy = 0. ; <br>
//! myBoundary = GeomFill_SimpleBound <br>
//! (Curve,Tol,dummy); <br>
  Standard_EXPORT   GeomFill_SimpleBound(const Handle(Adaptor3d_HCurve)& Curve,const Standard_Real Tol3d,const Standard_Real Tolang);
  
  Standard_EXPORT     gp_Pnt Value(const Standard_Real U) const;
  
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt& P,gp_Vec& V) const;
  
  Standard_EXPORT     void Reparametrize(const Standard_Real First,const Standard_Real Last,const Standard_Boolean HasDF,const Standard_Boolean HasDL,const Standard_Real DF,const Standard_Real DL,const Standard_Boolean Rev) ;
  
  Standard_EXPORT     void Bounds(Standard_Real& First,Standard_Real& Last) const;
  
  Standard_EXPORT     Standard_Boolean IsDegenerated() const;




  DEFINE_STANDARD_RTTI(GeomFill_SimpleBound)

protected:




private: 


Handle_Adaptor3d_HCurve myC3d;
Handle_Law_Function myPar;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
