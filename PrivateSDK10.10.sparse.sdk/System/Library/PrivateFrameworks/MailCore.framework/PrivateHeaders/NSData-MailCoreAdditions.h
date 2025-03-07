/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (MailCoreAdditions)
- (id)hexString;
- (id)MD5Digest;
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCString:(const char *)arg1;
- (struct _NSRange)rangeOfByteFromSet:(id)arg1;
- (struct _NSRange)rangeOfRFC822HeaderData;
- (id)quotedFromSpaceDataForMessage;
- (id)unquotedFromSpaceDataWithRange:(struct _NSRange)arg1;
- (id)initWithDataConvertingLineEndingsFromNetworkToUnix:(id)arg1;
- (id)initWithDataConvertingLineEndingsFromUnixToNetwork:(id)arg1;
@end

