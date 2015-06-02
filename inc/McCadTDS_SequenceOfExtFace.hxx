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

#ifndef _McCadTDS_SequenceOfExtFace_HeaderFile
#define _McCadTDS_SequenceOfExtFace_HeaderFile

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_McCadTDS_ExtFace_HeaderFile
#include <Handle_McCadTDS_ExtFace.hxx>
#endif
#ifndef _Handle_McCadTDS_SequenceNodeOfSequenceOfExtFace_HeaderFile
#include <Handle_McCadTDS_SequenceNodeOfSequenceOfExtFace.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadTDS_ExtFace;
class McCadTDS_SequenceNodeOfSequenceOfExtFace;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


class McCadTDS_SequenceOfExtFace  : public TCollection_BaseSequence {

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

McCadTDS_SequenceOfExtFace();


Standard_EXPORT   void Clear() ;
~McCadTDS_SequenceOfExtFace()
{
  Clear();
}



Standard_EXPORT  const McCadTDS_SequenceOfExtFace& Assign(const McCadTDS_SequenceOfExtFace& Other) ;
 const McCadTDS_SequenceOfExtFace& operator =(const McCadTDS_SequenceOfExtFace& Other) 
{
  return Assign(Other);
}



Standard_EXPORT   void Append(const Handle(McCadTDS_ExtFace)& T) ;

  void Append(McCadTDS_SequenceOfExtFace& S) ;


Standard_EXPORT   void Prepend(const Handle(McCadTDS_ExtFace)& T) ;

  void Prepend(McCadTDS_SequenceOfExtFace& S) ;

  void InsertBefore(const Standard_Integer Index,const Handle(McCadTDS_ExtFace)& T) ;

  void InsertBefore(const Standard_Integer Index,McCadTDS_SequenceOfExtFace& S) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer Index,const Handle(McCadTDS_ExtFace)& T) ;

  void InsertAfter(const Standard_Integer Index,McCadTDS_SequenceOfExtFace& S) ;


Standard_EXPORT  const Handle_McCadTDS_ExtFace& First() const;


Standard_EXPORT  const Handle_McCadTDS_ExtFace& Last() const;

  void Split(const Standard_Integer Index,McCadTDS_SequenceOfExtFace& Sub) ;


Standard_EXPORT  const Handle_McCadTDS_ExtFace& Value(const Standard_Integer Index) const;
 const Handle_McCadTDS_ExtFace& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}



Standard_EXPORT   void SetValue(const Standard_Integer Index,const Handle(McCadTDS_ExtFace)& I) ;


Standard_EXPORT   Handle_McCadTDS_ExtFace& ChangeValue(const Standard_Integer Index) ;
  Handle_McCadTDS_ExtFace& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}



Standard_EXPORT   void Remove(const Standard_Integer Index) ;


Standard_EXPORT   void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


Standard_EXPORT McCadTDS_SequenceOfExtFace(const McCadTDS_SequenceOfExtFace& Other);


 // Fields PRIVATE
 //


};

#define SeqItem Handle_McCadTDS_ExtFace
#define SeqItem_hxx <McCadTDS_ExtFace.hxx>
#define TCollection_SequenceNode McCadTDS_SequenceNodeOfSequenceOfExtFace
#define TCollection_SequenceNode_hxx <McCadTDS_SequenceNodeOfSequenceOfExtFace.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadTDS_SequenceNodeOfSequenceOfExtFace
#define TCollection_SequenceNode_Type_() McCadTDS_SequenceNodeOfSequenceOfExtFace_Type_()
#define TCollection_Sequence McCadTDS_SequenceOfExtFace
#define TCollection_Sequence_hxx <McCadTDS_SequenceOfExtFace.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)
//


#endif
