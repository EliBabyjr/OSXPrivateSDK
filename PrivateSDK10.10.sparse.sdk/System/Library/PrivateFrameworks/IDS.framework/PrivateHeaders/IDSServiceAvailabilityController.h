/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary *_availabilityHandlers;
}

+ (id)sharedInstance;
- (long long)availabilityForListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)addListenerID:(id)arg1 forService:(id)arg2;
- (BOOL)hasListenerID:(id)arg1 forService:(id)arg2;
- (id)containerForService:(id)arg1 create:(BOOL)arg2;
- (void)_stopListeningToMonitor:(id)arg1;
- (void)_startListeningToMonitor:(id)arg1;
- (void)_handleServiceMonitorNotification:(id)arg1;
- (void)_postNotificationForService:(id)arg1 availability:(long long)arg2;
- (BOOL)_isValidServiceType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

