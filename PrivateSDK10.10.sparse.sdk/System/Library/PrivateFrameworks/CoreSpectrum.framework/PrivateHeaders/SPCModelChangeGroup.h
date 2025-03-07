/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface SPCModelChangeGroup : NSObject
{
    id <SPCModelChangeObserver> _observer;
    NSMutableSet *_modelChangeStorage;
    NSSet *_modelChangeCache;
    NSMutableDictionary *_modelChangesByPath;
}

@property(retain) NSMutableDictionary *modelChangesByPath; // @synthesize modelChangesByPath=_modelChangesByPath;
@property(copy) NSSet *modelChangeCache; // @synthesize modelChangeCache=_modelChangeCache;
@property(retain) NSMutableSet *modelChangeStorage; // @synthesize modelChangeStorage=_modelChangeStorage;
@property id <SPCModelChangeObserver> observer; // @synthesize observer=_observer;
- (id)modelChangesForPath:(id)arg1;
- (id)changesForObject:(id)arg1;
- (BOOL)hasChangesForObject:(id)arg1;
- (id)changesForLogicalPath:(id)arg1;
- (void)addModelChangesFromSet:(id)arg1 forLogicalPath:(id)arg2;
@property(readonly) NSSet *modelChanges;
- (void)dealloc;
- (id)init;

@end

