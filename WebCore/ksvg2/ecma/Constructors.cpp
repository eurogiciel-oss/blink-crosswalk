/*
    Copyright (C) 2004, 2005 Nikolas Zimmermann <wildfox@kde.org>
                  2004, 2005 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include <ksvg2/ksvg.h>
#include "Constructors.h"

#include <ksvg2/data/Constructors.lut.h>
using namespace KSVG;

// EcmaScript Constructors (enumerations)

/*
@begin SVGExceptionConstructor::s_hashTable 5
 SVG_WRONG_TYPE_ERR                KSVG::SVG_WRONG_TYPE_ERR            DontDelete|ReadOnly
 SVG_INVALID_VALUE_ERR            KSVG::SVG_INVALID_VALUE_ERR            DontDelete|ReadOnly
 SVG_MATRIX_NOT_INVERTABLE        KSVG::SVG_MATRIX_NOT_INVERTABLE        DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGExceptionConstructor, "SVGException")

/*
@begin SVGLengthConstructor::s_hashTable 13
 SVG_LENGTHTYPE_UNKNOWN            SVG_LENGTHTYPE_UNKNOWN        DontDelete|ReadOnly
 SVG_LENGTHTYPE_NUMBER            SVG_LENGTHTYPE_NUMBER        DontDelete|ReadOnly
 SVG_LENGTHTYPE_PERCENTAGE        SVG_LENGTHTYPE_PERCENTAGE    DontDelete|ReadOnly
 SVG_LENGTHTYPE_EMS                SVG_LENGTHTYPE_EMS            DontDelete|ReadOnly
 SVG_LENGTHTYPE_EXS                SVG_LENGTHTYPE_EXS            DontDelete|ReadOnly
 SVG_LENGTHTYPE_PX                SVG_LENGTHTYPE_PX            DontDelete|ReadOnly
 SVG_LENGTHTYPE_CM                SVG_LENGTHTYPE_CM            DontDelete|ReadOnly
 SVG_LENGTHTYPE_MM                SVG_LENGTHTYPE_MM            DontDelete|ReadOnly
 SVG_LENGTHTYPE_IN                SVG_LENGTHTYPE_IN            DontDelete|ReadOnly
 SVG_LENGTHTYPE_PT                SVG_LENGTHTYPE_PT            DontDelete|ReadOnly
 SVG_LENGTHTYPE_PC                SVG_LENGTHTYPE_PC            DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGLengthConstructor, "SVGLength")

/*
@begin SVGAngleConstructor::s_hashTable 7
 SVG_ANGLETYPE_UNKNOWN        SVG_ANGLETYPE_UNKNOWN        DontDelete|ReadOnly
 SVG_ANGLETYPE_UNSPECIFIED    SVG_ANGLETYPE_UNSPECIFIED    DontDelete|ReadOnly
 SVG_ANGLETYPE_DEG            SVG_ANGLETYPE_DEG            DontDelete|ReadOnly
 SVG_ANGLETYPE_RAD            SVG_ANGLETYPE_RAD            DontDelete|ReadOnly
 SVG_ANGLETYPE_GRAD            SVG_ANGLETYPE_GRAD            DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGAngleConstructor, "SVGAngle")

/*
@begin SVGColorConstructor::s_hashTable 5
 SVG_COLORTYPE_UNKNOWN                SVG_COLORTYPE_UNKNOWN            DontDelete|ReadOnly
 SVG_COLORTYPE_RGBCOLOR                SVG_COLORTYPE_RGBCOLOR            DontDelete|ReadOnly
 SVG_COLORTYPE_RGBCOLOR_ICCCOLOR    SVG_COLORTYPE_RGBCOLOR_ICCCOLOR    DontDelete|ReadOnly
 SVG_COLORTYPE_CURRENTCOLOR            SVG_COLORTYPE_CURRENTCOLOR        DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGColorConstructor, "SVGColor")

/*
@begin SVGUnitTypesConstructor::s_hashTable 5
 SVG_UNIT_TYPE_UNKNOWN                SVG_UNIT_TYPE_UNKNOWN            DontDelete|ReadOnly
 SVG_UNIT_TYPE_USERSPACEONUSE        SVG_UNIT_TYPE_USERSPACEONUSE    DontDelete|ReadOnly
 SVG_UNIT_TYPE_OBJECTBOUNDINGBOX    SVG_UNIT_TYPE_OBJECTBOUNDINGBOX    DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGUnitTypesConstructor, "SVGUnitTypes")

/*
@begin SVGZoomAndPanConstructor::s_hashTable 5
 SVG_ZOOMANDPAN_UNKNOWN    SVG_ZOOMANDPAN_UNKNOWN    DontDelete|ReadOnly
 SVG_ZOOMANDPAN_DISABLE    SVG_ZOOMANDPAN_DISABLE    DontDelete|ReadOnly
 SVG_ZOOMANDPAN_MAGNIFY    SVG_ZOOMANDPAN_MAGNIFY    DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGZoomAndPanConstructor, "SVGZoomAndPan")

/*KSVG_IMPLEMENT_CONSTRUCTOR(SVGRenderingIntentConstructor, "SVGRenderingIntent")
KSVG_IMPLEMENT_CONSTRUCTOR(SVGCSSRuleConstructor, "SVGCSSRule")
KSVG_IMPLEMENT_CONSTRUCTOR(SVGTextContentElementConstructor, "SVGTextContent")
KSVG_IMPLEMENT_CONSTRUCTOR(SVGTextPathElementConstructor, "SVGTextPathElement")
*/

