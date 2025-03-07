/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CoreWiFiScanManager : NSObject
{
    unsigned long long activeDwellTime;
    unsigned long long passiveDwellTime;
    unsigned long long idleRestTime;
    unsigned long long idleRestMultiplier;
    unsigned long long activeRestTime;
    unsigned long long activeRestMultiplier;
    unsigned long long scanCycleIdleRestTime;
    unsigned long long scanCycleIdleRestMultiplier;
    unsigned long long scanCycleActiveRestTime;
    unsigned long long scanCycleActiveRestMultiplier;
    unsigned long long maximumRestTime;
    unsigned long long maximumScanCycles;
    unsigned long long numProbeRequestsPerBundle;
    NSMutableArray *ssidsOfInterest;
}

+ (BOOL)stopOnInterface:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *ssidsOfInterest; // @synthesize ssidsOfInterest;
@property(nonatomic) unsigned long long numProbeRequestsPerBundle; // @synthesize numProbeRequestsPerBundle;
@property(nonatomic) unsigned long long maximumScanCycles; // @synthesize maximumScanCycles;
@property(nonatomic) unsigned long long maximumRestTime; // @synthesize maximumRestTime;
@property(nonatomic) unsigned long long scanCycleActiveRestMultiplier; // @synthesize scanCycleActiveRestMultiplier;
@property(nonatomic) unsigned long long scanCycleActiveRestTime; // @synthesize scanCycleActiveRestTime;
@property(nonatomic) unsigned long long scanCycleIdleRestMultiplier; // @synthesize scanCycleIdleRestMultiplier;
@property(nonatomic) unsigned long long scanCycleIdleRestTime; // @synthesize scanCycleIdleRestTime;
@property(nonatomic) unsigned long long activeRestMultiplier; // @synthesize activeRestMultiplier;
@property(nonatomic) unsigned long long activeRestTime; // @synthesize activeRestTime;
@property(nonatomic) unsigned long long idleRestMultiplier; // @synthesize idleRestMultiplier;
@property(nonatomic) unsigned long long idleRestTime; // @synthesize idleRestTime;
@property(nonatomic) unsigned long long passiveDwellTime; // @synthesize passiveDwellTime;
@property(nonatomic) unsigned long long activeDwellTime; // @synthesize activeDwellTime;
- (BOOL)setSSIDsWithOptionString:(id)arg1 error:(id *)arg2;
- (id)skeleton;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)init;
- (BOOL)startOnInterface:(id)arg1 error:(id *)arg2;

@end

