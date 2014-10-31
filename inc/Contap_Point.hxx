// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_Point_HeaderFile
#define _Contap_Point_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _IntSurf_Transition_HeaderFile
#include <IntSurf_Transition.hxx>
#endif
#ifndef _Handle_Adaptor3d_HVertex_HeaderFile
#include <Handle_Adaptor3d_HVertex.hxx>
#endif
class Adaptor2d_HCurve2d;
class Adaptor3d_HVertex;
class Standard_DomainError;
class gp_Pnt;
class IntSurf_Transition;


//! Definition of a vertex on the contour line. <br>
//!          Most of the time, such a point is an intersection <br>
//!          between the contour and a restriction of the surface. <br>
//!          When it is not tyhe method IsOnArc return False. <br>
//!          Such a point is contains geometrical informations (see <br>
//!          the Value method) and logical informations. <br>
class Contap_Point  {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor. <br>
  Standard_EXPORT   Contap_Point();
  //! Creates a point. <br>
  Standard_EXPORT   Contap_Point(const gp_Pnt& Pt,const Standard_Real U,const Standard_Real V);
  //! Sets the values for a point. <br>
        void SetValue(const gp_Pnt& Pt,const Standard_Real U,const Standard_Real V) ;
  //! Set the value of the parameter on the intersection line. <br>
        void SetParameter(const Standard_Real Para) ;
  //! Sets the values of a point which is a vertex on <br>
//!          the initial facet of restriction of one <br>
//!          of the surface. <br>
        void SetVertex(const Handle(Adaptor3d_HVertex)& V) ;
  //! Sets the value of the arc and of the parameter on <br>
//!          this arc of the point. <br>
        void SetArc(const Handle(Adaptor2d_HCurve2d)& A,const Standard_Real Param,const IntSurf_Transition& TLine,const IntSurf_Transition& TArc) ;
  
        void SetMultiple() ;
  
        void SetInternal() ;
  //! Returns the intersection point (geometric information). <br>
       const gp_Pnt& Value() const;
  //! This method returns the parameter of the point <br>
//!          on the intersection line. <br>
//!          If the points does not belong to an intersection line, <br>
//!          the value returned does not have any sens. <br>
        Standard_Real ParameterOnLine() const;
  //! Returns the parameters on the surface of the point. <br>
        void Parameters(Standard_Real& U1,Standard_Real& V1) const;
  //! Returns True when the point is an intersection between <br>
//!          the contour and a restriction. <br>
        Standard_Boolean IsOnArc() const;
  //! Returns the arc of restriction containing the <br>
//!          vertex. <br>
       const Handle_Adaptor2d_HCurve2d& Arc() const;
  //! Returns the parameter of the point on the <br>
//!          arc returned by the method Arc(). <br>
        Standard_Real ParameterOnArc() const;
  //! Returns the transition of the point on the contour. <br>
       const IntSurf_Transition& TransitionOnLine() const;
  //! Returns the transition of the point on the arc. <br>
       const IntSurf_Transition& TransitionOnArc() const;
  //! Returns TRUE if the point is a vertex on the initial <br>
//!          restriction facet of the surface. <br>
        Standard_Boolean IsVertex() const;
  //! Returns the information about the point when it is <br>
//!          on the domain of the patch, i-e when the function <br>
//!          IsVertex returns True. <br>
//!          Otherwise, an exception is raised. <br>
       const Handle_Adaptor3d_HVertex& Vertex() const;
  //! Returns True if the point belongs to several <br>
//!          lines. <br>
        Standard_Boolean IsMultiple() const;
  //! Returns True if the point  is an internal one, i.e <br>
//!          if the  tangent to the line on  the point  and the <br>
//!          eye direction are parallel. <br>
        Standard_Boolean IsInternal() const;





protected:





private:



gp_Pnt pt;
Standard_Real uparam;
Standard_Real vparam;
Standard_Real paraline;
Standard_Boolean onarc;
Handle_Adaptor2d_HCurve2d arc;
IntSurf_Transition traline;
IntSurf_Transition traarc;
Standard_Real prmarc;
Standard_Boolean isvtx;
Handle_Adaptor3d_HVertex vtx;
Standard_Boolean ismult;
Standard_Boolean myInternal;


};


#include <Contap_Point.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
