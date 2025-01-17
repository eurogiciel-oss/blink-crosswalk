// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "config.h"
#include "web/MediaKeysClientImpl.h"

#include "core/dom/Document.h"
#include "core/dom/ExecutionContext.h"
#include "public/platform/WebContentDecryptionModule.h"
#include "public/web/WebFrameClient.h"
#include "web/WebLocalFrameImpl.h"

namespace blink {

MediaKeysClientImpl::MediaKeysClientImpl()
{
}

PassOwnPtr<WebContentDecryptionModule> MediaKeysClientImpl::createContentDecryptionModule(ExecutionContext* executionContext, const String& keySystem)
{
    Document* document = toDocument(executionContext);
    WebLocalFrameImpl* webFrame = WebLocalFrameImpl::fromFrame(document->frame());
    WebSecurityOrigin securityOrigin(executionContext->securityOrigin());
    return adoptPtr(webFrame->client()->createContentDecryptionModule(webFrame, securityOrigin, keySystem));
}

WebEncryptedMediaClient* MediaKeysClientImpl::encryptedMediaClient(ExecutionContext* executionContext)
{
    Document* document = toDocument(executionContext);
    WebLocalFrameImpl* webFrame = WebLocalFrameImpl::fromFrame(document->frame());
    return webFrame->client()->encryptedMediaClient();
}

} // namespace blink
