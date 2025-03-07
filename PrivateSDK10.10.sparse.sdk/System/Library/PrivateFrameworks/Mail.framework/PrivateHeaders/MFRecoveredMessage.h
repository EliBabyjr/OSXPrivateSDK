/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MCMessage.h"

@class MCMessageHeaders, MCMimeBody, NSArray, NSData, NSString;

@interface MFRecoveredMessage : MCMessage
{
    MCMessageHeaders *_headers;
    CDStruct_07ba05d6 _remoteFlags;
    NSData *_bodyData;
    NSData *_allData;
    MCMimeBody *_messageBody;
    BOOL _loadedFileData;
    NSString *_path;
    NSString *_remoteID;
    NSString *_remoteMailboxURL;
    NSString *_originalMailboxURL;
    NSArray *_gmailLabelIDs;
}

+ (id)spotlightAttributesForBodyData:(id)arg1 plistData:(id)arg2;
@property(nonatomic) BOOL loadedFileData; // @synthesize loadedFileData=_loadedFileData;
@property(copy, nonatomic) NSArray *gmailLabelIDs; // @synthesize gmailLabelIDs=_gmailLabelIDs;
@property(copy, nonatomic) NSString *originalMailboxURL; // @synthesize originalMailboxURL=_originalMailboxURL;
@property(copy, nonatomic) NSString *remoteMailboxURL; // @synthesize remoteMailboxURL=_remoteMailboxURL;
@property(copy, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)spotlightAttributesIncludingText:(BOOL)arg1;
- (id)description;
- (BOOL)setMessageID:(long long)arg1 directory:(id)arg2;
- (void)flushCachedData;
- (CDStruct_76a5ddda)moreMessageFlags;
- (unsigned int)messageFlags;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)mailbox;
- (id)account;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyForIndexing;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)headersIfAvailable;
- (id)headers;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)originalMailboxURLString;
- (id)remoteMailboxURLString;
- (id)messageID;
- (void)_parseBodyDataWithPList:(id)arg1;
- (void)_parseFileData:(id)arg1;
- (void)_loadFileDataIfNeeded;
- (id)_extendedAttributes;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)_initWithBodyData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

