/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSInputStream.h"

@class NSData, NSString;

@interface ForkedFileInputStream : NSInputStream
{
    NSString *_path;
    BOOL _isStreamingRsrc;
    NSData *_rsrcData;
    unsigned long long _dataForkLength;
    unsigned long long _amountWritten;
    BOOL _traverse;
    NSInputStream *_currentStream;
}

- (id)initWithFileAtPath:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)hasBytesAvailable;
- (void)close;
- (void)dealloc;
- (void)_cleanup;
- (void)open;

@end

