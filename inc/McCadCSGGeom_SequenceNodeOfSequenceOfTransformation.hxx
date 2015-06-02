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

#ifndef _McCadCSGGeom_SequenceNodeOfSequenceOfTransformation_HeaderFile
#define _McCadCSGGeom_SequenceNodeOfSequenceOfTransformation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_SequenceNodeOfSequenceOfTransformation_HeaderFile
#include <Handle_McCadCSGGeom_SequenceNodeOfSequenceOfTransformation.hxx>
#endif

#ifndef _Handle_McCadCSGGeom_Transformation_HeaderFile
#include <Handle_McCadCSGGeom_Transformation.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class McCadCSGGeom_Transformation;
class McCadCSGGeom_SequenceOfTransformation;



class McCadCSGGeom_SequenceNodeOfSequenceOfTransformation : public TCollection_SeqNode {

public:
 // Methods PUBLIC
 // 

McCadCSGGeom_SequenceNodeOfSequenceOfTransformation(const Handle(McCadCSGGeom_Transformation)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);

  Handle_McCadCSGGeom_Transformation& Value() const;
//Standard_EXPORT ~McCadCSGGeom_SequenceNodeOfSequenceOfTransformation();




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
Handle_McCadCSGGeom_Transformation myValue;


};

#define SeqItem Handle_McCadCSGGeom_Transformation
#define SeqItem_hxx <McCadCSGGeom_Transformation.hxx>
#define TCollection_SequenceNode McCadCSGGeom_SequenceNodeOfSequenceOfTransformation
#define TCollection_SequenceNode_hxx <McCadCSGGeom_SequenceNodeOfSequenceOfTransformation.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadCSGGeom_SequenceNodeOfSequenceOfTransformation
#define TCollection_SequenceNode_Type_() McCadCSGGeom_SequenceNodeOfSequenceOfTransformation_Type_()
#define TCollection_Sequence McCadCSGGeom_SequenceOfTransformation
#define TCollection_Sequence_hxx <McCadCSGGeom_SequenceOfTransformation.hxx>

#include <TCollection_SequenceNode.lxx>

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
