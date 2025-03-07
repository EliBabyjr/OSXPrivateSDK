/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class ACAccountCredential, NSString;

@protocol MCPersistedAccount <NSObject>
@property(nonatomic) BOOL enabled;
@property(retain, nonatomic) ACAccountCredential *credential;
@property(nonatomic) BOOL allowInsecureAuthentication;
@property(copy, nonatomic) NSString *username;
@property(copy, nonatomic) NSString *canonicalEmailAddress;
@property(copy, nonatomic) NSString *accountDescription;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

