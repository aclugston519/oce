// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_EdgeVertexInterference_HeaderFile
#define _TopOpeBRepDS_EdgeVertexInterference_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_EdgeVertexInterference_HeaderFile
#include <Handle_TopOpeBRepDS_EdgeVertexInterference.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopOpeBRepDS_ShapeShapeInterference_HeaderFile
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#endif
#ifndef _TopOpeBRepDS_Kind_HeaderFile
#include <TopOpeBRepDS_Kind.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopOpeBRepDS_Config_HeaderFile
#include <TopOpeBRepDS_Config.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TopOpeBRepDS_Transition;


//! An interference with a parameter (ShapeShapeInterference). <br>
class TopOpeBRepDS_EdgeVertexInterference : public TopOpeBRepDS_ShapeShapeInterference {

public:

  //! Create an interference of VERTEX <G> on a crossed EDGE E. <br>
//! <br>
//!  if support type <ST> == EDGE : <S> is edge E <br>
//!                          FACE : <S> is the face with bound E. <br>
//!  <T> is the transition along the edge, crossing the crossed edge. <br>
//!   E  is the crossed edge. <br>
//!  <GIsBound> indicates if <G> is a bound of the edge. <br>
//!  <P> is the parameter of <G> on the edge. <br>
//! <br>
//!  interference is stored in the list of interfs of the edge. <br>
//! <br>
  Standard_EXPORT   TopOpeBRepDS_EdgeVertexInterference(const TopOpeBRepDS_Transition& T,const TopOpeBRepDS_Kind ST,const Standard_Integer S,const Standard_Integer G,const Standard_Boolean GIsBound,const TopOpeBRepDS_Config C,const Standard_Real P);
  //! Create an interference of VERTEX <G> on crossed EDGE <S>. <br>
//! <br>
//!  <T> is the transition along the edge, crossing the crossed edge. <br>
//!  <S> is the crossed edge. <br>
//!  <GIsBound> indicates if <G> is a bound of the edge. <br>
//!  <C> indicates the geometric configuration between <br>
//!        the edge and the crossed edge. <br>
//!  <P> is the parameter of <G> on the edge. <br>
//! <br>
//!  interference is stored in the list of interfs of the edge. <br>
//! <br>
  Standard_EXPORT   TopOpeBRepDS_EdgeVertexInterference(const TopOpeBRepDS_Transition& T,const Standard_Integer S,const Standard_Integer G,const Standard_Boolean GIsBound,const TopOpeBRepDS_Config C,const Standard_Real P);
  
  Standard_EXPORT     Standard_Real Parameter() const;
  
  Standard_EXPORT     void Parameter(const Standard_Real P) ;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& OS) const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_EdgeVertexInterference)

protected:




private: 


Standard_Real myParam;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
