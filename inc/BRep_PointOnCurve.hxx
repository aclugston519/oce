// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_PointOnCurve_HeaderFile
#define _BRep_PointOnCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_PointOnCurve_HeaderFile
#include <Handle_BRep_PointOnCurve.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _BRep_PointRepresentation_HeaderFile
#include <BRep_PointRepresentation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom_Curve;
class TopLoc_Location;


//! Representation by a parameter on a 3D curve. <br>
class BRep_PointOnCurve : public BRep_PointRepresentation {

public:

  
  Standard_EXPORT   BRep_PointOnCurve(const Standard_Real P,const Handle(Geom_Curve)& C,const TopLoc_Location& L);
  //! Returns True <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnCurve() const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnCurve(const Handle(Geom_Curve)& C,const TopLoc_Location& L) const;
  
  Standard_EXPORT   virtual const Handle_Geom_Curve& Curve() const;
  
  Standard_EXPORT   virtual  void Curve(const Handle(Geom_Curve)& C) ;




  DEFINE_STANDARD_RTTI(BRep_PointOnCurve)

protected:




private: 


Handle_Geom_Curve myCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
