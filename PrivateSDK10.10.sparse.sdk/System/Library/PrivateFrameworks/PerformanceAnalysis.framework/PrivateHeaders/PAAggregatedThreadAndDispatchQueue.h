/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PAAggregatedStack-Protocol.h"

@class NSMutableArray, NSString, PAAggregatedProcessInstance, PAProcessInstanceAggregator;

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack>
{
    PAAggregatedProcessInstance *_aggregatedTask;
    NSMutableArray *_contiguousThreadArrays;
    int _minPriority;
    int _maxPriority;
    unsigned long long _dispatchQueueId;
    unsigned long long _threadId;
    unsigned long long _cpuTimeNsCached;
}

@property int minPriority; // @synthesize minPriority=_minPriority;
@property int maxPriority; // @synthesize maxPriority=_maxPriority;
@property unsigned long long threadId; // @synthesize threadId=_threadId;
@property unsigned long long dispatchQueueId; // @synthesize dispatchQueueId=_dispatchQueueId;
@property(readonly) PAAggregatedProcessInstance *aggregatedTask; // @synthesize aggregatedTask=_aggregatedTask;
- (unsigned long long)cpuTimeNs;
@property(readonly) BOOL isIdleWorkQueueThread;
@property(readonly) BOOL isProcessorIdleThread;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)printToStream:(struct __sFILE *)arg1;
- (void)printStackToStream:(struct __sFILE *)arg1;
- (void)printHeavyStacksToStream:(struct __sFILE *)arg1 onlyPrintHeaviest:(BOOL)arg2;
- (id)copyStringForMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1;
- (unsigned long long)numMissingSamplesBeforeContiguousThreadArrayIndex:(unsigned long long)arg1;
- (id)copyDescriptionForSampleFrame:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)printHeaderToStream:(struct __sFILE *)arg1;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
@property(readonly) NSMutableArray *contiguousThreadArrays;
- (BOOL)isSingleStack;
- (int)count;
- (void)dealloc;
- (id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2;
- (id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3;
@property(readonly) unsigned long long lastTimestampIndex;
@property(readonly) unsigned long long firstTimestampIndex;
- (id)sampleStore;
@property(readonly) PAProcessInstanceAggregator *aggregator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) BOOL isMainThread;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

