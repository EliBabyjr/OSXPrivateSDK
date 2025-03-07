/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFMessageStore.h>

@class NSArray;

@interface MFRecoveredStore : MFMessageStore
{
    NSArray *_pathsToImport;
}

@property(readonly, copy, nonatomic) NSArray *pathsToImport; // @synthesize pathsToImport=_pathsToImport;
- (void).cxx_destruct;
- (id)messagesForImporter;
- (void)writeUpdatedMessageDataToDisk;
- (id)initWithAccount:(id)arg1;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (id)init;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 pathsToImport:(id)arg3;

@end

