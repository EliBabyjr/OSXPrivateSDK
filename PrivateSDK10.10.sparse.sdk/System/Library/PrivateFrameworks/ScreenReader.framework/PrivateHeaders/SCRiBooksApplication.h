/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRApplication.h>

@class SCRElement;

// Not exported
@interface SCRiBooksApplication : SCRApplication
{
    SCRElement *_readAllElement;
    BOOL _registeredReadAllElementDestroyedNotification;
}

- (void)_checkFocusedElementForReadAll;
- (void)_safeCheckFocusedElementForReadAll;
- (void)_safeClearCurrentReadAllElement;
- (void)focusOut;
- (void)_keyboardFocusDidChange:(id)arg1;
- (void)_currentReadAllDestroyed:(id)arg1;
- (void)clearCurrentReadAllElement;
- (void)unregisterReadAllElement:(id)arg1;
- (void)registerReadAllElement:(id)arg1;
- (BOOL)isiBooksApplication;
- (void)dealloc;
- (void)applicationWillInvalidate;
- (id)initWithPSN:(struct ProcessSerialNumber)arg1 pid:(int)arg2 name:(id)arg3 bundleIdentifier:(id)arg4 bundleVersion:(id)arg5 url:(id)arg6;

@end

