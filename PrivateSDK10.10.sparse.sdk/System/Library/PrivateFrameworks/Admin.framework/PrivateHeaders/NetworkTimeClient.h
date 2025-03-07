/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NetworkTimeClient : NSObject
{
}

+ (id)sharedNetworkTimeClient;
- (BOOL)synchronizeNow;
- (void)restartAsync;
- (BOOL)isServing;
- (BOOL)isSyncing;
- (void)setLaunchAtStartup:(BOOL)arg1;
- (void)stopSyncing;
- (void)startSyncing;
- (void)restart;
- (void)stop;
- (void)start;
- (void)setServer:(id)arg1;
- (id)server;
- (id)servers;
- (void)setServers:(id)arg1;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef *)arg1;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef *)arg1;
- (void)_ntpSetEnabled:(unsigned char)arg1;
- (BOOL)isRunning;

@end

