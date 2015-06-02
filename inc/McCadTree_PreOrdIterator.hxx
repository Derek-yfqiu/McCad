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

#ifndef _McCadTree_PreOrdIterator_HeaderFile
#define _McCadTree_PreOrdIterator_HeaderFile

#ifndef _McCadTree_BaseIterator_HeaderFile
#include <McCadTree_BaseIterator.hxx>
#endif
#ifndef _McCadTree_TreeNodePtr_HeaderFile
#include <McCadTree_TreeNodePtr.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class McCadTree_BaseIterator;
class McCadTree_SiblIterator;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadTree_PreOrdIterator  : public McCadTree_BaseIterator {

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

//! This class provides  preoder iterator of the N-ary Tree. <br>
Standard_EXPORT McCadTree_PreOrdIterator();


Standard_EXPORT McCadTree_PreOrdIterator(const McCadTree_TreeNodePtr& aNode);


Standard_EXPORT McCadTree_PreOrdIterator(const McCadTree_BaseIterator& aIter);


Standard_EXPORT McCadTree_PreOrdIterator(const McCadTree_SiblIterator& aIter);


Standard_EXPORT virtual  McCadTree_BaseIterator& Increment() ;
  McCadTree_BaseIterator& operator++() 
{
  return Increment();
}



Standard_EXPORT virtual  McCadTree_BaseIterator& Decrement() ;
  McCadTree_BaseIterator& operator--() 
{
  return Decrement();
}



Standard_EXPORT virtual  McCadTree_BaseIterator& IncrementBy(Standard_Integer& count) ;
  McCadTree_BaseIterator& operator+=(Standard_Integer& count) 
{
  return IncrementBy(count);
}



Standard_EXPORT virtual  McCadTree_BaseIterator& DecrementBy(Standard_Integer& count) ;
  McCadTree_BaseIterator& operator-=(Standard_Integer& count) 
{
  return DecrementBy(count);
}






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


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
