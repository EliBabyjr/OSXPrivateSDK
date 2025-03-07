/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CoreWiFiWakeOnWireless : NSObject
{
    BOOL isEnabled;
    BOOL willWakeOnMagicPattern;
    BOOL willWakeOnNetPattern;
    BOOL willWakeOnDisassociated;
    BOOL willWakeOnDeauthenticated;
    BOOL willWakeOnRetrogradeTsf;
    BOOL willWakeOnBeaconLoss;
    long long beaconLossTime;
    NSMutableArray *wakePatterns;
}

@property(retain, nonatomic) NSMutableArray *wakePatterns; // @synthesize wakePatterns;
@property(nonatomic) long long beaconLossTime; // @synthesize beaconLossTime;
@property(nonatomic) BOOL willWakeOnBeaconLoss; // @synthesize willWakeOnBeaconLoss;
@property(nonatomic) BOOL willWakeOnRetrogradeTsf; // @synthesize willWakeOnRetrogradeTsf;
@property(nonatomic) BOOL willWakeOnDeauthenticated; // @synthesize willWakeOnDeauthenticated;
@property(nonatomic) BOOL willWakeOnDisassociated; // @synthesize willWakeOnDisassociated;
@property(nonatomic) BOOL willWakeOnNetPattern; // @synthesize willWakeOnNetPattern;
@property(nonatomic) BOOL willWakeOnMagicPattern; // @synthesize willWakeOnMagicPattern;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled;
- (id)skeleton;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)init;

@end

