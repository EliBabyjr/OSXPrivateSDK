/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccountType;

@interface ACAccountsHelper : NSObject
{
    ACAccountType *_type;
}

+ (id)storeQueue;
+ (id)store;
- (void).cxx_destruct;
- (id)type;
- (id)makeAnAccount;
- (id)accountWithUID:(id)arg1;
- (id)accountWithUsername:(id)arg1;
- (id)storedAccounts;
- (BOOL)requestAccess;
- (BOOL)verifyAccount:(id)arg1 error:(id *)arg2;
- (BOOL)removeAccount:(id)arg1 error:(id *)arg2;
- (BOOL)saveAccount:(id)arg1 verifyCredential:(BOOL)arg2 error:(id *)arg3;
- (id)initWithACType:(id)arg1;

@end

