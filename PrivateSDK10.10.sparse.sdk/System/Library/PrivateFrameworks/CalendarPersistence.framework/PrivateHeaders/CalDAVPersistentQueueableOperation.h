/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class NSManagedObjectID;

@interface CalDAVPersistentQueueableOperation : CalDAVQueueableOperation
{
    NSManagedObjectID *_changeRequestID;
    long long _sequenceNumber;
}

- (id)extraUserInfoForRebuiltError;
- (void)configureOperationDependencies;
- (void)enqueue;
- (void)removeOperationFromPersistence;
- (id)associatedChangeRequestInContext:(id)arg1;
- (id)changeRequest;
- (id)changeRequestID;
- (long long)sequenceNumber;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 andSession:(id)arg2;

@end

