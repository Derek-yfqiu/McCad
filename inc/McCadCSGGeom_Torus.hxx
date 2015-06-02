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

#ifndef _McCadCSGGeom_Torus_HeaderFile
#define _McCadCSGGeom_Torus_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_Torus_HeaderFile
#include <Handle_McCadCSGGeom_Torus.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _McCadCSGGeom_Surface_HeaderFile
#include <McCadCSGGeom_Surface.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_McCadCSGGeom_Surface_HeaderFile
#include <Handle_McCadCSGGeom_Surface.hxx>
#endif
class gp_Ax3;
class TColStd_Array1OfReal;
class gp_Pnt;
class GeomAdaptor_Surface;
class Geom_Surface;
class McCadCSGGeom_Surface;

//! \brief Toroidal Surface

class McCadCSGGeom_Torus : public McCadCSGGeom_Surface {

public:
 // Methods PUBLIC
 // 

//! Creates an infinite Torus for use in <br>
//!  CSG representation <br>
//! <br>//! creates an indefinite Torus. <br>
Standard_EXPORT McCadCSGGeom_Torus();


//! <br>
Standard_EXPORT McCadCSGGeom_Torus(const gp_Ax3& A3,const Standard_Real theMajorRadius,const Standard_Real theMinorRadius);

//! Changes the major radius. <br>
Standard_EXPORT   void SetMajorRadius(const Standard_Real theMajorRadius) ;

//! Changes the minor radius. <br>
Standard_EXPORT   void SetMinorRadius(const Standard_Real theMinorRadius) ;

//! Changes the minor radius of the elliptical torus, which is perpendicular to the major radius
Standard_EXPORT   void SetMinorEllipticalRadius(const Standard_Real theMinorEllipsRadius) ;

//! Return the major radius
Standard_EXPORT   Standard_Real GetMajorRadius() const;

//! Return the minor radius
Standard_EXPORT   Standard_Real GetMinorRadius() const;

//! return minor radius for elliptical torus <br>
//! If the torus is elliptical, the Minor radius splits into one part <br>
//! parallel to the main axis (MinorRadius) and one part perpendicular <br>
//! to the main axis (MinorEllipticalRadius)
Standard_EXPORT   Standard_Real GetMinorEllipticalRadius() const;

//!Returns true if torus is elliptical
Standard_EXPORT   Standard_Boolean IsElliptical() const ;

Standard_EXPORT   void SetElliptical(const Standard_Boolean theState = Standard_True);


//!  Computes the coefficients of the implicit equation of the surface <br>
//!  in the absolute cartesian coordinate system : <br>
//! Coef(1) * X**4 + Coef(2) * Y**4 + Coef(3) * Z**4 + <br>
//! Coef(4) * X**3 * Y + Coef(5) * X**3 * Z + Coef(6) * Y**3 * X + <br>
//! Coef(7) * Y**3 * Z + Coef(8) * Z**3 * X + Coef(9) * Z**3 * Y + <br>
//! Coef(10) * X**2 * Y**2 + Coef(11) * X**2 * Z**2 + <br>
//! Coef(12) * Y**2 * Z**2 + Coef(13) * X**3 + Coef(14) * Y**3 + <br>
//! Coef(15) * Z**3 + Coef(16) * X**2 * Y + Coef(17) * X**2 * Z + <br>
//! Coef(18) * Y**2 * X + Coef(19) * Y**2 * Z + Coef(20) * Z**2 * X + <br>
//! Coef(21) * Z**2 * Y + Coef(22) * X**2 + Coef(23) * Y**2 + <br>
//! Coef(24) * Z**2 + Coef(25) * X * Y + Coef(26) * X * Z + <br>
//! Coef(27) * Y * Z + Coef(28) * X + Coef(29) * Y + Coef(30) *  Z + <br>
//! Coef(31) = 0.0 <br>
Standard_EXPORT   void Coefficients(TColStd_Array1OfReal& Coef) const;


Standard_EXPORT virtual  void Print(Standard_OStream& theStream) const;

//! Performs Point evaluation <br>
Standard_EXPORT virtual  Standard_Real Evaluate(const gp_Pnt& thePoint) const;

//!  findes a point on the surface; <br>
Standard_EXPORT virtual  gp_Pnt Value(const Standard_Real U,const Standard_Real V) const;


Standard_EXPORT virtual  void SetCasSurf(const GeomAdaptor_Surface& theSurf) ;

//! returns the Cas surface <br>
Standard_EXPORT virtual  Handle_Geom_Surface CasSurf() const;


Standard_EXPORT virtual  Standard_Boolean IsEqual(const Handle(McCadCSGGeom_Surface)& another) const;


Standard_EXPORT virtual  Standard_Boolean IsGeomEqual(const Handle(McCadCSGGeom_Surface)& another) const;
//Standard_EXPORT ~McCadCSGGeom_Torus();


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
Standard_Real myMajorRadius;
Standard_Real myMinorRadius;
// for elliptical tori myMinorRadius is defined as the radius collinear to myMajorRadius
// while myMinorEllipsRadius defines the radius of the ellipse which is perpendicular
// to myMajorRadius
Standard_Real myMinorEllipsRadius;

Standard_Boolean myIsElliptical;


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif
