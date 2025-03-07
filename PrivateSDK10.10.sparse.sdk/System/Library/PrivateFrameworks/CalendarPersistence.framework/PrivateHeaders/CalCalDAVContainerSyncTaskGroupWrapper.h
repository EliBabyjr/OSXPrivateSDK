/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalCalDAVSynchronousTaskGroup.h>

#import "CalDAVChecksumLocalDBInfoProvider-Protocol.h"
#import "CoreDAVContainerInfoSyncProvider-Protocol.h"

@class CalDAVCalendarSource, CalManagedCalDAVCalendar, CalManagedCalDAVPrincipal, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface CalCalDAVContainerSyncTaskGroupWrapper : CalCalDAVSynchronousTaskGroup <CalDAVChecksumLocalDBInfoProvider, CoreDAVContainerInfoSyncProvider>
{
    CalManagedCalDAVPrincipal *_principal;
    CalManagedCalDAVCalendar *_calendar;
    CalDAVCalendarSource *_calendarSource;
    unsigned long long _numberOfResourcesAffected;
    BOOL _hasChanges;
    NSMutableSet *_resourcesNotDownloadedSuccessfully;
    NSMutableDictionary *_mismatches;
    NSMutableArray *_addedOrModifiedContainers;
    NSMutableArray *_removedURLs;
}

@property(retain, nonatomic) NSMutableArray *removedURLs; // @synthesize removedURLs=_removedURLs;
@property(retain, nonatomic) NSMutableArray *addedOrModifiedContainers; // @synthesize addedOrModifiedContainers=_addedOrModifiedContainers;
@property(retain) NSMutableDictionary *mismatches; // @synthesize mismatches=_mismatches;
@property(retain, nonatomic) CalDAVCalendarSource *calendarSource; // @synthesize calendarSource=_calendarSource;
@property(retain, nonatomic) CalManagedCalDAVCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) CalManagedCalDAVPrincipal *principal; // @synthesize principal=_principal;
@property(nonatomic) unsigned long long numberOfResourcesAffected; // @synthesize numberOfResourcesAffected=_numberOfResourcesAffected;
- (id)_messageTraceSignatureForServerURL:(id)arg1;
- (void)reportMismatchedChecksum:(id)arg1 forURL:(id)arg2 inFolderWithURL:(id)arg3 checksumVersion:(id)arg4 eTag:(id)arg5;
- (void)_messageTraceMismatch:(id)arg1;
- (void)reportMismatchedETag:(id)arg1 forURL:(id)arg2 inFolderWithURL:(id)arg3 cTag:(id)arg4 syncToken:(id)arg5 mismatchType:(int)arg6;
- (id)_stringForMismatchType:(int)arg1;
- (id)copyLocalChecksumsForFolderWithURL:(id)arg1 checksumVersion:(id)arg2;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (BOOL)setLocalETag:(id)arg1 forItemWithRelativeURI:(id)arg2 inFolderWithID:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;
- (id)etagObjectsForServerFilenames:(id)arg1;
- (id)etagObjects;
- (id)containerPath;
- (void)taskGroupFinishedWithError:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setCTag:(id)arg1;
- (void)processAddedOrModified:(id)arg1 removed:(id)arg2;
- (id)copyFileNamesFromPaths:(id)arg1;
- (id)copyCalDAVResourcesToCalCalDAVResources:(id)arg1;
@property(nonatomic) BOOL hasChanges; // @dynamic hasChanges;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 calendarSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

