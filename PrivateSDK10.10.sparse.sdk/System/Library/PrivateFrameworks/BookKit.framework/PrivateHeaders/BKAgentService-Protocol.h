/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol BKAgentService <NSObject>
- (void)shutdownService:(id)arg1;
- (void)chooseLibrary:(id)arg1 withToken:(id)arg2 results:(id)arg3;
- (void)moveLibrary:(id)arg1 withToken:(id)arg2 results:(id)arg3;
- (void)reconnectToLibrary:(id)arg1;
- (void)rebuildLibrary:(id)arg1;
- (void)applyPendingUpdates:(id)arg1 results:(id)arg2;
- (void)removeRedactedBook:(id)arg1 withReply:(id)arg2;
- (void)fetchRedactedBooks:(id)arg1;
- (void)redactBook:(id)arg1 withReply:(id)arg2;
- (void)examineBook:(id)arg1 withToken:(id)arg2 results:(id)arg3;
- (void)uncompressBook:(id)arg1 results:(id)arg2;
- (void)migrateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(id)arg4;
- (void)prioritizeImport:(id)arg1 results:(id)arg2;
- (void)trashBook:(id)arg1 results:(id)arg2;
- (void)removeBook:(id)arg1 results:(id)arg2;
- (void)updateBook:(id)arg1 withToken:(id)arg2 withMetadata:(id)arg3 results:(id)arg4;
- (void)importBook:(id)arg1 withToken:(id)arg2 results:(id)arg3;
- (void)fetchImportingBooks:(id)arg1;
- (void)fetchBooks:(id)arg1;
- (void)fetchBookLibraryTokens:(id)arg1;
@end

