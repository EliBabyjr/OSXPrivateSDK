/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FMFUserNotification : NSObject
{
}

+ (void)showGenericErrorAlert;
+ (void)show5XXDuringStopOfferAlert;
+ (void)show5XXDuringStartOfferAlert;
+ (void)showNetworkOfflineDuringStopOfferAlert;
+ (void)showNetworkOfflineDuringOfferAlert;
+ (void)upselliCloudAlert;
+ (void)notLoggedIntoiCloudAlert;
+ (void)showForbiddenRegionAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showMaxFollowersLimitReachedAlert;
+ (void)showRestrictedAlert;
+ (void)showActiveDeviceChangedAlert;
+ (BOOL)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;
+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;
+ (BOOL)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1;
+ (BOOL)shouldDisplayAlerts;

@end

