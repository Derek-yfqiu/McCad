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

#ifndef _Handle_McCadMcRead_Cell_HeaderFile
#define _Handle_McCadMcRead_Cell_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif

#ifndef _Handle_McCadCSGGeom_Cell_HeaderFile
#include <Handle_McCadCSGGeom_Cell.hxx>
#endif

class Standard_Transient;
class Handle_Standard_Type;
class Handle(McCadCSGGeom_Cell);
class McCadMcRead_Cell;
Standard_EXPORT Handle_Standard_Type& STANDARD_TYPE(McCadMcRead_Cell);

class Handle(McCadMcRead_Cell) : public Handle(McCadCSGGeom_Cell) {
  public:
    Handle(McCadMcRead_Cell)():Handle(McCadCSGGeom_Cell)() {} 
    Handle(McCadMcRead_Cell)(const Handle(McCadMcRead_Cell)& aHandle) : Handle(McCadCSGGeom_Cell)(aHandle) 
     {
     }

    Handle(McCadMcRead_Cell)(const McCadMcRead_Cell* anItem) : Handle(McCadCSGGeom_Cell)((McCadCSGGeom_Cell *)anItem) 
     {
     }

    Handle(McCadMcRead_Cell)& operator=(const Handle(McCadMcRead_Cell)& aHandle)
     {
      Assign(aHandle.Access());
      return *this;
     }

    Handle(McCadMcRead_Cell)& operator=(const McCadMcRead_Cell* anItem)
     {
      Assign((Standard_Transient *)anItem);
      return *this;
     }

    McCadMcRead_Cell* operator->() const
     {
      return (McCadMcRead_Cell *)ControlAccess();
     }

//   Standard_EXPORT ~Handle(McCadMcRead_Cell)();
 
   Standard_EXPORT static const Handle(McCadMcRead_Cell) DownCast(const Handle(Standard_Transient)& AnObject);
};
#endif