/*
@begin SVGMarkerElementConstructor::s_hashTable 7
 SVG_MARKERUNITS_UNKNOWN        SVG_MARKERUNITS_UNKNOWN            DontDelete|ReadOnly
 SVG_MARKERUNITS_USERSPACEONUSE    SVG_MARKERUNITS_USERSPACEONUSE    DontDelete|ReadOnly
 SVG_MARKERUNITS_STROKEWIDTH    SVG_MARKERUNITS_STROKEWIDTH        DontDelete|ReadOnly
 SVG_MARKER_ORIENT_UNKNOWN        SVG_MARKER_ORIENT_UNKNOWN        DontDelete|ReadOnly
 SVG_MARKER_ORIENT_AUTO            SVG_MARKER_ORIENT_AUTO            DontDelete|ReadOnly
 SVG_MARKER_ORIENT_ANGLE        SVG_MARKER_ORIENT_ANGLE            DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGMarkerElementConstructor, "SVGMarkerElement")

/*
@begin SVGTransformConstructor::s_hashTable 9
 SVG_TRANSFORM_UNKNOWN        SVG_TRANSFORM_UNKNOWN    DontDelete|ReadOnly
 SVG_TRANSFORM_MATRIX        SVG_TRANSFORM_MATRIX    DontDelete|ReadOnly
 SVG_TRANSFORM_TRANSLATE    SVG_TRANSFORM_TRANSLATE    DontDelete|ReadOnly
 SVG_TRANSFORM_SCALE        SVG_TRANSFORM_SCALE        DontDelete|ReadOnly
 SVG_TRANSFORM_ROTATE        SVG_TRANSFORM_ROTATE    DontDelete|ReadOnly
 SVG_TRANSFORM_SKEWX        SVG_TRANSFORM_SKEWX        DontDelete|ReadOnly
 SVG_TRANSFORM_SKEWY        SVG_TRANSFORM_SKEWY        DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGTransformConstructor, "SVGTransform")

/*
@begin SVGPreserveAspectRatioConstructor::s_hashTable 17
 SVG_PRESERVEASPECTRATIO_UNKNOWN    SVG_PRESERVEASPECTRATIO_UNKNOWN        DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_NONE        SVG_PRESERVEASPECTRATIO_NONE        DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMINYMIN    SVG_PRESERVEASPECTRATIO_XMINYMIN    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMIDYMIN    SVG_PRESERVEASPECTRATIO_XMIDYMIN    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMAXYMIN    SVG_PRESERVEASPECTRATIO_XMAXYMIN    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMINYMID    SVG_PRESERVEASPECTRATIO_XMINYMID    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMIDYMID    SVG_PRESERVEASPECTRATIO_XMIDYMID    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMAXYMID    SVG_PRESERVEASPECTRATIO_XMAXYMID    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMINYMAX    SVG_PRESERVEASPECTRATIO_XMINYMAX    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMIDYMAX    SVG_PRESERVEASPECTRATIO_XMIDYMAX    DontDelete|ReadOnly
 SVG_PRESERVEASPECTRATIO_XMAXYMAX    SVG_PRESERVEASPECTRATIO_XMAXYMAX    DontDelete|ReadOnly
 SVG_MEETORSLICE_UNKNOWN            SVG_MEETORSLICE_UNKNOWN                DontDelete|ReadOnly
 SVG_MEETORSLICE_MEET                SVG_MEETORSLICE_MEET                DontDelete|ReadOnly
 SVG_MEETORSLICE_SLICE                SVG_MEETORSLICE_SLICE                DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGPreserveAspectRatioConstructor, "SVGPreserveAspectRatio")

/*
@begin SVGPathSegConstructor::s_hashTable 23
 PATHSEG_UNKNOWN                        PATHSEG_UNKNOWN                        DontDelete|ReadOnly
 PATHSEG_CLOSEPATH                        PATHSEG_CLOSEPATH                        DontDelete|ReadOnly
 PATHSEG_MOVETO_ABS                        PATHSEG_MOVETO_ABS                    DontDelete|ReadOnly
 PATHSEG_MOVETO_REL                        PATHSEG_MOVETO_REL                    DontDelete|ReadOnly
 PATHSEG_LINETO_ABS                        PATHSEG_LINETO_ABS                    DontDelete|ReadOnly
 PATHSEG_LINETO_REL                        PATHSEG_LINETO_REL                    DontDelete|ReadOnly
 PATHSEG_CURVETO_CUBIC_ABS                PATHSEG_CURVETO_CUBIC_ABS                DontDelete|ReadOnly
 PATHSEG_CURVETO_CUBIC_REL                PATHSEG_CURVETO_CUBIC_REL                DontDelete|ReadOnly
 PATHSEG_CURVETO_QUADRATIC_ABS            PATHSEG_CURVETO_QUADRATIC_ABS            DontDelete|ReadOnly
 PATHSEG_CURVETO_QUADRATIC_REL            PATHSEG_CURVETO_QUADRATIC_REL            DontDelete|ReadOnly
 PATHSEG_ARC_ABS                        PATHSEG_ARC_ABS                        DontDelete|ReadOnly
 PATHSEG_ARC_REL                        PATHSEG_ARC_REL                        DontDelete|ReadOnly
 PATHSEG_LINETO_HORIZONTAL_ABS            PATHSEG_LINETO_HORIZONTAL_ABS            DontDelete|ReadOnly
 PATHSEG_LINETO_HORIZONTAL_REL            PATHSEG_LINETO_HORIZONTAL_REL            DontDelete|ReadOnly
 PATHSEG_LINETO_VERTICAL_ABS            PATHSEG_LINETO_VERTICAL_ABS            DontDelete|ReadOnly
 PATHSEG_LINETO_VERTICAL_REL            PATHSEG_LINETO_VERTICAL_REL            DontDelete|ReadOnly
 PATHSEG_CURVETO_CUBIC_SMOOTH_ABS        PATHSEG_CURVETO_CUBIC_SMOOTH_ABS        DontDelete|ReadOnly
 PATHSEG_CURVETO_CUBIC_SMOOTH_REL        PATHSEG_CURVETO_CUBIC_SMOOTH_REL        DontDelete|ReadOnly
 PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS    PATHSEG_CURVETO_QUADRATIC_SMOOTH_ABS    DontDelete|ReadOnly
 PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL    PATHSEG_CURVETO_QUADRATIC_SMOOTH_REL    DontDelete|ReadOnly
@end
*/
KSVG_IMPLEMENT_CONSTRUCTOR(SVGPathSegConstructor, "SVGPathSeg")

