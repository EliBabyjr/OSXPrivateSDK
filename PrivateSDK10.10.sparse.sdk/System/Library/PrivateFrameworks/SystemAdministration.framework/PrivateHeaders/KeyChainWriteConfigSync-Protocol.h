/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol KeyChainWriteConfigSync

@optional
- (oneway void)storeSystemKeychainPassword:(id)arg1 account:(id)arg2 service:(id)arg3 authorization:(id)arg4 result:(id)arg5;
- (oneway void)storeKeyInSystemKeychain:(id)arg1 forUser:(id)arg2 serverURL:(id)arg3 description:(id)arg4 authorization:(id)arg5 result:(id)arg6;
@end

