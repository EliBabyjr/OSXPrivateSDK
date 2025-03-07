/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSApplication.h"

#import "SSInputEventSource-Protocol.h"

@class NSObject<SSInputEventConsumer>;

@interface SSApplication : NSApplication <SSInputEventSource>
{
    NSObject<SSInputEventConsumer> *mInputEventConsumer;
    unsigned long long mModifierFlags;
    unsigned long long savedGestureEventMask;
}

@property unsigned long long savedGestureEventMask; // @synthesize savedGestureEventMask;
- (id)lastUsedModifierFlags;
- (void)sendChangedModifierFlags:(unsigned long long)arg1;
- (void)sendGestureScrollEvent:(id)arg1;
- (void)ssSetInputEventConsumer:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)dealloc;
- (void)registerUserDefaults;
- (id)init;

@end

