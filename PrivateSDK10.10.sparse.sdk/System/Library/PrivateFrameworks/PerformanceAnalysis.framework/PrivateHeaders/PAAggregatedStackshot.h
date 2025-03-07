/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, PASampleTimeSeriesDataStore, PASymbolDataStore;

@interface PAAggregatedStackshot : NSObject
{
    NSMutableArray *_taskData;
    NSMutableArray *_pidsToTrack;
    unsigned int _numStackshots;
    BOOL _symbolicated;
    NSMutableArray *_rawStackshots;
    BOOL _shouldSaveStackshots;
    PASymbolDataStore *_symbolDataStore;
    PASampleTimeSeriesDataStore *_sourceTimeSeriesDataStore;
}

+ (id)pidsForName:(id)arg1;
@property BOOL shouldSaveStackshots; // @synthesize shouldSaveStackshots=_shouldSaveStackshots;
- (void)discardTimeStampsOutsideOfStartTime:(double)arg1 andEndTime:(double)arg2;
- (id)newAggregatedStackshotFromSamplesBetweenStartInSec:(double)arg1 andEndInSec:(double)arg2;
- (void)printAggregatedStackshotToFile:(struct __sFILE *)arg1;
- (void)addSampleData:(id)arg1;
- (void)addNewStackshot:(id)arg1;
- (void)doAggregation;
- (void)dealloc;
- (void)grabSample;
- (void)addToTrackedPids:(int)arg1;
- (id)initWithSamples:(id)arg1 fromSampleTimeSeriesDataStore:(id)arg2;
- (id)init;
- (void)symbolicate;
- (void)trackProcessesWithName:(id)arg1;
- (id)tasks;
- (unsigned int)numStackshots;

@end

