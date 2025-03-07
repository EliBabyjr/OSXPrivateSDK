/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebInspector/RWITarget.h>

@interface RWIMachine : RWITarget
{
    BOOL _currentMachine;
}

@property(readonly, nonatomic, getter=isCurrentMachine) BOOL currentMachine; // @synthesize currentMachine=_currentMachine;
- (void)setMachineName:(id)arg1 buildVersion:(id)arg2 productVersion:(id)arg3;
- (BOOL)isMachine;
- (BOOL)isReady;
- (BOOL)hadConnectionError;
- (id)initWithName:(id)arg1 udid:(id)arg2 currentMachine:(BOOL)arg3 manager:(id)arg4;

@end

