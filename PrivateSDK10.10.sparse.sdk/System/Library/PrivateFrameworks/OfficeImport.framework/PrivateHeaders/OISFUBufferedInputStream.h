/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <OfficeImport/OISFUBufferedInputStream-Protocol.h>

@class NSString;

// Not exported
@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream>
{
    id <SFUInputStream> mStream;
    char *mBuffer;
    unsigned long long mBufferSize;
    long long mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

