/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDBackingAccount.h>

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface CKDBackingFakeAccount : CKDBackingAccount
{
    NSString *_dsid;
    NSString *_identifier;
    NSString *_primaryEmail;
    NSString *_password;
    NSDictionary *_accountBag;
    NSObject<OS_dispatch_queue> *_fakeAccountInfoQueue;
}

+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (Class)_platformBackingAccountClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fakeAccountInfoQueue; // @synthesize fakeAccountInfoQueue=_fakeAccountInfoQueue;
@property(retain, nonatomic) NSDictionary *accountBag; // @synthesize accountBag=_accountBag;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (void)renewAuthTokenInStore:(id)arg1 withCompletionHandler:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (BOOL)allowsCellularAccess;
- (BOOL)isFakeAccount;
- (BOOL)cloudPhotosIsEnabled;
- (BOOL)cloudKitIsEnabled;
- (id)iCloudAuthToken;
- (id)cloudKitAuthToken;
- (id)ckAccount;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2;

@end

