/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CDDXPCConnection, CDDebug, NSString;

@interface CDPClientConnection : NSObject
{
    BOOL _admissionOverride;
    BOOL _admissionResult;
    NSString *_clientName;
    CDDXPCConnection *_connection;
    CDDebug *_debug;
}

@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) CDDXPCConnection *connection; // @synthesize connection=_connection;
@property BOOL admissionResult; // @synthesize admissionResult=_admissionResult;
@property BOOL admissionOverride; // @synthesize admissionOverride=_admissionOverride;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (BOOL)admissionCheckAndStartedForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id *)arg4 replyHandler:(id)arg5;
- (BOOL)activitySignal:(id)arg1 error:(id *)arg2 replyHandler:(id)arg3;
- (BOOL)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id *)arg4 replyHandler:(id)arg5;
- (BOOL)triggerWithConditions:(id)arg1 error:(id *)arg2 replyHandler:(id)arg3;
- (BOOL)bootstrapWithError:(id *)arg1 replyHandler:(id)arg2;
- (BOOL)sendMessage:(long long)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id *)arg6 replyHandler:(id)arg7;
- (id)messageWithError:(id *)arg1;
- (id)initWithPluginName:(id)arg1 error:(id *)arg2;
- (id)init;

@end

