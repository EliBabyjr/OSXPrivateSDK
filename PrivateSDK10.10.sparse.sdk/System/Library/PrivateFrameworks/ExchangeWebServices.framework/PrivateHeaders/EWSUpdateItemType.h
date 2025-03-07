/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSUpdateItemType : EWSBaseRequestType
{
    EWSTargetFolderIdType *_SavedItemFolderId;
    NSArray *_ItemChanges;
    int _ConflictResolution;
    long long _MessageDisposition;
    int _SendMeetingInvitationsOrCancellations;
}

+ (id)definition;
@property(nonatomic) int SendMeetingInvitationsOrCancellations; // @synthesize SendMeetingInvitationsOrCancellations=_SendMeetingInvitationsOrCancellations;
@property(nonatomic) long long MessageDisposition; // @synthesize MessageDisposition=_MessageDisposition;
@property(nonatomic) int ConflictResolution; // @synthesize ConflictResolution=_ConflictResolution;
@property(copy, nonatomic) NSArray *ItemChanges; // @synthesize ItemChanges=_ItemChanges;
@property(retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId; // @synthesize SavedItemFolderId=_SavedItemFolderId;
- (void)dealloc;

@end

