/*
 *  Copyright (C) 2000 Harri Porten (porten@kde.org)
 *  Copyright (C) 2003, 2004, 2005, 2006, 2007 Apple Inc. All rights reseved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef JSLocation_h
#define JSLocation_h

#include "kjs_binding.h"

namespace KJS {
    class Window;
}

namespace WebCore {

    class Frame;

    class JSLocation : public KJS::DOMObject {
        friend class KJS::Window;
    public:
        JSLocation(KJS::JSObject* protoype, Frame*);
    
        virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
        KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
        virtual void put(KJS::ExecState*, const KJS::Identifier&, KJS::JSValue*, int attr = KJS::None);

        enum {
            Hash, Href, Hostname, Host,
            Pathname, Port, Protocol, Search,
            Replace, Reload, ToString, Assign
        };

        Frame* frame() const { return m_frame; }

        virtual const KJS::ClassInfo* classInfo() const { return &info; }
        static const KJS::ClassInfo info;

    private:
        Frame* m_frame;
    };

#define FOR_EACH_CLASS(macro) \
    macro(JSLocationProtoFuncAssign) \
    macro(JSLocationProtoFuncToString) \
    macro(JSLocationProtoFuncReplace) \
    macro(JSLocationProtoFuncReload) \

FOR_EACH_CLASS(KJS_IMPLEMENT_PROTOTYPE_FUNCTION_WITH_CREATE)
#undef FOR_EACH_CLASS

} // namespace WebCore

#endif // JSLocation_h
