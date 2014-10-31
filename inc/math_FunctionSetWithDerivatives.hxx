// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#define _math_FunctionSetWithDerivatives_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _math_FunctionSet_HeaderFile
#include <math_FunctionSet.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
class math_Matrix;


//! This abstract class describes the virtual functions associated <br>
//!          with a set of N Functions each of M independant variables. <br>
class math_FunctionSetWithDerivatives  : public math_FunctionSet {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns the number of variables of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbVariables() const = 0;
  //! Returns the number of equations of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbEquations() const = 0;
  //! Computes the values <F> of the Functions for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& X,math_Vector& F)  = 0;
  //! Returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D)  = 0;
  //! returns the values <F> of the functions and the derivatives <br>
//!          <D> for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D)  = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
