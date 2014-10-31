// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ElementsOfRefMatrix_HeaderFile
#define _FEmTool_ElementsOfRefMatrix_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PLib_Base_HeaderFile
#include <Handle_PLib_Base.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_FunctionSet_HeaderFile
#include <math_FunctionSet.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
class PLib_Base;
class Standard_ConstructionError;


//! this  class  describes  the  functions  needed  for <br>
//!          calculating  matrix  elements  of  RefMatrix  for  linear <br>
//!          criteriums  (Tension,  Flexsion  and  Jerk) by  Gauss  integration. <br>
//!          Each  function  from  set  gives  value  Pi(u)'*Pj(u)'  or <br>
//!          Pi(u)''*Pj(u)''  or  Pi(u)'''*Pj(u)'''  for  each  i  and  j, <br>
//!          where  Pi(u)  is  i-th  basis  function  of  expansion  and <br>
//!          (')  means  derivative. <br>
class FEmTool_ElementsOfRefMatrix  : public math_FunctionSet {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   FEmTool_ElementsOfRefMatrix(const Handle(PLib_Base)& TheBase,const Standard_Integer DerOrder);
  //! returns the number of variables of the function. <br>
//!  It  is  supposed  that  NbVariables  =  1. <br>
  Standard_EXPORT     Standard_Integer NbVariables() const;
  //! returns the number of equations of the function. <br>
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! computes the values <F> of the functions for the <br>
//!          variable <X>. <br>
//!          returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
//!          F  contains  results  only  for  i<=j  in  following  order: <br>
//!          P0*P0,  P0*P1,  P0*P2...  P1*P1,  P1*P2,...  (upper  triangle of <br>
//!          matrix  {PiPj}) <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;





protected:





private:



Handle_PLib_Base myBase;
Standard_Integer myDerOrder;
Standard_Integer myNbEquations;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
