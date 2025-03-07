/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "EKProtocolObject-Protocol.h"

@class NSSet, NSString, NSURL;

@protocol EKProtocolCalendar <EKProtocolObject>
@property(readonly, nonatomic) NSSet *defaultAlarmsForAllDayEvents;
@property(readonly, nonatomic) NSSet *defaultAlarmsForTimedEvents;
@property(readonly, copy, nonatomic) NSURL *publishURL;
@property(readonly, nonatomic) NSURL *prePublishURL;
@property(readonly, nonatomic) BOOL defaultOrganizerIsMeForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerEmailForNewItems;
@property(readonly, nonatomic) NSURL *defaultOrganizerAddressForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerNameForNewItems;
@property(readonly, nonatomic) NSSet *sharedOwnerAddresses;
@property(readonly, nonatomic) NSString *sharedOwnerAddress;
@property(readonly, nonatomic) BOOL isDistinguishedExchangeCalendar;
@property(readonly, nonatomic) BOOL isDefaultSchedulingCalendar;
@property(readonly, nonatomic) NSString *sharedOwnerName;
@property(readonly, nonatomic) NSString *sharingStatusString;
@property(readonly, copy, nonatomic) NSString *notes;
@property(readonly, nonatomic) NSString *serverPath;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) BOOL isSubscribedHolidayCalendar;
@property(readonly, nonatomic) BOOL allowsScheduling;
@property(readonly, nonatomic) BOOL isShareable;
@property(readonly, nonatomic) BOOL isColorEditable;
@property(readonly, nonatomic) BOOL isRenameable;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) BOOL isFacebookBirthdayCalendar;
@property(readonly, nonatomic) BOOL cachedHasSharees;
@property(readonly) BOOL isMarkedImmutableSharees;
@property(readonly) BOOL isMarkedUndeletable;
@property(readonly, nonatomic) BOOL isFamilyCalendar;
@property(readonly, nonatomic) BOOL ignoreAlarms;
@property(readonly, copy, nonatomic) id <EKProtocolCalendarSource> containerSource;
@property(readonly, nonatomic) BOOL allowEvents;
@property(readonly, nonatomic) BOOL allowReminders;
@property(readonly, nonatomic) BOOL allowsContentModifications;
@property(readonly, copy, nonatomic) NSString *symbolicColorName;
@property(readonly, copy, nonatomic) NSString *colorString;
@property(readonly, nonatomic) NSString *calendarIdentifier;
- (BOOL)suppressEventSchedulingNotifications;
- (id)sharees;
- (id)color;
- (int)displayOrder;
- (id)title;
@end

