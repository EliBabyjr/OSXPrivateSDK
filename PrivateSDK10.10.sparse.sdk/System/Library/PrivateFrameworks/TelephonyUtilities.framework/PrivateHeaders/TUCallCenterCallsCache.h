/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSMutableSet, NSObject<OS_dispatch_semaphore>;

@interface TUCallCenterCallsCache : NSObject
{
    NSMapTable *_callRefToTelephonyCall;
    NSObject<OS_dispatch_semaphore> *_callRefToTelephonyCallSemaphore;
    NSMapTable *_chatGUIDToFaceTimeCall;
    NSObject<OS_dispatch_semaphore> *_chatGUIDToFaceTimeCallSemaphore;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    NSObject<OS_dispatch_semaphore> *_uniqueProxyIdentifierToProxyCallSemaphore;
    NSMutableSet *_currentCallSet;
}

@property(retain, nonatomic) NSMutableSet *currentCallSet; // @synthesize currentCallSet=_currentCallSet;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uniqueProxyIdentifierToProxyCallSemaphore; // @synthesize uniqueProxyIdentifierToProxyCallSemaphore=_uniqueProxyIdentifierToProxyCallSemaphore;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *chatGUIDToFaceTimeCallSemaphore; // @synthesize chatGUIDToFaceTimeCallSemaphore=_chatGUIDToFaceTimeCallSemaphore;
@property(retain, nonatomic) NSMapTable *chatGUIDToFaceTimeCall; // @synthesize chatGUIDToFaceTimeCall=_chatGUIDToFaceTimeCall;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *callRefToTelephonyCallSemaphore; // @synthesize callRefToTelephonyCallSemaphore=_callRefToTelephonyCallSemaphore;
@property(retain, nonatomic) NSMapTable *callRefToTelephonyCall; // @synthesize callRefToTelephonyCall=_callRefToTelephonyCall;
- (void)_updateCallWithPersistentValues:(id)arg1;
- (id)proxyCallForProxyCall:(id)arg1;
- (id)callForChat:(id)arg1 shouldSkipLoadingCallState:(BOOL)arg2;
- (id)callForChat:(id)arg1;
- (void)stopTrackingCall:(id)arg1;
- (void)dealloc;
- (id)init;

@end

