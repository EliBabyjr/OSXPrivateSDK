/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedObject.h>

#import "EKProtocolStructuredLocation-Protocol.h"

@class CalManagedAlarm, CalManagedEvent, NSDictionary, NSManagedObjectID, NSNumber, NSString;

@interface CalManagedLocation : CalManagedObject <EKProtocolStructuredLocation>
{
}

+ (void)adjustStructuredLocation:(id)arg1 withNewLocation:(id)arg2 createdLocationHandler:(id)arg3 managedObjectContext:(void)arg4;
+ (id)entityName;
- (void)updateWithProtocolStructuredLocation:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *radiusNumber;
- (id)enclosingSource;
- (void)awakeFromInsert;
- (id)_ICSStructuredLocation;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4;
- (void)_importiCalendarStructuredLocation:(id)arg1;
- (void)updateWithLocation:(id)arg1;
- (void)setValuesFromDataString:(id)arg1;
- (id)dataString;
- (id)_calLocation;

// Remaining properties
@property(retain) NSString *abURLString; // @dynamic abURLString;
@property(retain) NSString *address; // @dynamic address;
@property(retain) CalManagedAlarm *alarm; // @dynamic alarm;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain) NSString *displayName; // @dynamic displayName;
@property(retain) CalManagedEvent *eventForLocation; // @dynamic eventForLocation;
@property(retain) CalManagedEvent *eventForStartLocation; // @dynamic eventForStartLocation;
@property(retain) NSString *geoURLString; // @dynamic geoURLString;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property double radius; // @dynamic radius;
@property(retain) NSString *routeType; // @dynamic routeType;
@property(readonly) Class superclass;
@property(retain) NSString *title; // @dynamic title;
@property(retain) NSString *uuid; // @dynamic uuid;

@end

