// File generated by CPPExt (Value)
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

#ifndef _McCadCom_ListIteratorOfListOfView_HeaderFile
#define _McCadCom_ListIteratorOfListOfView_HeaderFile

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_McCadCom_View_HeaderFile
#include <Handle_McCadCom_View.hxx>
#endif
#ifndef _Handle_McCadCom_ListNodeOfListOfView_HeaderFile
#include <Handle_McCadCom_ListNodeOfListOfView.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class McCadCom_ListOfView;
class McCadCom_View;
class McCadCom_ListNodeOfListOfView;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadCom_ListIteratorOfListOfView  {

public:

    void* operator new(size_t,void* anAddress) 
      {
        return anAddress;
      }
    void* operator new(size_t size) 
      { 
        return Standard::Allocate(size); 
      }
    void  operator delete(void *anAddress) 
      { 
        if (anAddress) Standard::Free((Standard_Address&)anAddress); 
      }
 // Methods PUBLIC
 // 


Standard_EXPORT McCadCom_ListIteratorOfListOfView();


Standard_EXPORT McCadCom_ListIteratorOfListOfView(const McCadCom_ListOfView& L);


Standard_EXPORT   void Initialize(const McCadCom_ListOfView& L) ;

  Standard_Boolean More() const;


Standard_EXPORT   void Next() ;


Standard_EXPORT   Handle_McCadCom_View& Value() const;


friend class McCadCom_ListOfView;



protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
Standard_Address current;
Standard_Address previous;


};

#define Item Handle_McCadCom_View
#define Item_hxx <McCadCom_View.hxx>
#define TCollection_ListNode McCadCom_ListNodeOfListOfView
#define TCollection_ListNode_hxx <McCadCom_ListNodeOfListOfView.hxx>
#define TCollection_ListIterator McCadCom_ListIteratorOfListOfView
#define TCollection_ListIterator_hxx <McCadCom_ListIteratorOfListOfView.hxx>
#define Handle_TCollection_ListNode Handle_McCadCom_ListNodeOfListOfView
#define TCollection_ListNode_Type_() McCadCom_ListNodeOfListOfView_Type_()
#define TCollection_List McCadCom_ListOfView
#define TCollection_List_hxx <McCadCom_ListOfView.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif
