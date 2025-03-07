/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface HelpSDMIndex : NSObject
{
    NSMutableDictionary *indexData;
    NSMutableDictionary *attributes;
}

+ (id)HelpSDMIndexWithVersionedData:(id)arg1;
@property(readonly) NSMutableDictionary *indexData; // @synthesize indexData;
@property(copy) NSDictionary *attributes; // @synthesize attributes;
- (id)description;
- (BOOL)initWithArchivedDataDetail:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)numberOfKeys;
- (BOOL)containsToken:(id)arg1;
- (id)tokenCountsForKey:(id)arg1;
- (id)fileProperitesForKey:(id)arg1;
- (id)versionedData;
- (id)archivedData;
- (void)setObject:(id)arg1 forAttribute:(id)arg2;
- (void)setTokenCounts:(id)arg1 andProperties:(id)arg2 forKey:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithVersionedData:(id)arg1;

@end

