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

#ifndef _McCadMcRead_HeaderFile
#define _McCadMcRead_HeaderFile

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfReal_HeaderFile
#include <Handle_TColStd_HSequenceOfReal.hxx>
#endif
class TCollection_AsciiString;
class TColStd_HSequenceOfReal;
class McCadMcRead_Cell;
class McCadMcRead_CellBuilder;
class McCadMcRead_TrsfBuilder;
class McCadMcRead_SurfaceFactory;
class McCadMcRead_Fill;
class McCadMcRead_FillBuilder;
class McCadMcRead_Reader;
class McCadMcRead_SequenceOfCell;
class McCadMcRead_HSequenceOfCell;
class McCadMcRead_DataMapOfIntegerCell;
class McCadMcRead_SequenceOfCellPtr;
class McCadMcRead_HSequenceOfCellPtr;
class McCadMcRead_SequenceOfFill;
class McCadMcRead_HSequenceOfFill;
class McCadMcRead_DataMapOfIntegerFill;
class McCadMcRead_SequenceNodeOfSequenceOfCell;
class McCadMcRead_DataMapNodeOfDataMapOfIntegerCell;
class McCadMcRead_DataMapIteratorOfDataMapOfIntegerCell;
class McCadMcRead_SequenceNodeOfSequenceOfCellPtr;
class McCadMcRead_SequenceNodeOfSequenceOfFill;
class McCadMcRead_DataMapNodeOfDataMapOfIntegerFill;
class McCadMcRead_DataMapIteratorOfDataMapOfIntegerFill;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

//! \brief useful tools for McCadMcReader

class McCadMcRead  {

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


Standard_EXPORT static  Standard_Boolean ExtractInt(TCollection_AsciiString& sIn,Standard_Integer& nVal) ;


Standard_EXPORT static  Standard_Boolean ExtractInt(TCollection_AsciiString& sIn,Standard_Integer& nStart,Standard_Integer& nVal) ;


Standard_EXPORT static  Standard_Boolean ExtractReal(TCollection_AsciiString& sIn,Standard_Real& nVal) ;


Standard_EXPORT static  Standard_Boolean ExtractParenthesisPair(TCollection_AsciiString& sIn,Standard_Integer& nStart,TCollection_AsciiString& sOut) ;


Standard_EXPORT static  Standard_Boolean ExtractFloat(TCollection_AsciiString& sIn,Standard_Integer& nStart,Standard_Real& fVal) ;


Standard_EXPORT static  Standard_Boolean ExtractFloat(TCollection_AsciiString& sIn,Standard_Integer& nStart,Handle(TColStd_HSequenceOfReal)& fValVec) ;


Standard_EXPORT static  void TrimLeft(TCollection_AsciiString& sIn) ;


Standard_EXPORT static  void TrimRight(TCollection_AsciiString& sIn) ;





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

friend class McCadMcRead_Cell;
friend class McCadMcRead_CellBuilder;
friend class McCadMcRead_TrsfBuilder;
friend class McCadMcRead_SurfaceFactory;
friend class McCadMcRead_Fill;
friend class McCadMcRead_FillBuilder;
friend class McCadMcRead_Reader;
friend class McCadMcRead_SequenceOfCell;
friend class McCadMcRead_HSequenceOfCell;
friend class McCadMcRead_DataMapOfIntegerCell;
friend class McCadMcRead_SequenceOfCellPtr;
friend class McCadMcRead_HSequenceOfCellPtr;
friend class McCadMcRead_SequenceOfFill;
friend class McCadMcRead_HSequenceOfFill;
friend class McCadMcRead_DataMapOfIntegerFill;
friend class McCadMcRead_SequenceNodeOfSequenceOfCell;
friend class McCadMcRead_DataMapNodeOfDataMapOfIntegerCell;
friend class McCadMcRead_DataMapIteratorOfDataMapOfIntegerCell;
friend class McCadMcRead_SequenceNodeOfSequenceOfCellPtr;
friend class McCadMcRead_SequenceNodeOfSequenceOfFill;
friend class McCadMcRead_DataMapNodeOfDataMapOfIntegerFill;
friend class McCadMcRead_DataMapIteratorOfDataMapOfIntegerFill;

};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
