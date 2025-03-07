/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SFUnlockProtocol <NSObject>
- (void)establishStashBagWithCompletionHandler:(id)arg1;
- (void)unlockEnabledWithDevice:(id)arg1 completionHandler:(id)arg2;
- (void)disableUnlockWithDevice:(id)arg1 completionHandler:(id)arg2;
- (void)enableUnlockWithDevice:(id)arg1 fromKey:(BOOL)arg2 withPasscode:(id)arg3 completionHandler:(id)arg4;
@end

