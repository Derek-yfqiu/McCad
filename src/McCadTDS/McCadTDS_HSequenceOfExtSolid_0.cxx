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

#include <McCadTDS_HSequenceOfExtSolid.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _McCadTDS_ExtSolid_HeaderFile
#include <McCadTDS_ExtSolid.hxx>
#endif
#ifndef _McCadTDS_SequenceOfExtSolid_HeaderFile
#include <McCadTDS_SequenceOfExtSolid.hxx>
#endif
//McCadTDS_HSequenceOfExtSolid::~McCadTDS_HSequenceOfExtSolid() {}
 


Standard_EXPORT Handle_Standard_Type& McCadTDS_HSequenceOfExtSolid_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadTDS_HSequenceOfExtSolid",
			                                 sizeof(McCadTDS_HSequenceOfExtSolid),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadTDS_HSequenceOfExtSolid) Handle(McCadTDS_HSequenceOfExtSolid)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadTDS_HSequenceOfExtSolid) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadTDS_HSequenceOfExtSolid))) {
       _anOtherObject = Handle(McCadTDS_HSequenceOfExtSolid)((Handle(McCadTDS_HSequenceOfExtSolid)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadTDS_HSequenceOfExtSolid::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadTDS_HSequenceOfExtSolid) ; 
}
//Standard_Boolean McCadTDS_HSequenceOfExtSolid::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadTDS_HSequenceOfExtSolid) == AType || MMgt_TShared::IsKind(AType)); 
//}
//Handle_McCadTDS_HSequenceOfExtSolid::~Handle_McCadTDS_HSequenceOfExtSolid() {}
#define Item Handle_McCadTDS_ExtSolid
#define Item_hxx <McCadTDS_ExtSolid.hxx>
#define TheSequence McCadTDS_SequenceOfExtSolid
#define TheSequence_hxx <McCadTDS_SequenceOfExtSolid.hxx>
#define TCollection_HSequence McCadTDS_HSequenceOfExtSolid
#define TCollection_HSequence_hxx <McCadTDS_HSequenceOfExtSolid.hxx>
#define Handle_TCollection_HSequence Handle_McCadTDS_HSequenceOfExtSolid
#define TCollection_HSequence_Type_() McCadTDS_HSequenceOfExtSolid_Type_()
#include <TCollection_HSequence.gxx>

