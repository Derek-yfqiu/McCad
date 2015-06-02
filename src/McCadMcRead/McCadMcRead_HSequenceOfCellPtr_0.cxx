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

#include <McCadMcRead_HSequenceOfCellPtr.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _McCadMcRead_SequenceOfCellPtr_HeaderFile
#include <McCadMcRead_SequenceOfCellPtr.hxx>
#endif
//McCadMcRead_HSequenceOfCellPtr::~McCadMcRead_HSequenceOfCellPtr() {}
 


Standard_EXPORT Handle_Standard_Type& McCadMcRead_HSequenceOfCellPtr_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadMcRead_HSequenceOfCellPtr",
			                                 sizeof(McCadMcRead_HSequenceOfCellPtr),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadMcRead_HSequenceOfCellPtr) Handle(McCadMcRead_HSequenceOfCellPtr)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadMcRead_HSequenceOfCellPtr) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadMcRead_HSequenceOfCellPtr))) {
       _anOtherObject = Handle(McCadMcRead_HSequenceOfCellPtr)((Handle(McCadMcRead_HSequenceOfCellPtr)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadMcRead_HSequenceOfCellPtr::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadMcRead_HSequenceOfCellPtr) ; 
}
//Standard_Boolean McCadMcRead_HSequenceOfCellPtr::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadMcRead_HSequenceOfCellPtr) == AType || MMgt_TShared::IsKind(AType)); 
//}
//Handle_McCadMcRead_HSequenceOfCellPtr::~Handle_McCadMcRead_HSequenceOfCellPtr() {}
#define Item McCadMcRead_CellPtr
#define Item_hxx <McCadMcRead_CellPtr.hxx>
#define TheSequence McCadMcRead_SequenceOfCellPtr
#define TheSequence_hxx <McCadMcRead_SequenceOfCellPtr.hxx>
#define TCollection_HSequence McCadMcRead_HSequenceOfCellPtr
#define TCollection_HSequence_hxx <McCadMcRead_HSequenceOfCellPtr.hxx>
#define Handle_TCollection_HSequence Handle_McCadMcRead_HSequenceOfCellPtr
#define TCollection_HSequence_Type_() McCadMcRead_HSequenceOfCellPtr_Type_()
#include <TCollection_HSequence.gxx>

