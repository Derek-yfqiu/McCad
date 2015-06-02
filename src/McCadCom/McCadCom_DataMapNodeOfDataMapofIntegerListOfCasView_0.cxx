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

#include <McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _McCadCom_ListOfCasView_HeaderFile
#include <McCadCom_ListOfCasView.hxx>
#endif
#ifndef _TColStd_MapIntegerHasher_HeaderFile
#include <TColStd_MapIntegerHasher.hxx>
#endif
#ifndef _McCadCom_DataMapofIntegerListOfCasView_HeaderFile
#include <McCadCom_DataMapofIntegerListOfCasView.hxx>
#endif
#ifndef _McCadCom_DataMapIteratorOfDataMapofIntegerListOfCasView_HeaderFile
#include <McCadCom_DataMapIteratorOfDataMapofIntegerListOfCasView.hxx>
#endif
//McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView::~McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView() {}
 


Standard_EXPORT Handle_Standard_Type& McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_MapNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView",
			                                 sizeof(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView) Handle(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView))) {
       _anOtherObject = Handle(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView)((Handle(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView) ; 
}
//Standard_Boolean McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView) == AType || TCollection_MapNode::IsKind(AType)); 
//}
//Handle_McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView::~Handle_McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView() {}
#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem McCadCom_ListOfCasView
#define TheItem_hxx <McCadCom_ListOfCasView.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView
#define TCollection_DataMapNode_hxx <McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView.hxx>
#define TCollection_DataMapIterator McCadCom_DataMapIteratorOfDataMapofIntegerListOfCasView
#define TCollection_DataMapIterator_hxx <McCadCom_DataMapIteratorOfDataMapofIntegerListOfCasView.hxx>
#define Handle_TCollection_DataMapNode Handle_McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView
#define TCollection_DataMapNode_Type_() McCadCom_DataMapNodeOfDataMapofIntegerListOfCasView_Type_()
#define TCollection_DataMap McCadCom_DataMapofIntegerListOfCasView
#define TCollection_DataMap_hxx <McCadCom_DataMapofIntegerListOfCasView.hxx>
#include <TCollection_DataMapNode.gxx>

