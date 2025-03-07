/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSUserDefaults.h"

@class NSURL;

@interface NSUserDefaults (MailAdditions)
- (void)_mf_setObject:(id)arg1 forKey:(id)arg2 version:(unsigned long long)arg3;
- (id)_mf_objectForKey:(id)arg1 version:(unsigned long long)arg2;
- (void)setDisplayName:(id)arg1 forFlagColor:(BOOL)arg2;
- (id)displayNameForFlagColor:(BOOL)arg1;
@property(nonatomic) BOOL autosaveWindows;
@property(readonly, nonatomic) double autoSaveStoreDelay;
@property(readonly, nonatomic) double autoSaveDelay;
@property(nonatomic) BOOL junkMailEvaluationAfterRules;
@property(nonatomic) long long junkMailBehavior;
@property(retain, nonatomic) NSURL *downloadDirectoryURL;
@end

