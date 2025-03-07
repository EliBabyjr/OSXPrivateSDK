/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVContainerSyncTaskGroup.h"

@class NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup
{
    id <CalDAVCalendar> _calendar;
    BOOL _getScheduleTags;
    BOOL _getScheduleChanges;
    BOOL _syncEvents;
    BOOL _syncTodos;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _fallbackOnMultiGetError;
    int _fetchingEtagState;
    NSDateComponents *_eventFilterStartDate;
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
    NSDateComponents *_todoFilterEndDate;
}

@property(nonatomic) BOOL fallbackOnMultiGetError; // @synthesize fallbackOnMultiGetError=_fallbackOnMultiGetError;
@property(retain, nonatomic) NSDateComponents *todoFilterEndDate; // @synthesize todoFilterEndDate=_todoFilterEndDate;
@property(retain, nonatomic) NSDateComponents *todoFilterStartDate; // @synthesize todoFilterStartDate=_todoFilterStartDate;
@property(retain, nonatomic) NSDateComponents *eventFilterEndDate; // @synthesize eventFilterEndDate=_eventFilterEndDate;
@property(retain, nonatomic) NSDateComponents *eventFilterStartDate; // @synthesize eventFilterStartDate=_eventFilterStartDate;
@property(nonatomic) BOOL supportsExtendedCalendarQuery; // @synthesize supportsExtendedCalendarQuery=_supportsExtendedCalendarQuery;
@property(nonatomic) BOOL syncTodos; // @synthesize syncTodos=_syncTodos;
@property(nonatomic) BOOL syncEvents; // @synthesize syncEvents=_syncEvents;
@property(nonatomic) BOOL getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;
@property(nonatomic) BOOL getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;
@property(retain, nonatomic) id <CalDAVCalendar> calendar; // @synthesize calendar=_calendar;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(BOOL)arg5 getScheduleChanges:(BOOL)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)dataContentType;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (BOOL)_shouldFetchTodosForState:(int)arg1;
- (BOOL)_shouldFetchEventsForState:(int)arg1;
- (BOOL)shouldFetchMoreETags;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;

@end

