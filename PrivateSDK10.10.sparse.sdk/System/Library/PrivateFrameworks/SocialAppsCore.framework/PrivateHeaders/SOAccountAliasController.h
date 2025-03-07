/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAccount, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet;

@interface SOAccountAliasController : NSObject
{
    IMAccount *_account;
    NSMutableOrderedSet *_aliasSet;
    NSMutableArray *_aliasTimers;
    NSMutableDictionary *_aliasLookup;
}

+ (id)stringForAliasValidationFailure:(long long)arg1 aliasName:(id)arg2;
@property(retain) NSMutableDictionary *aliasLookup; // @synthesize aliasLookup=_aliasLookup;
@property(retain) NSMutableArray *aliasTimers; // @synthesize aliasTimers=_aliasTimers;
@property(retain) NSMutableOrderedSet *aliasSet; // @synthesize aliasSet=_aliasSet;
@property(readonly) __weak IMAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_validationTimerEnded:(id)arg1;
- (void)_removeTimerForAliasName:(id)arg1;
- (void)_addAliasTimer:(id)arg1 length:(double)arg2;
- (void)confirmNewAlias:(id)arg1;
- (void)_clearTimers;
- (void)configureAliasState:(id)arg1;
- (void)_removeAliasesFromSet:(id)arg1;
- (void)_removeAliasFromSet:(id)arg1;
- (void)_addAliasesToSet:(id)arg1;
- (void)_addAliasToSet:(id)arg1;
- (void)_initializeAliases;
- (void)_stopListeningToNotifications;
- (void)_listenToNotifications;
- (void)_vettedAliasesChanged:(id)arg1;
- (void)_aliasValidationChanged:(id)arg1;
- (void)_aliasesChanged:(id)arg1;
- (void)deleteAlias:(id)arg1;
- (void)deactivateAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)addAliasesWithNames:(id)arg1;
- (BOOL)addAliasWithName:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)removeAliasesWithNames:(id)arg1;
- (void)removeAliasWithName:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)aliasForName:(id)arg1;
- (long long)activeAliasCount;
- (id)activeAliases;
- (long long)vettedAliasCount;
- (id)vettedAliases;
- (id)aliases;
- (long long)validationErrorReasonForAlias:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

@end

