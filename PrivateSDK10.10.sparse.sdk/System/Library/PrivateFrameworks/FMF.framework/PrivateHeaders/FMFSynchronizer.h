/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSString;

@interface FMFSynchronizer : NSObject
{
    BOOL _timeoutOccurred;
    double _timeout;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSString *_info;
}

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
- (void).cxx_destruct;
- (id)loggingID;
- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end

