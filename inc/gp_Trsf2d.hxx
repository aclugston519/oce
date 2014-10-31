// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _gp_Trsf2d_HeaderFile
#define _gp_Trsf2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_TrsfForm_HeaderFile
#include <gp_TrsfForm.hxx>
#endif
#ifndef _gp_Mat2d_HeaderFile
#include <gp_Mat2d.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_ConstructionError;
class Standard_OutOfRange;
class gp_GTrsf2d;
class gp_Trsf;
class gp_Pnt2d;
class gp_Ax2d;
class gp_Vec2d;
class gp_XY;
class gp_Mat2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(gp_Trsf2d);


//!  Defines a non-persistent transformation in 2D space. <br>
//!  The following transformations are implemented : <br>
//!  . Translation, Rotation, Scale <br>
//!  . Symmetry with respect to a point and a line. <br>
//!  Complex transformations can be obtained by combining the <br>
//!  previous elementary transformations using the method Multiply. <br>
//!  The transformations can be represented as follow : <br>
//! <br>
//!       V1   V2   T       XY        XY <br>
//!    | a11  a12  a13 |   | x |     | x'| <br>
//!    | a21  a22  a23 |   | y |     | y'| <br>
//!    |  0    0    1  |   | 1 |     | 1 | <br>
//! <br>
//!   where {V1, V2} defines the vectorial part of the transformation <br>
//!   and T defines the translation part of the transformation. <br>
//!  This transformation never change the nature of the objects. <br>
class gp_Trsf2d  {

public:

  DEFINE_STANDARD_ALLOC

