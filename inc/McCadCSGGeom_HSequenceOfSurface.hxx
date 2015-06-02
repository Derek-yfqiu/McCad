// File generated by CPPExt (Transient)
//
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

#ifndef _McCadCSGGeom_HSequenceOfSurface_HeaderFile
#define _McCadCSGGeom_HSequenceOfSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_HSequenceOfSurface_HeaderFile
#include <Handle_McCadCSGGeom_HSequenceOfSurface.hxx>
#endif

#ifndef _McCadCSGGeom_SequenceOfSurface_HeaderFile
#include <McCadCSGGeom_SequenceOfSurface.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_Surface_HeaderFile
#include <Handle_McCadCSGGeom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadCSGGeom_Surface;
class McCadCSGGeom_SequenceOfSurface;



class McCadCSGGeom_HSequenceOfSurface : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

McCadCSGGeom_HSequenceOfSurface();

  Standard_Boolean IsEmpty() const;

  Standard_Integer Length() const;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   void Append(const Handle(McCadCSGGeom_Surface)& anItem) ;


Standard_EXPORT   void Append(const Handle(McCadCSGGeom_HSequenceOfSurface)& aSequence) ;


Standard_EXPORT   void Prepend(const Handle(McCadCSGGeom_Surface)& anItem) ;


Standard_EXPORT   void Prepend(const Handle(McCadCSGGeom_HSequenceOfSurface)& aSequence) ;


Standard_EXPORT   void Reverse() ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Surface)& anItem) ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadCSGGeom_HSequenceOfSurface)& aSequence) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Surface)& anItem) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadCSGGeom_HSequenceOfSurface)& aSequence) ;


Standard_EXPORT   void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;


Standard_EXPORT   Handle_McCadCSGGeom_HSequenceOfSurface Split(const Standard_Integer anIndex) ;


Standard_EXPORT   void SetValue(const Standard_Integer anIndex,const Handle(McCadCSGGeom_Surface)& anItem) ;


Standard_EXPORT  const Handle_McCadCSGGeom_Surface& Value(const Standard_Integer anIndex) const;


Standard_EXPORT   Handle_McCadCSGGeom_Surface& ChangeValue(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

 const McCadCSGGeom_SequenceOfSurface& Sequence() const;

  McCadCSGGeom_SequenceOfSurface& ChangeSequence() ;


Standard_EXPORT   Handle_McCadCSGGeom_HSequenceOfSurface ShallowCopy() const;
//Standard_EXPORT ~McCadCSGGeom_HSequenceOfSurface();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

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
McCadCSGGeom_SequenceOfSurface mySequence;


};

#define Item Handle_McCadCSGGeom_Surface
#define Item_hxx <McCadCSGGeom_Surface.hxx>
#define TheSequence McCadCSGGeom_SequenceOfSurface
#define TheSequence_hxx <McCadCSGGeom_SequenceOfSurface.hxx>
#define TCollection_HSequence McCadCSGGeom_HSequenceOfSurface
#define TCollection_HSequence_hxx <McCadCSGGeom_HSequenceOfSurface.hxx>
#define Handle_TCollection_HSequence Handle_McCadCSGGeom_HSequenceOfSurface
#define TCollection_HSequence_Type_() McCadCSGGeom_HSequenceOfSurface_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
//
inline Handle_McCadCSGGeom_HSequenceOfSurface ShallowCopy(const Handle_McCadCSGGeom_HSequenceOfSurface& me) {
 return me->ShallowCopy();
}



#endif
