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

#include <McCadMcRead_SequenceNodeOfSequenceOfCellPtr.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadMcRead_SequenceOfCellPtr_HeaderFile
#include <McCadMcRead_SequenceOfCellPtr.hxx>
#endif
//McCadMcRead_SequenceNodeOfSequenceOfCellPtr::~McCadMcRead_SequenceNodeOfSequenceOfCellPtr() {}
 


Standard_EXPORT Handle_Standard_Type& McCadMcRead_SequenceNodeOfSequenceOfCellPtr_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_SeqNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadMcRead_SequenceNodeOfSequenceOfCellPtr",
			                                 sizeof(McCadMcRead_SequenceNodeOfSequenceOfCellPtr),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadMcRead_SequenceNodeOfSequenceOfCellPtr) Handle(McCadMcRead_SequenceNodeOfSequenceOfCellPtr)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadMcRead_SequenceNodeOfSequenceOfCellPtr) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadMcRead_SequenceNodeOfSequenceOfCellPtr))) {
       _anOtherObject = Handle(McCadMcRead_SequenceNodeOfSequenceOfCellPtr)((Handle(McCadMcRead_SequenceNodeOfSequenceOfCellPtr)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadMcRead_SequenceNodeOfSequenceOfCellPtr::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadMcRead_SequenceNodeOfSequenceOfCellPtr) ; 
}
//Standard_Boolean McCadMcRead_SequenceNodeOfSequenceOfCellPtr::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadMcRead_SequenceNodeOfSequenceOfCellPtr) == AType || TCollection_SeqNode::IsKind(AType)); 
//}
//Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr::~Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr() {}
#define SeqItem McCadMcRead_CellPtr
#define SeqItem_hxx <McCadMcRead_CellPtr.hxx>
#define TCollection_SequenceNode McCadMcRead_SequenceNodeOfSequenceOfCellPtr
#define TCollection_SequenceNode_hxx <McCadMcRead_SequenceNodeOfSequenceOfCellPtr.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadMcRead_SequenceNodeOfSequenceOfCellPtr
#define TCollection_SequenceNode_Type_() McCadMcRead_SequenceNodeOfSequenceOfCellPtr_Type_()
#define TCollection_Sequence McCadMcRead_SequenceOfCellPtr
#define TCollection_Sequence_hxx <McCadMcRead_SequenceOfCellPtr.hxx>
#include <TCollection_SequenceNode.gxx>

