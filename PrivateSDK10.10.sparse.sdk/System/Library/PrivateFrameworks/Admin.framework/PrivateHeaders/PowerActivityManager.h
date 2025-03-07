/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PowerActivityManager : NSObject
{
    NSArray *_powerProfiles;
    NSMutableDictionary *_powerPreferences;
    NSDictionary *_activePowerProfiles;
    NSDictionary *_upsShutdownLevels;
    struct IONotificationPort *_ioNotificationPort;
    unsigned int _ioNotifier;
}

+ (id)sharedPowerActivityManager;
- (double)ratingForPowerProfile:(long long)arg1 powerSource:(id)arg2;
- (void)setActivePowerProfiles:(id)arg1;
- (void)setUPSShutdownValue:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)upsShutdownValueForKey:(id)arg1;
- (void)setUPSShutdownEnabled:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)upsShutdownEnabledForKey:(id)arg1;
- (BOOL)upsSupportsShutdownKey:(id)arg1;
- (BOOL)hasUPS;
- (void)refreshUPSShutdownLevels;
- (id)upsActivityProfile;
- (void)scheduleRepeatingPowerEvent:(id)arg1;
- (void)cancelAllRepeatingPowerEvents;
- (id)repeatingPowerEvents;
- (void)setRestartsOnHang:(BOOL)arg1 for:(id)arg2;
- (void)setSleepUsesDim:(BOOL)arg1 for:(id)arg2;
- (void)setLowerDisplayBrightness:(BOOL)arg1 for:(id)arg2;
- (void)setDynamicPowerStep:(BOOL)arg1 for:(id)arg2;
- (void)setReducedCPUSpeed:(BOOL)arg1 for:(id)arg2;
- (void)setAutoRestarts:(BOOL)arg1 for:(id)arg2;
- (void)setWakesOnRing:(BOOL)arg1 for:(id)arg2;
- (void)setWakesOnLAN:(BOOL)arg1 for:(id)arg2;
- (void)setEnablePowerButtonSleep:(BOOL)arg1 for:(id)arg2;
- (void)setDarkWake:(BOOL)arg1 for:(id)arg2;
- (BOOL)restartsOnHang:(id)arg1;
- (BOOL)sleepUsesDimFor:(id)arg1;
- (BOOL)lowerDisplayBrightnessFor:(id)arg1;
- (BOOL)dynamicPowerStepFor:(id)arg1;
- (BOOL)reducedCPUSpeedFor:(id)arg1;
- (BOOL)autoRestartsFor:(id)arg1;
- (BOOL)wakesOnRingFor:(id)arg1;
- (BOOL)wakesOnLANFor:(id)arg1;
- (BOOL)enablePowerButtonSleepFor:(id)arg1;
- (BOOL)darkWakeFor:(id)arg1;
- (BOOL)supportsRestartOnHangFor:(id)arg1;
- (BOOL)supportsSleepUsesDimFor:(id)arg1;
- (BOOL)supportsLowerDisplayBrightnessFor:(id)arg1;
- (BOOL)supportsDynamicPowerStep:(id)arg1;
- (BOOL)supportsReducedCPUSpeedFor:(id)arg1;
- (BOOL)supportsAutoRestartFor:(id)arg1;
- (BOOL)supportsWakeOnRingFor:(id)arg1;
- (BOOL)supportsWakeOnLANFor:(id)arg1;
- (BOOL)supportsEnablePowerButtonSleepFor:(id)arg1;
- (BOOL)supportsDarkWakeFor:(id)arg1;
- (void)setMinutesUntilSystemSleeps:(unsigned long long)arg1 for:(id)arg2;
- (void)setMinutesUntilDiskSleeps:(unsigned long long)arg1 for:(id)arg2;
- (void)setMinutesUntilDisplaySleeps:(unsigned long long)arg1 for:(id)arg2;
- (unsigned long long)systemSleeps:(id)arg1;
- (unsigned long long)diskSleeps:(id)arg1;
- (unsigned long long)displaySleepsFor:(id)arg1;
- (BOOL)hasBattery;
- (void)updateProfilesAndSendNotification;
- (void)writeUPSSettings:(id)arg1 forKey:(id)arg2;
- (id)activityProfile;
- (void)_setValue:(id)arg1 forKey:(id)arg2 powerSource:(id)arg3;
- (id)_valueForKey:(id)arg1 powerSource:(id)arg2;
- (void)_refreshActivePowerProfiles;
- (id)_activePowerProfiles;
- (void)_refreshPowerProfiles;
- (id)_powerProfiles;
- (void)_refreshPowerPreferences;
- (id)_powerPreferences;
- (void)finalize;
- (void)dealloc;
- (void)unregisterPMFeatureChangedNotification;
- (void)registerPMFeatureChangedNotification;
- (id)init;

@end

