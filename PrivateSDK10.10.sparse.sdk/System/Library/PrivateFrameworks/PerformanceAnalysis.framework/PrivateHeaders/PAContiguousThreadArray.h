/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface PAContiguousThreadArray : NSObject
{
    NSMutableArray *_threads;
    unsigned long long _firstTimestampIndex;
    unsigned long long _previousCpuTimeNs;
}

- (BOOL)threadExistedPreviously;
- (BOOL)isProcessorIdleThread;
- (unsigned long long)cpuTimeNs;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (void)addSampleThread:(id)arg1;
@property(readonly) unsigned long long dispatchQueueId;
@property(readonly) unsigned long long threadId;
- (void)dealloc;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2;
- (BOOL)isSingleStackWithLeafFrame:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)firstTimestampIndex;
- (id)debugDescription;

@end