  //! Returns identity transformation. <br>
      gp_Trsf2d();
  //! Creates a 2d transformation in the XY plane from a <br>
//!          3d transformation . <br>
      gp_Trsf2d(const gp_Trsf& T);
  
//!  Changes the transformation into a symmetrical transformation. <br>
//!  P is the center of the symmetry. <br>
        void SetMirror(const gp_Pnt2d& P) ;
  
//!  Changes the transformation into a symmetrical transformation. <br>
//!  A is the center of the axial symmetry. <br>
  Standard_EXPORT     void SetMirror(const gp_Ax2d& A) ;
  
//!  Changes the transformation into a rotation. <br>
//!  P is the rotation's center and Ang is the angular value of the <br>
//!  rotation in radian. <br>
        void SetRotation(const gp_Pnt2d& P,const Standard_Real Ang) ;
  
//!  Changes the transformation into a scale. <br>
//!  P is the center of the scale and S is the scaling value. <br>
        void SetScale(const gp_Pnt2d& P,const Standard_Real S) ;
  
//!  Changes a transformation allowing passage from the coordinate <br>
//!  system "FromSystem1" to the coordinate system "ToSystem2". <br>
  Standard_EXPORT     void SetTransformation(const gp_Ax2d& FromSystem1,const gp_Ax2d& ToSystem2) ;
  
//!  Changes the transformation allowing passage from the basic <br>
//!  coordinate system <br>
//!  {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.)} <br>
//!  to the local coordinate system defined with the Ax2d ToSystem. <br>
  Standard_EXPORT     void SetTransformation(const gp_Ax2d& ToSystem) ;
  
//!  Changes the transformation into a translation. <br>
//!  V is the vector of the translation. <br>
        void SetTranslation(const gp_Vec2d& V) ;
  
//!  Makes the transformation into a translation from <br>
//!  the point P1 to the point P2. <br>
        void SetTranslation(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;
  //!  Replaces the translation vector with V. <br>
  Standard_EXPORT     void SetTranslationPart(const gp_Vec2d& V) ;
  //!  Modifies the scale factor. <br>
  Standard_EXPORT     void SetScaleFactor(const Standard_Real S) ;
  //! Returns true if the determinant of the vectorial part of <br>
//! this transformation is negative.. <br>
        Standard_Boolean IsNegative() const;
  
//!  Returns the nature of the transformation. It can be  an <br>
//! identity transformation, a rotation, a translation, a mirror <br>
//! (relative to a point or an axis), a scaling transformation, <br>
//! or a compound transformation. <br>
        gp_TrsfForm Form() const;
  //! Returns the scale factor. <br>
        Standard_Real ScaleFactor() const;
  
//!  Returns the translation part of the transformation's matrix <br>
       const gp_XY& TranslationPart() const;
  
//!  Returns the vectorial part of the transformation. It is a <br>
//!  2*2 matrix which includes the scale factor. <br>
  Standard_EXPORT     gp_Mat2d VectorialPart() const;
  
//!  Returns the homogeneous vectorial part of the transformation. <br>
//!  It is a 2*2 matrix which doesn't include the scale factor. <br>
//!  The coefficients of this matrix must be multiplied by the <br>
//!  scale factor to obtain the coefficients of the transformation. <br>
       const gp_Mat2d& HVectorialPart() const;
  
//!  Returns the angle corresponding to the rotational component <br>
//!  of the transformation matrix (operation opposite to SetRotation()). <br>
  Standard_EXPORT     Standard_Real RotationPart() const;
  
//!  Returns the coefficients of the transformation's matrix. <br>
//!  It is a 2 rows * 3 columns matrix. <br>
//! Raises OutOfRange if Row < 1 or Row > 2 or Col < 1 or Col > 3 <br>
        Standard_Real Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     void Invert() ;
  
//!  Computes the reverse transformation. <br>
//!  Raises an exception if the matrix of the transformation <br>
//!  is not inversible, it means that the scale factor is lower <br>
//!  or equal to Resolution from package gp. <br>
        gp_Trsf2d Inverted() const;
  
        gp_Trsf2d Multiplied(const gp_Trsf2d& T) const;
      gp_Trsf2d operator *(const gp_Trsf2d& T) const
{
  return Multiplied(T);
}
  
//!  Computes the transformation composed from <me> and T. <br>
//!  <me> = <me> * T <br>
  Standard_EXPORT     void Multiply(const gp_Trsf2d& T) ;
    void operator *=(const gp_Trsf2d& T) 
{
  Multiply(T);
}
  
//!  Computes the transformation composed from <me> and T. <br>
//!  <me> = T * <me> <br>
  Standard_EXPORT     void PreMultiply(const gp_Trsf2d& T) ;
  
  Standard_EXPORT     void Power(const Standard_Integer N) ;
  
//!  Computes the following composition of transformations <br>
//!  <me> * <me> * .......* <me>,  N time. <br>
//!  if N = 0 <me> = Identity <br>
//!  if N < 0 <me> = <me>.Inverse() *...........* <me>.Inverse(). <br>
//! <br>
//!  Raises if N < 0 and if the matrix of the transformation not <br>
//!  inversible. <br>
        gp_Trsf2d Powered(const Standard_Integer N) ;
  
        void Transforms(Standard_Real& X,Standard_Real& Y) const;
  //! Transforms  a doublet XY with a Trsf2d <br>
        void Transforms(gp_XY& Coord) const;
  //! Sets the coefficients  of the transformation. The <br>
//!         transformation  of the  point  x,y is  the point <br>
//!         x',y' with : <br>
//! <br>
//!         x' = a11 x + a12 y + a13 <br>
//!         y' = a21 x + a22 y + a23 <br>
//! <br>
//!         The method Value(i,j) will return aij. <br>
//!         Raises ConstructionError if the determinant of the aij is null. <br>
//!         If the matrix as not a uniform scale it will be orthogonalized before future using. <br>
  Standard_EXPORT     void SetValues(const Standard_Real a11,const Standard_Real a12,const Standard_Real a13,const Standard_Real a21,const Standard_Real a22,const Standard_Real a23) ;
    Standard_Real _CSFDB_Getgp_Trsf2dscale() const { return scale; }
    void _CSFDB_Setgp_Trsf2dscale(const Standard_Real p) { scale = p; }
    gp_TrsfForm _CSFDB_Getgp_Trsf2dshape() const { return shape; }
    void _CSFDB_Setgp_Trsf2dshape(const gp_TrsfForm p) { shape = p; }
    const gp_Mat2d& _CSFDB_Getgp_Trsf2dmatrix() const { return matrix; }
    const gp_XY& _CSFDB_Getgp_Trsf2dloc() const { return loc; }

friend class gp_GTrsf2d;


protected:

  //! Makes orthogonalization of "matrix" <br>
  Standard_EXPORT     void Orthogonalize() ;



private: 


Standard_Real scale;
gp_TrsfForm shape;
gp_Mat2d matrix;
gp_XY loc;


};


#include <gp_Trsf2d.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
