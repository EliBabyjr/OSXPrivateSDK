/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject
{
    NSHashTable *_listeners;
    NSMutableArray *_supportedProtocols;
    BOOL _shouldQueue;
    NSMutableArray *_queuedEvents;
}

+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(BOOL)arg2;
+ (id)eventEmitterForProtocols:(id)arg1;
@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(nonatomic) BOOL shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (BOOL)listenerRegisteredForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (void)dealloc;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(BOOL)arg2;

@end

