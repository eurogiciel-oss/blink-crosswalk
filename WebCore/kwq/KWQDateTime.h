/*
 * Copyright (C) 2003 Apple Computer, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#ifndef QDATETIME_H_
#define QDATETIME_H_

#include "KWQDef.h"
#if __APPLE__
#include <CoreFoundation/CFDate.h>
#else
typedef double CFAbsoluteTime;
inline CFAbsoluteTime CFAbsoluteTimeGetCurrent() { return 0; } // FIXME: Temporary until we port this class.
#endif

class QTime {
public:
    QTime() : timeInSeconds(0) { }
    explicit QTime(CFAbsoluteTime t) : timeInSeconds(t) { }
    QTime(int hours, int minutes);

    int msec() const;
    QTime addMSecs(int msecs) const;
    
    void start() { timeInSeconds = CFAbsoluteTimeGetCurrent(); }
    int elapsed() const;
    int restart();
    
    static QTime currentTime() { return QTime(CFAbsoluteTimeGetCurrent()); }
    
private:
    CFAbsoluteTime timeInSeconds; 
    
    friend class QDateTime;
};

class QDate {
public:
    QDate(int year, int month, int day);
        
private:
    int year;
    int month;
    int day;
    
    friend class QDateTime;
};

class QDateTime {
public:
    QDateTime() : dateInSeconds(0) { }
    explicit QDateTime(CFAbsoluteTime d) : dateInSeconds(d) { }
    QDateTime(const QDate &, const QTime &);
    
    QTime time() const { return QTime(dateInSeconds); }
    int secsTo(const QDateTime &) const;
    
    static QDateTime currentDateTime() { return QDateTime(CFAbsoluteTimeGetCurrent()); }

private:
    CFAbsoluteTime dateInSeconds;
};

#endif
