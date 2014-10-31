// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Shape_HeaderFile
#define _TopoDS_Shape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TopoDS_TShape_HeaderFile
#include <Handle_TopoDS_TShape.hxx>
#endif
#ifndef _TopLoc_Location_HeaderFile
#include <TopLoc_Location.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_TShape;
class Standard_NullObject;
class Standard_DomainError;
class Standard_TypeMismatch;
class TopLoc_Location;


//! Describes a shape which <br>
//! - references an underlying shape with the potential <br>
//!   to be given a location and an orientation <br>
//! - has a location for the underlying shape, giving its <br>
//!   placement in the local coordinate system <br>
//! - has an orientation for the underlying shape, in <br>
//!   terms of its geometry (as opposed to orientation in <br>
//!   relation to other shapes). <br>
//!   Note: A Shape is empty if it references an underlying <br>
//!   shape which has an empty list of shapes. <br>
class TopoDS_Shape  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a NULL Shape referring to nothing. <br>
      TopoDS_Shape();
  //! Returns true if this shape is null. In other words, it <br>
//! references no underlying shape with the potential to <br>
//! be given a location and an orientation. <br>
        Standard_Boolean IsNull() const;
  //! Destroys the reference to the underlying shape <br>
//! stored in this shape. As a result, this shape becomes null. <br>
        void Nullify() ;
  //! Returns the shape local coordinate system. <br>
       const TopLoc_Location& Location() const;
  //! Sets the shape local coordinate system. <br>
        void Location(const TopLoc_Location& Loc) ;
  //! Returns a  shape  similar to <me> with   the local <br>
//!          coordinate system set to <Loc>. <br>
//! <br>
        TopoDS_Shape Located(const TopLoc_Location& Loc) const;
  //! Returns the shape orientation. <br>
//! <br>
        TopAbs_Orientation Orientation() const;
  //! Sets the shape orientation. <br>
        void Orientation(const TopAbs_Orientation Orient) ;
  //! Returns  a    shape  similar  to  <me>   with  the <br>
//!          orientation set to <Or>. <br>
//! <br>
        TopoDS_Shape Oriented(const TopAbs_Orientation Or) const;
  
       const Handle_TopoDS_TShape& TShape() const;
  //! Returns the value of the TopAbs_ShapeEnum <br>
//! enumeration that corresponds to this shape, for <br>
//! example VERTEX, EDGE, and so on. <br>
//! Exceptions <br>
//! Standard_NullObject if this shape is null. <br>
        TopAbs_ShapeEnum ShapeType() const;
  //! Returns the free flag. <br>
//! <br>
        Standard_Boolean Free() const;
  //! Sets the free flag. <br>
//! <br>
        void Free(const Standard_Boolean F) ;
  //! Returns the locked flag. <br>
//! <br>
        Standard_Boolean Locked() const;
  //! Sets the locked flag. <br>
//! <br>
        void Locked(const Standard_Boolean F) ;
  //! Returns the modification flag. <br>
//! <br>
        Standard_Boolean Modified() const;
  //! Sets the modification flag. <br>
//! <br>
        void Modified(const Standard_Boolean M) ;
  //! Returns the checked flag. <br>
//! <br>
        Standard_Boolean Checked() const;
  //! Sets the checked flag. <br>
//! <br>
        void Checked(const Standard_Boolean C) ;
  //! Returns the orientability flag. <br>
//! <br>
        Standard_Boolean Orientable() const;
  //! Sets the orientability flag. <br>
//! <br>
        void Orientable(const Standard_Boolean C) ;
  //! Returns the closedness flag. <br>
//! <br>
        Standard_Boolean Closed() const;
  //! Sets the closedness flag. <br>
//! <br>
        void Closed(const Standard_Boolean C) ;
  //! Returns the infinity flag. <br>
//! <br>
        Standard_Boolean Infinite() const;
  //! Sets the infinity flag. <br>