/*
@begin SVGPaintConstructor::s_hashTable 11
SVG_PAINTTYPE_UNKNOWN                SVG_PAINTTYPE_UNKNOWN                DontDelete|ReadOnly
SVG_PAINTTYPE_CURRENTCOLOR            SVG_PAINTTYPE_CURRENTCOLOR            DontDelete|ReadOnly
SVG_PAINTTYPE_RGBCOLOR                SVG_PAINTTYPE_RGBCOLOR                DontDelete|ReadOnly
SVG_PAINTTYPE_RGBCOLOR                SVG_PAINTTYPE_RGBCOLOR_ICCCOLOR        DontDelete|ReadOnly
SVG_PAINTTYPE_NONE                    SVG_PAINTTYPE_NONE                    DontDelete|ReadOnly
SVG_PAINTTYPE_URI_NONE                SVG_PAINTTYPE_URI_NONE                DontDelete|ReadOnly
SVG_PAINTTYPE_URI_RGBCOLOR            SVG_PAINTTYPE_URI_RGBCOLOR            DontDelete|ReadOnly
SVG_PAINTTYPE_URI_RGBCOLOR_ICCCOLOR    SVG_PAINTTYPE_URI_RGBCOLOR_ICCCOLOR    DontDelete|ReadOnly
SVG_PAINTTYPE_URI_CURRENTCOLOR        SVG_PAINTTYPE_URI_CURRENTCOLOR        DontDelete|ReadOnly
SVG_PAINTTYPE_URI                    SVG_PAINTTYPE_URI                    DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGPaintConstructor, "SVGPaint")

/*
@begin SVGGradientElementConstructor::s_hashTable 5
 SVG_SPREADMETHOD_UNKNOWN    SVG_SPREADMETHOD_UNKNOWN    DontDelete|ReadOnly
 SVG_SPREADMETHOD_PAD        SVG_SPREADMETHOD_PAD        DontDelete|ReadOnly
 SVG_SPREADMETHOD_REFLECT    SVG_SPREADMETHOD_REFLECT    DontDelete|ReadOnly
 SVG_SPREADMETHOD_REPEAT    SVG_SPREADMETHOD_REPEAT        DontDelete|ReadOnly
@end
*/

KSVG_IMPLEMENT_CONSTRUCTOR(SVGGradientElementConstructor, "SVGGradientElement")

// vim:ts=4:noet
