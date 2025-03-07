/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCMimeBody, MCParsedMessage, NSDictionary, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument : NSObject
{
    NSMutableDictionary *_attachmentsByURL;
    id _mimePartsByURLLock;
    NSDictionary *_mimePartsByURL;
    NSMutableDictionary *_headerAttachmentsByURL;
    BOOL _containsRemoteContent;
    BOOL _messageIsFromMicrosoft;
    BOOL _collapseQuotedBlocks;
    BOOL _shouldDownloadRemoteURLs;
    int _uniqueIdentifier;
    NSURL *_baseURL;
    MCParsedMessage *_parsedMessage;
    MCMimeBody *_mimeBody;
}

+ (void)documentWillClose:(id)arg1;
+ (id)documentWithUniqueIdentifier:(int)arg1;
+ (void)document:(id *)arg1 attachment:(id *)arg2 forURL:(id)arg3;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 mimePart:(id *)arg3 forURL:(id)arg4;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 forURL:(id)arg3;
+ (id)invalidBaseURL;
+ (id)openDocuments;
+ (void)initialize;
@property(readonly, nonatomic) MCMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property(readonly, nonatomic) MCParsedMessage *parsedMessage; // @synthesize parsedMessage=_parsedMessage;
@property(readonly, nonatomic) int uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) BOOL shouldDownloadRemoteURLs; // @synthesize shouldDownloadRemoteURLs=_shouldDownloadRemoteURLs;
@property(nonatomic) BOOL collapseQuotedBlocks; // @synthesize collapseQuotedBlocks=_collapseQuotedBlocks;
@property(nonatomic) BOOL messageIsFromMicrosoft; // @synthesize messageIsFromMicrosoft=_messageIsFromMicrosoft;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (BOOL)containsRemoteContent;
- (void)setContainsRemoteContent:(BOOL)arg1;
- (id)parsedMessageFromRange:(id)arg1;
- (void)removeNonHeaderAttachmentForURL:(id)arg1;
- (void)removeAttachmentsForURLs:(id)arg1;
- (void)clearAttachmentsByURL;
- (id)attachmentsByURL;
- (id)attachments;
- (BOOL)hasAttachments;
- (id)userAttachments;
- (BOOL)hasAttachmentViewController:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachmentForURL:(id)arg1;
- (void)addAttachments:(id)arg1;
- (void)addAttachment:(id)arg1 forURLString:(id)arg2;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
- (void)addAttachment:(id)arg1 forURL:(id)arg2 inHeaderView:(BOOL)arg3;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentForURL:(id)arg1 inHeaderView:(BOOL)arg2;
- (id)mimePartForURL:(id)arg1;
- (id)init;
- (id)initForDisplay:(BOOL)arg1;
- (id)initWithMimeBody:(id)arg1 forDisplay:(BOOL)arg2;

@end

