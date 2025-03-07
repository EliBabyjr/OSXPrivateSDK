/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProViewModule.h"

@class BKModuleConnector, NSMutableDictionary;

@interface BKViewModule : NSProViewModule
{
    BKModuleConnector *_moduleConnector;
    double _insetLeft;
    double _insetRight;
    double _insetBottom;
    double _insetTop;
    void *_reservedViewModule1;
    void *_reservedViewModule2;
    void *_reservedViewModule3;
}

@property(retain) BKModuleConnector *moduleConnector; // @synthesize moduleConnector=_moduleConnector;
- (void)finalize;
- (void)dealloc;
@property BOOL updatesBlocked;
- (void)didUnloadConnections;
- (void)willUnloadConnections;
- (void)didLoadConnections;
- (void)willLoadConnections;
@property(readonly) NSMutableDictionary *contentStateDictionary;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)postLayout:(id)arg1;
- (id)windowTitle;
- (unsigned long long)borderType;
- (void)setBorderType:(unsigned long long)arg1;
- (void)insetLeft:(double)arg1 right:(double)arg2 bottom:(double)arg3 top:(double)arg4;
- (void)moduleConnectorStateUpdated;
- (void)updateModuleConnectorStateCacheIfNeeded;

@end

