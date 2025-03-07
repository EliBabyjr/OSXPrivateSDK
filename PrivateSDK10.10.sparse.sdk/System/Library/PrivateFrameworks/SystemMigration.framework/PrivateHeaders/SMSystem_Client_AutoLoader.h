/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMSystem_Client.h>

@class NSImage, NSNumber, NSOrderedSet, NSString;

@interface SMSystem_Client_AutoLoader : SMSystem_Client
{
    BOOL connected;
    NSString *model;
    NSImage *icon;
    NSNumber *passcode;
    NSOrderedSet *_fasterInterfaceRecommendations;
}

+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendation;
+ (id)guiMonitorKeys;
+ (void)initialize;
@property(retain) NSOrderedSet *fasterInterfaceRecommendations; // @synthesize fasterInterfaceRecommendations=_fasterInterfaceRecommendations;
@property BOOL connected; // @synthesize connected;
@property(retain) NSNumber *passcode; // @synthesize passcode;
@property(retain) NSImage *icon; // @synthesize icon;
@property(readonly) NSString *model; // @synthesize model;
- (void).cxx_destruct;
@property(readonly) NSString *fasterInterfaceRecommendation;
- (BOOL)isMounted;
- (id)volumeIconAccesibilityLabel;
- (id)displayName;
- (id)displayState;
- (long long)defaultUIRank;

@end

