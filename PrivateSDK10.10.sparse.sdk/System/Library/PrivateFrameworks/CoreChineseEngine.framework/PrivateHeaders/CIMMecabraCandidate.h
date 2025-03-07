/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreChineseEngine/CIMCandidate.h>

@class NSArray;

@interface CIMMecabraCandidate : CIMCandidate
{
    void *_mecabraCandidate;
    BOOL _compositionCandidate;
}

@property(getter=isCompositionCandidate) BOOL compositionCandidate; // @synthesize compositionCandidate=_compositionCandidate;
@property(readonly) void *mecabraCandidate; // @synthesize mecabraCandidate=_mecabraCandidate;
@property(readonly) NSArray *segmentedSurface;
@property(readonly) NSArray *segmentedReading;
- (BOOL)isPredictionCandidate;
- (BOOL)isCompletionCandidate;
- (BOOL)isEmojiCandidate;
- (BOOL)isLearningDictionaryCandidate;
- (BOOL)isUserWordCandidate;
- (BOOL)isExtensionCandidate;
- (id)displayReading;
- (id)description;
- (void)dealloc;
- (id)initWithMecabraCandidate:(void *)arg1;

@end

