/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface CalDAVScanResponse : NSObject
{
    NSURL *_fileURL;
    NSString *_etag;
}

@property(retain) NSString *etag; // @synthesize etag=_etag;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)initWithFileURL:(id)arg1 etag:(id)arg2;
- (void)dealloc;

@end

