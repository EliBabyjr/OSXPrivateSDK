/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EKProtocolCalendarSource-Protocol.h"

@class NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;

@interface CalVirtualSource : NSObject <EKProtocolCalendarSource>
{
    NSString *_typeString;
    NSString *_localizedTitle;
    int _displayOrder;
}

+ (id)propertiesUnavailableForPartialObjects;
@property(readonly, nonatomic) int displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly, retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
- (BOOL)isPropertyUnavailable:(id)arg1;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
- (BOOL)supportsEmailValidation;
- (BOOL)supportsTaskCalendarCreation;
@property(readonly, nonatomic) BOOL supportsSharingScheduling;
@property(readonly, nonatomic) BOOL supportsPrivateEvents;
@property(readonly, nonatomic) BOOL supportsManagedAttachments;
@property(readonly, nonatomic) BOOL supportsFreebusy;
@property(readonly, nonatomic) BOOL supportsAttendeeComments;
- (BOOL)supportsEventCalendarCreation;
@property(readonly, nonatomic) BOOL supportsDropBoxAttachments;
@property(readonly, nonatomic) NSSet *ownerAddresses;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
- (BOOL)isDelegate;
- (BOOL)isNew;
- (BOOL)isFrozen;
- (id)title;
@property(readonly, retain, nonatomic) NSString *providerIdentifier;
@property(readonly, retain, nonatomic) NSString *sourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTypeString:(id)arg1 displayOrder:(int)arg2 localizedTitle:(id)arg3;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic) NSString *dropBoxPathString;
@property(readonly, nonatomic) BOOL supportsUnbind;
@property(readonly, nonatomic) BOOL isWritable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

