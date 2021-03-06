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

#ifndef _McCadMcRead_SurfaceFactory_HeaderFile
#define _McCadMcRead_SurfaceFactory_HeaderFile

#ifndef _Handle_McCadCSGGeom_Surface_HeaderFile
#include <Handle_McCadCSGGeom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class McCadCSGGeom_Surface;
class TCollection_AsciiString;


#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#include <TColStd_HSequenceOfReal.hxx>
#include <McCadCSGGeom_HSequenceOfSurface.hxx>

//! \brief Make McCad_Surface from MCNP geometry description

//! Creates an McCad_Surface from MCNP surface syntax. <br>
//! <br>
//! <br>

class McCadMcRead_SurfaceFactory  {

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


Standard_EXPORT McCadMcRead_SurfaceFactory();


Standard_EXPORT McCadMcRead_SurfaceFactory(const Handle_McCadCSGGeom_Surface& oldSurf) ;


Standard_EXPORT   Standard_Boolean MakeSurface(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean IsDone() const;


Standard_EXPORT   Handle_McCadCSGGeom_Surface GetSurface() const;

Standard_EXPORT   Handle(McCadCSGGeom_HSequenceOfSurface) GetMacroBodySurfaces();



protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //


private:

 // Methods PRIVATE
 //


Standard_EXPORT   void Done() ;


Standard_EXPORT   void NotDone() ;


Standard_EXPORT   Standard_Boolean MakePlane(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeCylinder(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeCone(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeSphere(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeTorus(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeGQ(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean MakeAxissymmetricSurfaceByPoints(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT  Standard_Boolean MakeBOX(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeRPP(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeRCC(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeHEX(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeREC(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeTRC(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeELL(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeWED(const TCollection_AsciiString& sDesc) ;
Standard_EXPORT  Standard_Boolean MakeARB(const TCollection_AsciiString& sDesc) ;


Standard_EXPORT   Standard_Boolean PointPlane(const gp_Dir& dir, Handle_TColStd_HSequenceOfReal& thePntSeq) ;


Standard_EXPORT   Standard_Boolean PointCylinder(const gp_Dir& dir, Handle_TColStd_HSequenceOfReal& thePntSeq) ;


Standard_EXPORT   Standard_Boolean PointCone(const gp_Dir& dir, Handle_TColStd_HSequenceOfReal& thePntSeq) ;

Standard_EXPORT  void InitMacroBodySurfaces();

 // Fields PRIVATE
 //
Handle_McCadCSGGeom_Surface mySurface;
Standard_Boolean myIsDone;
Handle(McCadCSGGeom_HSequenceOfSurface) myMacroBodySurfaces;
Standard_Boolean myIsMacroBody;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
