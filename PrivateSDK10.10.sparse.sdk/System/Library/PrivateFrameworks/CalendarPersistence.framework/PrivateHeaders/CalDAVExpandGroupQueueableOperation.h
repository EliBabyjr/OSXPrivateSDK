/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVPersistentQueueableOperation.h>

@class NSString;

@interface CalDAVExpandGroupQueueableOperation : CalDAVPersistentQueueableOperation
{
    NSString *_groupIdentifier;
}

@property(retain) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)readableDescription;
- (void)performOperation;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 forSession:(id)arg2;

@end

