/*
    Copyright (C) 2004, 2005 Nikolas Zimmermann <wildfox@kde.org>
                  2004, 2005, 2006 Rob Buis <buis@kde.org>

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

#include "config.h"
#ifdef SVG_SUPPORT
#include "SVGPaint.h"

namespace WebCore {

SVGPaint::SVGPaint()
    : SVGColor()
    , m_paintType(SVG_PAINTTYPE_UNKNOWN)
{
}

SVGPaint::SVGPaint(const String& uri)
    : SVGColor()
    , m_paintType(SVG_PAINTTYPE_URI)
{
    setUri(uri);
}

SVGPaint::SVGPaint(SVGPaintType paintType)
    : SVGColor()
    , m_paintType(paintType)
{
}

SVGPaint::SVGPaint(SVGPaintType paintType, const String& uri, const String& rgbPaint, const String&)
    : SVGColor(rgbPaint)
    , m_paintType(paintType)
{
    setUri(uri);
}

SVGPaint::~SVGPaint()
{
}

SVGPaint* SVGPaint::defaultFill()
{
    static SVGPaint* _defaultFill = new SVGPaint(SVG_PAINTTYPE_RGBCOLOR, String(), "black");
    return _defaultFill;
}

SVGPaint* SVGPaint::defaultStroke()
{
    static SVGPaint* _defaultStroke = new SVGPaint(SVG_PAINTTYPE_NONE);
    return _defaultStroke;
}

String SVGPaint::uri() const
{
    return m_uri;
}

void SVGPaint::setUri(const String& uri)
{
    m_uri = uri;
}

void SVGPaint::setPaint(SVGPaintType paintType, const String& uri, const String& rgbPaint, const String&, ExceptionCode&)
{
    m_paintType = paintType;

    if (m_paintType == SVG_PAINTTYPE_URI)
        setUri(uri);
    else if (m_paintType == SVG_PAINTTYPE_RGBCOLOR)
        setRGBColor(rgbPaint);
}

String SVGPaint::cssText() const
{
    if (m_paintType == SVG_PAINTTYPE_NONE)
        return "none";
    else if (m_paintType == SVG_PAINTTYPE_CURRENTCOLOR)
        return "currentColor";
    else if (m_paintType == SVG_PAINTTYPE_URI)
        return "url(" + m_uri + ")";

    return SVGColor::cssText();
}

}

// vim:ts=4:noet
#endif // SVG_SUPPORT

