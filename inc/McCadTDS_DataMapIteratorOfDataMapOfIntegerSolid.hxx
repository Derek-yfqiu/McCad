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

#ifndef _McCadTDS_DataMapIteratorOfDataMapOfIntegerSolid_HeaderFile
#define _McCadTDS_DataMapIteratorOfDataMapOfIntegerSolid_HeaderFile

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_McCadTDS_ExtSolid_HeaderFile
#include <Handle_McCadTDS_ExtSolid.hxx>
#endif
#ifndef _Handle_McCadTDS_DataMapNodeOfDataMapOfIntegerSolid_HeaderFile
#include <Handle_McCadTDS_DataMapNodeOfDataMapOfIntegerSolid.hxx>
#endif
class Standard_NoSuchObject;
class McCadTDS_ExtSolid;
class TColStd_MapIntegerHasher;
class McCadTDS_DataMapOfIntegerSolid;
class McCadTDS_DataMapNodeOfDataMapOfIntegerSolid;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadTDS_DataMapIteratorOfDataMapOfIntegerSolid  : public TCollection_BasicMapIterator {

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


Standard_EXPORT McCadTDS_DataMapIteratorOfDataMapOfIntegerSolid();


Standard_EXPORT McCadTDS_DataMapIteratorOfDataMapOfIntegerSolid(const McCadTDS_DataMapOfIntegerSolid& aMap);


Standard_EXPORT   void Initialize(const McCadTDS_DataMapOfIntegerSolid& aMap) ;


Standard_EXPORT  const Standard_Integer& Key() const;


Standard_EXPORT  const Handle_McCadTDS_ExtSolid& Value() const;

void* Find1(const Standard_Integer& K) const;
void* ChangeFind1(const Standard_Integer& K) ;



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
