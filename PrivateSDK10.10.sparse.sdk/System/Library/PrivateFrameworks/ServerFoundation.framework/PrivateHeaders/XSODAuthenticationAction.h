/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ServerFoundation/XSAction.h>

@class NSString, ODSession;

@interface XSODAuthenticationAction : XSAction
{
    ODSession *_session;
    BOOL _authenticateLocally;
    NSString *_server;
    NSString *_userName;
    NSString *_password;
}

+ (id)actionWithServer:(id)arg1 userName:(id)arg2 password:(id)arg3;
+ (id)actionToAuthenticateLocally;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(retain) NSString *server; // @synthesize server=_server;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) ODSession *session; // @synthesize session=_session;
@property BOOL authenticateLocally; // @synthesize authenticateLocally=_authenticateLocally;
- (id)responseDescription;
- (id)requestDescription;
- (id)title;
- (void)stopExecution;
- (void)startExecution;
- (void)dealloc;
- (id)initWithServer:(id)arg1 userName:(id)arg2 password:(id)arg3;

@end

