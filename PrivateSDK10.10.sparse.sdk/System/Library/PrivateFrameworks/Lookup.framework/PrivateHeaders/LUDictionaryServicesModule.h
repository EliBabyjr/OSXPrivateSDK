/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Lookup/LUWebKitModule.h>

@class NSSet;

@interface LUDictionaryServicesModule : LUWebKitModule
{
    struct __DCSDictionary *_dictionary;
    BOOL _active;
    NSSet *_primaryLanguage;
    NSSet *_indexLanguages;
}

+ (id)dictionaryModulesFilteredForActive:(BOOL)arg1 andNetwork:(BOOL)arg2;
+ (id)inactiveLocalDictionaryModules;
+ (id)activeNetworkDictionaryModules;
+ (id)activeLocalDictionaryModules;
@property(retain) NSSet *indexLanguages; // @synthesize indexLanguages=_indexLanguages;
@property(retain) NSSet *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property struct __DCSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)moreDescription;
- (id)moreURL;
- (void)lookupSearchTerm;
- (id)moduleName;
- (BOOL)isCompact;
- (BOOL)searchesNetwork;
- (void)setSearchTerm:(id)arg1 language:(id)arg2 partOfSpeech:(id)arg3;
- (void)dealloc;
- (id)initWithDictionaryRef:(struct __DCSDictionary *)arg1 isActive:(BOOL)arg2;

@end

