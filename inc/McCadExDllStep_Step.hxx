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

#ifndef _McCadExDllStep_Step_HeaderFile
#define _McCadExDllStep_Step_HeaderFile

#ifndef _Handle_TColStd_HSequenceOfAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfAsciiString.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _McCadEXPlug_ExchangePlugin_HeaderFile
#include <McCadEXPlug_ExchangePlugin.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
class TColStd_HSequenceOfAsciiString;
class TopTools_HSequenceOfShape;
class TCollection_AsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif


//! \brief Import-Export-Class for STEP files


//! STEP is the most suitable independent file format for CAD geometry.

class McCadExDllStep_Step  : public McCadEXPlug_ExchangePlugin {

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

//! This is Plugin proxy <br>
Standard_EXPORT McCadExDllStep_Step();

Standard_EXPORT virtual ~McCadExDllStep_Step(){}

Standard_EXPORT virtual  Standard_Boolean Export(const Handle(TopTools_HSequenceOfShape)& theEntitySequence) ;


Standard_EXPORT virtual  Handle_TopTools_HSequenceOfShape Import() ;


Standard_EXPORT virtual  TCollection_AsciiString GetFilename() const;


Standard_EXPORT virtual  void SetFilename(const TCollection_AsciiString& theFileName) ;


Standard_EXPORT virtual  Standard_Integer GetSize() const;


Standard_EXPORT virtual  Handle_TColStd_HSequenceOfAsciiString GetExtensions() const;


Standard_EXPORT virtual  TCollection_AsciiString GetExtension() const;


Standard_EXPORT virtual  TCollection_AsciiString GetFormat() const;


Standard_EXPORT virtual  Standard_Boolean ExportEnabled() const;


Standard_EXPORT virtual  Standard_Boolean ImportEnabled() const;

Standard_EXPORT virtual Standard_Boolean ImportToDocument(Handle(TDocStd_Document)& theDoc);

Standard_EXPORT virtual  Standard_Boolean ExportFromDocument(const Handle(TDocStd_Document)& theDoc);

//Standard_EXPORT   McCadGUI_ProgressDialogPtr GetProgressDialog();

protected:

 // Methods PROTECTED
 //

	Standard_EXPORT   void run() ;

 // Fields PROTECTED
 //
TCollection_AsciiString myFormat;
Standard_Boolean myExportEnabled;
Standard_Boolean myImportEnabled;
TCollection_AsciiString myFileName;
Standard_Integer mySize;
Standard_Integer myType;


private:

 // Methods PRIVATE
 //


Standard_EXPORT   Standard_Boolean IsFacetedBrep(const Handle(TopTools_HSequenceOfShape)& aHSequenceOfShape) ;


 // Fields PRIVATE
 //
Handle_TColStd_HSequenceOfAsciiString myExtensions;
//McCadGUI_ProgressDialogPtr myProgress;

};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
