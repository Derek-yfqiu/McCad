// File generated by CPPExt (Transient)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _Handle_McCadCom_SequenceNodeOfSequenceOfDocument_HeaderFile
#define _Handle_McCadCom_SequenceNodeOfSequenceOfDocument_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_TCollection_SeqNode_HeaderFile
#include <Handle_TCollection_SeqNode.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(TCollection_SeqNode);
class McCadCom_SequenceNodeOfSequenceOfDocument;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadCom_SequenceNodeOfSequenceOfDocument);

class Handle(McCadCom_SequenceNodeOfSequenceOfDocument) : public Handle(TCollection_SeqNode) {
  public:
    Handle(McCadCom_SequenceNodeOfSequenceOfDocument)():Handle(TCollection_SeqNode)() {} 
    Handle(McCadCom_SequenceNodeOfSequenceOfDocument)(const Handle(McCadCom_SequenceNodeOfSequenceOfDocument)& aHandle) : Handle(TCollection_SeqNode)(aHandle) 
     {
     }

    Handle(McCadCom_SequenceNodeOfSequenceOfDocument)(const McCadCom_SequenceNodeOfSequenceOfDocument* anItem) : Handle(TCollection_SeqNode)((TCollection_SeqNode *)anItem) 
     {
     }

    Handle(McCadCom_SequenceNodeOfSequenceOfDocument)& operator=(const Handle(McCadCom_SequenceNodeOfSequenceOfDocument)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadCom_SequenceNodeOfSequenceOfDocument)& operator=(const McCadCom_SequenceNodeOfSequenceOfDocument* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadCom_SequenceNodeOfSequenceOfDocument* operator->() const
     {
      return (McCadCom_SequenceNodeOfSequenceOfDocument *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadCom_SequenceNodeOfSequenceOfDocument)();
 
   Standard_EXPORT static const Handle(McCadCom_SequenceNodeOfSequenceOfDocument) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
