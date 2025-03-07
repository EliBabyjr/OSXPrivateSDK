/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSIndexSet, NSMapTable, NSMutableArray, NSString, SGTQueryGenius;

@interface SGTInput : NSObject
{
    NSString *inputString;
    BOOL _containsCJK;
    BOOL _containsCJKDirtyFlag;
    unsigned long long userTypedStringLength;
    NSArray *attributeNames;
    SGTQueryGenius *genius;
    id delegate;
    NSString *filterQueryString;
    NSIndexSet *validatedSuggestionScopes;
    id suggestersAreReadyBlock;
    void *evaluator;
    NSMapTable *suggesterStates;
    NSMutableArray *pendingSuggestions;
    unsigned long long pendingSuggesters;
    long long typingScope;
    BOOL valid;
    BOOL started;
    BOOL preparing;
    BOOL flushScheduled;
}

@property long long typingScope; // @synthesize typingScope;
@property(readonly) NSIndexSet *validatedSuggestionScopes; // @synthesize validatedSuggestionScopes;
@property(readonly) NSString *filterQueryString; // @synthesize filterQueryString;
@property(readonly, getter=isValid) BOOL valid; // @synthesize valid;
@property(readonly) NSArray *attributeNames; // @synthesize attributeNames;
@property(copy) id suggestersAreReadyBlock; // @synthesize suggestersAreReadyBlock;
@property id <SGTInputDelegate> delegate; // @synthesize delegate;
@property(readonly) unsigned long long userTypedStringLength; // @synthesize userTypedStringLength;
@property(readonly) NSString *inputString; // @synthesize inputString;
- (id)description;
- (id)infoForSuggester:(id)arg1;
- (id)rawSuggestionForCategory:(id)arg1;
@property(readonly) SGTQueryGenius *genius;
- (void)startSearchingWithSuggesters:(id)arg1;
- (void)invalidate;
- (void)suggesterDidFinish:(id)arg1;
- (void)suggester:(id)arg1 didFindSuggestions:(id)arg2;
- (void)suggesterDidStart:(id)arg1;
- (void)_postSuggestersAreReady;
- (void)suggesterWillStart:(id)arg1;
- (void)_flushSuggestions;
- (void)_scheduleFlush;
- (void)_unscheduleFlush;
- (void)_executeBlockOnMainThreadNotPreparing:(id)arg1;
- (void)_executeBlockOnMainThread:(id)arg1;
- (void)_performBlock:(id)arg1;
- (void)_performBlockOnMainThread:(id)arg1;
- (id)comparatorForValue:(id)arg1 attributeName:(id)arg2;
- (unsigned int)matchesValue:(id)arg1 withAttributeName:(id)arg2 minimumTokenLength:(unsigned long long)arg3;
- (unsigned int)matchesValue:(id)arg1 withAttributeName:(id)arg2;
@property(readonly) BOOL containsCJK;
- (void)setInputString:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithSuggestion:(id)arg1 filterQueryString:(id)arg2 validatedSuggestionScopes:(id)arg3 searchFieldUsesTokens:(BOOL)arg4;
- (void)finalize;
- (void)dealloc;

@end

