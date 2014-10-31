// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_MapNode_HeaderFile
#define _TCollection_MapNode_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TCollection_MapNode_HeaderFile
#include <Handle_TCollection_MapNode.hxx>
#endif

#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif


//! Basic class root of all the Maps. <br>
class TCollection_MapNode : public MMgt_TShared {

public:

  
      TCollection_MapNode(const TCollection_MapNodePtr& n);
  
        TCollection_MapNodePtr& Next() const;




  DEFINE_STANDARD_RTTI(TCollection_MapNode)

protected:




private: 


TCollection_MapNodePtr myNext;


};


#include <TCollection_MapNode.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
