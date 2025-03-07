/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MFEWSDeleteFolderRequestOperation : MFEWSRequestOperation <NSCoding>
{
    NSString *_folderIdString;
}

+ (Class)classForResponse;
@property(readonly, copy, nonatomic) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (void).cxx_destruct;
- (void)setupOfflineResponse;
- (id)prepareRequest;
- (BOOL)isFolderRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_ewsDeleteFolderRequestOperationCommonInitWithEWSFolderIdString:(id)arg1;
- (id)initWithEWSFolderIdString:(id)arg1 gateway:(id)arg2;

@end

