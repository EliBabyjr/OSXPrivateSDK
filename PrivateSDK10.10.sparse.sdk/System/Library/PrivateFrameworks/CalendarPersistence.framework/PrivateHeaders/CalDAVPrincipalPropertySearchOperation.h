/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVSession, NSArray, NSMutableArray, NSSet;

@interface CalDAVPrincipalPropertySearchOperation : CalSingleSynchronousTask
{
    CalDAVSession *_session;
    NSSet *_searchStrings;
    NSMutableArray *_results;
    NSSet *_searchTypes;
    id delegate;
    BOOL _isRunning;
    BOOL _attendeeMultipleStringPrefixSearch;
}

+ (void)submitSearchForPrincipal:(id)arg1 forStrings:(id)arg2 ofType:(id)arg3 withReply:(id)arg4;
@property(readonly) NSArray *results; // @synthesize results=_results;
- (void)processCompletedRequest:(id)arg1;
- (void)performSynchronousSearch;
- (void)dealloc;
- (id)initWithSession:(id)arg1 forStrings:(id)arg2 ofTypes:(id)arg3;
- (id)managedPrincipal;

@end

