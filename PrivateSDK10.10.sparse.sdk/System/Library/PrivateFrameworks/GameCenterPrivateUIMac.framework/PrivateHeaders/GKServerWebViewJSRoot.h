/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKServerWebViewJSAccount, GKServerWebViewJSEnvironment, GKServerWebViewJSExternalAccounts, GKServerWebViewJSGame, WebScriptObject;

@interface GKServerWebViewJSRoot : NSObject
{
    id <GKServerWebViewJSRootDelegate> _delegate;
    GKServerWebViewJSEnvironment *_environment;
    GKServerWebViewJSAccount *_account;
    GKServerWebViewJSGame *_game;
    GKServerWebViewJSExternalAccounts *_externalAccounts;
    WebScriptObject *_navBar;
}

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
@property(readonly, nonatomic) GKServerWebViewJSExternalAccounts *externalAccounts; // @synthesize externalAccounts=_externalAccounts;
@property(readonly, nonatomic) GKServerWebViewJSGame *game; // @synthesize game=_game;
@property(readonly, nonatomic) GKServerWebViewJSAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) GKServerWebViewJSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) id <GKServerWebViewJSRootDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reauthenticate:(id)arg1;
- (void)saveFile:(id)arg1 suggestedFilename:(id)arg2 mimeType:(id)arg3;
- (void)alert:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 secondaryButton:(id)arg4;
@property(retain, nonatomic) WebScriptObject *navBar;
@property(readonly, nonatomic) int protocolVersion;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 authToken:(id)arg2 game:(id)arg3;

@end

