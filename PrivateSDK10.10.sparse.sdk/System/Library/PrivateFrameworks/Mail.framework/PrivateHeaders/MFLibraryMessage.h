/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MCMessage.h"

#import "IMAPMessage-Protocol.h"
#import "IMAPPersistedMessage-Protocol.h"
#import "MCPersistentIDFetching-Protocol.h"

@class MFLibraryCalendarEvent, MFLibraryStore, NSString;

@interface MFLibraryMessage : MCMessage <IMAPMessage, IMAPPersistedMessage, MCPersistentIDFetching>
{
    long long _libraryID;
    MFLibraryStore *_dataSource;
    NSString *_remoteID;
    int _isCachingBodyAndHeaders;
    unsigned int _uid;
    CDStruct_07ba05d6 _remoteFlags;
    BOOL _hasSetCalendarEvent;
    BOOL _hasSetReferences;
    BOOL _isBeingChanged;
    BOOL _isCompacted;
    int _conversationPosition;
    unsigned int _options;
    long long _conversationID;
    long long _mailboxID;
    long long _originalMailboxID;
    unsigned long long _size;
}

+ (id)fetchedMessageWithRowID:(long long)arg1;
+ (id)messageWithPersistentID:(id)arg1;
+ (id)messageWithLibraryID:(long long)arg1;
+ (id)messageWithURL:(id)arg1;
+ (id)messagesWithURL:(id)arg1;
+ (id)_residentMessageForLibraryID:(long long)arg1;
+ (void)_removeMessageFromResidentMessagesWithLibraryID:(long long)arg1;
+ (id)_addMessageToResidentMessages:(id)arg1 overridingPreviousMessage:(BOOL)arg2;
+ (id)residentMessages;
+ (void)initialize;
@property BOOL isCompacted; // @synthesize isCompacted=_isCompacted;
@property unsigned int primitiveOptions; // @synthesize primitiveOptions=_options;
@property BOOL isBeingChanged; // @synthesize isBeingChanged=_isBeingChanged;
@property unsigned long long size; // @synthesize size=_size;
@property long long originalMailboxID; // @synthesize originalMailboxID=_originalMailboxID;
@property long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property int conversationPosition; // @synthesize conversationPosition=_conversationPosition;
@property long long conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)spotlightAttributesIncludingText:(BOOL)arg1;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;
- (id)_cachedMessageBodyData;
- (void)_cacheMessageBodyIfPossible:(id)arg1;
- (id)_cachedMessageBody;
- (void)_cacheHeaderDataIfPossible:(id)arg1;
- (id)_cachedHeaderData;
- (void)_cacheHeadersIfPossible:(id)arg1;
- (id)_cachedHeaders;
- (void)uncacheBodyAndHeader;
- (void)cacheBodyAndHeader;
- (void)appendData:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setAttachmentFilenames:(id)arg1;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (void)setRemoteID:(const char *)arg1 documentID:(id)arg2 flags:(long long)arg3 size:(unsigned long long)arg4 mailboxID:(long long)arg5 originalMailboxID:(long long)arg6 color:(char *)arg7 conversationID:(long long)arg8 conversationPosition:(int)arg9;
- (id)preferredEmailAddressToReplyWith;
- (id)account;
- (id)path;
- (id)_extendedDescriptionWithSubject:(BOOL)arg1;
- (id)extendedDescription;
@property(readonly, copy) NSString *description;
- (void)reload;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)_commitLater;
- (void)commit;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)setLibraryColor:(char *)arg1;
- (void)setColor:(id)arg1;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setFlags:(long long)arg1;
- (void)setMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (id)mailboxName;
@property BOOL hasTemporaryUid;
@property BOOL partsHaveBeenCached;
- (BOOL)isPartialMessageBodyAvailable;
- (BOOL)isMessageContentLocallyAvailable;
@property BOOL isPartial;
- (BOOL)loadOptionsSuffice:(unsigned int)arg1;
@property unsigned int options;
- (void)setUid:(unsigned int)arg1;
- (unsigned int)uid;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setIMAPFlags:(CDStruct_07ba05d6)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)remoteID;
- (void)setRemoteID:(id)arg1;
- (void)_setRemoteID:(id)arg1;
- (void)_updateUID;
- (id)mailbox;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)_unlockedMessageStore;
- (void)setMessageSize:(unsigned long long)arg1;
- (unsigned long long)messageSize;
- (id)inReplyToHeaderDigest;
- (id)messageIDHeaderDigest;
- (id)to;
- (BOOL)supportsSnippets;
- (id)sender;
- (id)subject;
@property(retain) MFLibraryCalendarEvent *calendarEvent;
- (void)setReferences:(id)arg1;
- (id)references;
- (BOOL)type;
- (id)originalMailboxURLString;
- (id)documentID;
- (long long)libraryID;
- (id)persistentID;
@property(readonly, nonatomic) BOOL persistentIDType;
- (id)messageID;
- (void)dealloc;
- (id)init;
- (id)initWithLibraryID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

