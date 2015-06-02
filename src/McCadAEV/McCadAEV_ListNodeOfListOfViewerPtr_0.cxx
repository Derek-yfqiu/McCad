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

#include <McCadAEV_ListNodeOfListOfViewerPtr.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadAEV_ListOfViewerPtr_HeaderFile
#include <McCadAEV_ListOfViewerPtr.hxx>
#endif
#ifndef _McCadAEV_ListIteratorOfListOfViewerPtr_HeaderFile
#include <McCadAEV_ListIteratorOfListOfViewerPtr.hxx>
#endif
//McCadAEV_ListNodeOfListOfViewerPtr::~McCadAEV_ListNodeOfListOfViewerPtr() {}
 


Standard_EXPORT Handle_Standard_Type& McCadAEV_ListNodeOfListOfViewerPtr_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_MapNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadAEV_ListNodeOfListOfViewerPtr",
			                                 sizeof(McCadAEV_ListNodeOfListOfViewerPtr),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadAEV_ListNodeOfListOfViewerPtr) Handle(McCadAEV_ListNodeOfListOfViewerPtr)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadAEV_ListNodeOfListOfViewerPtr) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadAEV_ListNodeOfListOfViewerPtr))) {
       _anOtherObject = Handle(McCadAEV_ListNodeOfListOfViewerPtr)((Handle(McCadAEV_ListNodeOfListOfViewerPtr)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadAEV_ListNodeOfListOfViewerPtr::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadAEV_ListNodeOfListOfViewerPtr) ; 
}
//Standard_Boolean McCadAEV_ListNodeOfListOfViewerPtr::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadAEV_ListNodeOfListOfViewerPtr) == AType || TCollection_MapNode::IsKind(AType)); 
//}
//Handle_McCadAEV_ListNodeOfListOfViewerPtr::~Handle_McCadAEV_ListNodeOfListOfViewerPtr() {}
#define Item McCadAEV_ViewerPtr
#define Item_hxx <McCadAEV_ViewerPtr.hxx>
#define TCollection_ListNode McCadAEV_ListNodeOfListOfViewerPtr
#define TCollection_ListNode_hxx <McCadAEV_ListNodeOfListOfViewerPtr.hxx>
#define TCollection_ListIterator McCadAEV_ListIteratorOfListOfViewerPtr
#define TCollection_ListIterator_hxx <McCadAEV_ListIteratorOfListOfViewerPtr.hxx>
#define Handle_TCollection_ListNode Handle_McCadAEV_ListNodeOfListOfViewerPtr
#define TCollection_ListNode_Type_() McCadAEV_ListNodeOfListOfViewerPtr_Type_()
#define TCollection_List McCadAEV_ListOfViewerPtr
#define TCollection_List_hxx <McCadAEV_ListOfViewerPtr.hxx>
#include <TCollection_ListNode.gxx>

