/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NFNotesMigratorClient : NSObject
{
    id <NFMailAccountsImporterDelegate><NFNotesMigratorDelegate> _delegate;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property __weak id <NFMailAccountsImporterDelegate><NFNotesMigratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startService;
- (BOOL)sync_hasLocalNotes;
- (BOOL)sync_shouldMigrateLocalNotes;
- (void)async_shouldMigrateLocalNotes;
- (void)async_importMailAccounts;
- (void)migrateNotesToiCloudIfNecessary:(BOOL)arg1;
- (id)_newConnection;
- (void)_setAuditSessionOnMessage:(id)arg1;
- (void)_logGenericError:(id)arg1;
- (void)_handleMigratorFailure:(id)arg1;
- (void)_handleXPCErrorWithEvent:(id)arg1;
- (void)dealloc;

@end

