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

#ifndef _Handle_McCadDiscDs_HSequenceOfDiscFace_HeaderFile
#define _Handle_McCadDiscDs_HSequenceOfDiscFace_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(MMgt_TShared);
class McCadDiscDs_HSequenceOfDiscFace;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadDiscDs_HSequenceOfDiscFace);

class Handle(McCadDiscDs_HSequenceOfDiscFace) : public Handle(MMgt_TShared) {
  public:
    Handle(McCadDiscDs_HSequenceOfDiscFace)():Handle(MMgt_TShared)() {} 
    Handle(McCadDiscDs_HSequenceOfDiscFace)(const Handle(McCadDiscDs_HSequenceOfDiscFace)& aHandle) : Handle(MMgt_TShared)(aHandle) 
     {
     }

    Handle(McCadDiscDs_HSequenceOfDiscFace)(const McCadDiscDs_HSequenceOfDiscFace* anItem) : Handle(MMgt_TShared)((MMgt_TShared *)anItem) 
     {
     }

    Handle(McCadDiscDs_HSequenceOfDiscFace)& operator=(const Handle(McCadDiscDs_HSequenceOfDiscFace)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadDiscDs_HSequenceOfDiscFace)& operator=(const McCadDiscDs_HSequenceOfDiscFace* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadDiscDs_HSequenceOfDiscFace* operator->() const
     {
      return (McCadDiscDs_HSequenceOfDiscFace *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadDiscDs_HSequenceOfDiscFace)();
 
   Standard_EXPORT static const Handle(McCadDiscDs_HSequenceOfDiscFace) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
