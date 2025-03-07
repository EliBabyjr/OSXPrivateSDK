/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AdminAuthenticator, SFAuthorization;

@interface MBAuthenticator : NSObject
{
    AdminAuthenticator *_authenticator;
    BOOL _adminAuthPending;
    SFAuthorization *_auth;
}

+ (id)sharedAuthenticator;
- (BOOL)waitForAuthenticationToComplete;
- (BOOL)authorizationPending;
- (struct AuthorizationOpaqueRef *)authorizationRef;
- (void)authenticationCompleted:(id)arg1;
- (BOOL)start;
- (id)init;

@end

