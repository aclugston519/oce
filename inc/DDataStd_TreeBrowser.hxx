// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDataStd_TreeBrowser_HeaderFile
#define _DDataStd_TreeBrowser_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DDataStd_TreeBrowser_HeaderFile
#include <Handle_DDataStd_TreeBrowser.hxx>
#endif

#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Draw_Interpretor_HeaderFile
#include <Draw_Interpretor.hxx>
#endif
#ifndef _Handle_TDataStd_TreeNode_HeaderFile
#include <Handle_TDataStd_TreeNode.hxx>
#endif
class TDF_Label;
class Draw_Display;
class Draw_Drawable3D;
class TCollection_AsciiString;
class TDataStd_TreeNode;


//! Browses a TreeNode from TDataStd. <br>
//!          ================================= <br>
class DDataStd_TreeBrowser : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   DDataStd_TreeBrowser(const TDF_Label& root);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! Specific methods <br>
//!          ================ <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;
  
  Standard_EXPORT     void Label(const TDF_Label& root) ;
  
  Standard_EXPORT     TDF_Label Label() const;
  //! Returns   a   string composed with  the   TreeNode  of <br>
//!          <myLabel>. <br>
  Standard_EXPORT     TCollection_AsciiString OpenRoot() const;
  //!  Returns a string composed   with the sub-TreeNodes of <br>
//!          <L> <br>
  Standard_EXPORT     TCollection_AsciiString OpenNode(const TDF_Label& L) const;




  DEFINE_STANDARD_RTTI(DDataStd_TreeBrowser)

protected:




private: 

  //! Returns a string composed with the sub-TreeNodes <br>
//!          of <aTreeNode>. Used to implement other methods. <br>
  Standard_EXPORT     void OpenNode(const Handle(TDataStd_TreeNode)& aTreeNode,TCollection_AsciiString& aList) const;

TDF_Label myRoot;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
