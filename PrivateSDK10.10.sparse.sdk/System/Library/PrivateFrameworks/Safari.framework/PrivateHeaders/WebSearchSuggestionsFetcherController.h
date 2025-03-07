/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebSearchSuggestionsFetcherDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, WBSCompletionQuery;

// Not exported
@interface WebSearchSuggestionsFetcherController : NSObject <WebSearchSuggestionsFetcherDelegate>
{
    struct WebSearchSuggestionsFetcherControllerClient *_client;
    NSMutableDictionary *_fetchersBySuggestionsURLTemplate;
    NSMutableSet *_suggestionsURLTemplates;
    WBSCompletionQuery *_completionQuery;
}

@property(retain, nonatomic) WBSCompletionQuery *completionQuery; // @synthesize completionQuery=_completionQuery;
- (void).cxx_destruct;
- (void)fetcher:(id)arg1 didReceiveSearchSuggestions:(id)arg2;
- (id)_fetcherForSuggestionsURLTemplate:(id)arg1;
- (void)clearFetchers;
- (BOOL)isFetching;
- (void)stopFetching;
- (void)startFetching;
- (void)clearSuggestionsURLTemplates;
- (void)addSuggestionsURLTemplate:(id)arg1;
- (id)initWithClient:(struct WebSearchSuggestionsFetcherControllerClient *)arg1;

@end

