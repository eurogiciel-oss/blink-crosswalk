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

#include <kdom/ecma/Ecma.h>

#include <kdom/DOMException.h>
#include <kdom/impl/DOMExceptionImpl.h>

#include "SVGFEMergeElement.h"
#include "SVGFEMergeElementImpl.h"
#include "SVGException.h"
#include "SVGExceptionImpl.h"

#include "SVGConstants.h"
#include "SVGFEMergeElement.lut.h"
using namespace KSVG;

/*
@begin SVGFEMergeElement::s_hashTable 5
 dummy        SVGFEMergeElementConstants::Dummy        DontDelete|ReadOnly
@end
*/

ValueImp *SVGFEMergeElement::getValueProperty(ExecState *exec, int token) const
{
    KDOM_ENTER_SAFE

    switch(token)
    {
        default:
            kdWarning() << "Unhandled token in " << k_funcinfo << " : " << token << endl;
    }

    KDOM_LEAVE_SAFE(KDOM::DOMException)
    return Undefined();
}

// The qdom way...
#define impl (static_cast<SVGFEMergeElementImpl *>(d))

SVGFEMergeElement SVGFEMergeElement::null;

SVGFEMergeElement::SVGFEMergeElement() : SVGElement(), SVGFilterPrimitiveStandardAttributes()
{
}

SVGFEMergeElement::SVGFEMergeElement(SVGFEMergeElementImpl *i) : SVGElement(i), SVGFilterPrimitiveStandardAttributes(i)
{
}

SVGFEMergeElement::SVGFEMergeElement(const SVGFEMergeElement &other) : SVGElement(), SVGFilterPrimitiveStandardAttributes()
{
    (*this) = other;
}

SVGFEMergeElement::SVGFEMergeElement(const KDOM::Node &other) : SVGElement(), SVGFilterPrimitiveStandardAttributes()
{
    (*this) = other;
}

SVGFEMergeElement::~SVGFEMergeElement()
{
}

SVGFEMergeElement &SVGFEMergeElement::operator=(const SVGFEMergeElement &other)
{
    SVGElement::operator=(other);
    SVGFilterPrimitiveStandardAttributes::operator=(other);
    return *this;
}

SVGFEMergeElement &SVGFEMergeElement::operator=(const KDOM::Node &other)
{
    SVGFEMergeElementImpl *ohandle = static_cast<SVGFEMergeElementImpl *>(other.handle());
    if(d != ohandle)
    {
        if(!ohandle || ohandle->nodeType() != KDOM::ELEMENT_NODE)
        {
            if(d)
                d->deref();
            
            d = 0;
        }
        else
        {
            SVGElement::operator=(other);
            SVGFilterPrimitiveStandardAttributes::operator=(ohandle);
        }
    }

    return *this;
}

// vim:ts=4:noet
