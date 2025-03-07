/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MSResetServerProtocolDelegate-Protocol.h"

@class MSMediaStreamDaemon, MSResetServerProtocol, NSString;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate>
{
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    MSMediaStreamDaemon *_daemon;
    id _selfReference;
}

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void).cxx_destruct;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (void)resetServer;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