//! <br>
        void Infinite(const Standard_Boolean C) ;
  //! Returns the convexness flag. <br>
//! <br>
        Standard_Boolean Convex() const;
  //! Sets the convexness flag. <br>
//! <br>
        void Convex(const Standard_Boolean C) ;
  //! Multiplies the Shape location by <position>. <br>
//! <br>
        void Move(const TopLoc_Location& position) ;
  //! Returns  a shape similar  to  <me> with a location <br>
//!          multiplied  by <position>. <br>
//! <br>
        TopoDS_Shape Moved(const TopLoc_Location& position) const;
  //! Reverses the orientation, using the Reverse method <br>
//!          from the TopAbs package. <br>
//! <br>
        void Reverse() ;
  //! Returns    a shape  similar    to  <me>  with  the <br>
//!          orientation  reversed, using  the   Reverse method <br>
//!          from the TopAbs package. <br>
//! <br>
        TopoDS_Shape Reversed() const;
  //! Complements the orientation, using the  Complement <br>
//!          method from the TopAbs package. <br>
//! <br>
        void Complement() ;
  //! Returns  a   shape  similar  to   <me>   with  the <br>
//!          orientation complemented,  using   the  Complement <br>
//!          method from the TopAbs package. <br>
//! <br>
        TopoDS_Shape Complemented() const;
  //! Updates the  Shape Orientation by composition with <br>
//!          <Orient>, using the Compose method from the TopAbs <br>
//!          package. <br>
//! <br>
        void Compose(const TopAbs_Orientation Orient) ;
  //! Returns  a  shape   similar   to  <me>   with  the <br>
//!          orientation  composed  with <Orient>,   using  the <br>
//!          Compose method from the TopAbs package. <br>
//! <br>
        TopoDS_Shape Composed(const TopAbs_Orientation Orient) const;
  //! Returns True if two shapes  are partners, i.e.  if <br>
//!          they   share   the   same  TShape.  Locations  and <br>
//!          Orientations may differ. <br>
//! <br>
        Standard_Boolean IsPartner(const TopoDS_Shape& other) const;
  //! Returns True if two shapes are same, i.e.  if they <br>
//!          share  the  same TShape  with the same  Locations. <br>
//!          Orientations may differ. <br>
        Standard_Boolean IsSame(const TopoDS_Shape& other) const;
  //! Returns True if two shapes are equal, i.e. if they <br>
//!          share the same TShape with  the same Locations and <br>
//!          Orientations. <br>
//! <br>
        Standard_Boolean IsEqual(const TopoDS_Shape& other) const;
      Standard_Boolean operator ==(const TopoDS_Shape& other) const
{
  return IsEqual(other);
}
  //! Negation of the IsEqual method. <br>
//! <br>
        Standard_Boolean IsNotEqual(const TopoDS_Shape& other) const;
      Standard_Boolean operator !=(const TopoDS_Shape& other) const
{
  return IsNotEqual(other);
}
  //! Returns a hashed value  denoting <me>.  This value <br>
//!          is in the range  1..<Upper>.  It is  computed from <br>
//!          the  TShape  and the  Location. The Orientation is <br>
//!          not used. <br>
//! <br>
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  //! Replace   <me> by  a  new   Shape with the    same <br>
//!          Orientation and Location and a new TShape with the <br>
//!          same geometry and no sub-shapes. <br>
//! <br>
        void EmptyCopy() ;
  //! Returns a new Shape with the  same Orientation and <br>
//!          Location and  a new TShape  with the same geometry <br>
//!          and no sub-shapes. <br>
//! <br>
        TopoDS_Shape EmptyCopied() const;
  
        void TShape(const Handle(TopoDS_TShape)& T) ;





protected:





private:



Handle_TopoDS_TShape myTShape;
TopLoc_Location myLocation;
TopAbs_Orientation myOrient;


};


#include <TopoDS_Shape.lxx>



// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const TopoDS_Shape& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}



#endif
