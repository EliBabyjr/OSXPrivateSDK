/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMapTable, NSMutableArray;

@interface BKBrowserManager : NSObject
{
    NSMutableArray *_browsers;
    NSMapTable *_perProviderDelegates;
    void *_browserManagerReserved1;
    void *_browserManagerReserved2;
    void *_browserManagerReserved3;
}

+ (void)updateConfigurationWith:(id)arg1;
+ (id)sharedBrowserManager;
- (void)dealloc;
- (id)init;
- (BOOL)hasDelegates;
- (id)delegateForProviderClass:(Class)arg1;
- (void)removeDelegateForProviderClass:(Class)arg1;
- (void)setDelegate:(id)arg1 forProviderClass:(Class)arg2;
@property(readonly) NSArray *browsers; // @synthesize browsers=_browsers;
- (void)removeBrowser:(id)arg1;
- (void)addBrowser:(id)arg1;

@end

