/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class IMAccount, IMChat, NSArray, NSAttributedString, NSDate, NSString;

@interface SOCompletionResult : NSObject <NSCoding>
{
    NSAttributedString *_attributedDisplayID;
    NSAttributedString *_attributedDisplayName;
    IMAccount *_account;
    NSDate *_recentDate;
    NSString *_imHandleID;
    NSString *_personUniqueID;
    NSString *_name;
    NSArray *_groupMembersAsIMPeople;
    IMChat *_chat;
    unsigned long long _completionResultHash;
}

+ (void)initialize;
+ (void)_updateABPropertyToIMAccountMap;
+ (id)activeAddressBookProperties;
+ (id)completionResultsForName:(id)arg1 imHandleID:(id)arg2 personUniqueID:(id)arg3 addressBookProperty:(id)arg4;
+ (id)defaultAttributes;
@property unsigned long long completionResultHash; // @synthesize completionResultHash=_completionResultHash;
@property(readonly) IMChat *chat; // @synthesize chat=_chat;
@property(readonly, nonatomic) NSArray *groupMembersAsIMPeople; // @synthesize groupMembersAsIMPeople=_groupMembersAsIMPeople;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *personUniqueID; // @synthesize personUniqueID=_personUniqueID;
@property(readonly) NSString *imHandleID; // @synthesize imHandleID=_imHandleID;
@property(readonly) NSDate *recentDate; // @synthesize recentDate=_recentDate;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imHandleForceCreate:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly) IMAccount *account; // @synthesize account=_account;
@property(readonly) NSString *displayAccountName; // @dynamic displayAccountName;
@property(readonly) NSAttributedString *attributedCompletionString; // @dynamic attributedCompletionString;
@property(readonly) NSString *completionString; // @dynamic completionString;
@property(readonly, nonatomic) NSAttributedString *attributedDisplayName; // @synthesize attributedDisplayName=_attributedDisplayName;
@property(readonly) NSAttributedString *attributedDisplayID; // @synthesize attributedDisplayID=_attributedDisplayID;
@property(readonly) NSString *displayID; // @dynamic displayID;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithChat:(id)arg1;
- (id)initWithName:(id)arg1 imHandleID:(id)arg2 personUniqueID:(id)arg3 account:(id)arg4;
- (id)initWithID:(id)arg1 preferredAccount:(id)arg2;

@end

