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

#ifndef _McCadModelManager_DataMapOfIntegerPart_HeaderFile
#define _McCadModelManager_DataMapOfIntegerPart_HeaderFile

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_McCadModelManager_DataMapNodeOfDataMapOfIntegerPart_HeaderFile
#include <Handle_McCadModelManager_DataMapNodeOfDataMapOfIntegerPart.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class McCadModelManager_Part;
class McCadModelManager_MapIntegerHasher;
class McCadModelManager_DataMapNodeOfDataMapOfIntegerPart;
class McCadModelManager_DataMapIteratorOfDataMapOfIntegerPart;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadModelManager_DataMapOfIntegerPart  : public TCollection_BasicMap {

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


Standard_EXPORT McCadModelManager_DataMapOfIntegerPart(const Standard_Integer NbBuckets = 1);


Standard_EXPORT   McCadModelManager_DataMapOfIntegerPart& Assign(const McCadModelManager_DataMapOfIntegerPart& Other) ;
  McCadModelManager_DataMapOfIntegerPart& operator =(const McCadModelManager_DataMapOfIntegerPart& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void ReSize(const Standard_Integer NbBuckets) ;


Standard_EXPORT   void Clear() ;
~McCadModelManager_DataMapOfIntegerPart()
{
  Clear();
}



Standard_EXPORT   Standard_Boolean Bind(const Standard_Integer& K,const McCadModelManager_Part& I) ;


Standard_EXPORT   Standard_Boolean IsBound(const Standard_Integer& K) const;


Standard_EXPORT   Standard_Boolean UnBind(const Standard_Integer& K) ;


Standard_EXPORT  const McCadModelManager_Part& Find(const Standard_Integer& K) const;
 const McCadModelManager_Part& operator()(const Standard_Integer& K) const
{
  return Find(K);
}



Standard_EXPORT   McCadModelManager_Part& ChangeFind(const Standard_Integer& K) ;
  McCadModelManager_Part& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}






protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadModelManager_DataMapOfIntegerPart(const McCadModelManager_DataMapOfIntegerPart& Other);


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
