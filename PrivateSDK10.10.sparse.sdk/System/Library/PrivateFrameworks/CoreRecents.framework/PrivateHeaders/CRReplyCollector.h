/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableDictionary.h"

@class NSConditionLock;

@interface CRReplyCollector : NSMutableDictionary
{
    NSConditionLock *_lock;
    NSMutableDictionary *_dictionary;
}

- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)lockWhenCondition:(unsigned long long)arg1 beforeDate:(id)arg2;
- (BOOL)tryLockWhenCondition:(long long)arg1;
- (BOOL)tryLock;
- (void)unlockWithCondition:(unsigned long long)arg1;
- (void)unlock;
- (void)lock;
- (unsigned long long)condition;
- (void)dealloc;
- (id)init;
- (id)initWithCondition:(unsigned long long)arg1;

@end

