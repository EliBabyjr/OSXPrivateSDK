/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IMService : NSObject
{
}

+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (unsigned long long)statusForABPerson:(id)arg1;
+ (unsigned long long)statusForIMPerson:(id)arg1;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)myIdleTime;
+ (unsigned long long)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)smsService;
+ (id)iMessageService;
+ (id)facetimeService;
+ (id)callService;
+ (id)jabberService;
+ (id)subnetService;
+ (id)aimService;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (unsigned long long)status;
- (id)name;
- (id)localizedShortName;
- (id)localizedName;
- (BOOL)initialSyncPerformed;
- (void)logout;
- (void)login;
- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)infoForDisplayedPeople;
- (id)infoForAllPeople;
- (id)infoForPerson:(id)arg1;

@end

