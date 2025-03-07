/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, NSString, NSURL, SGTCategory, SGTQueryGenius;

// Not exported
@interface SGTSuggestionReserved : NSObject
{
    NSString *originalTypedString;
    NSString *rawQueryString;
    NSString *additionalRawQuery;
    NSString *displayName;
    NSString *uniquifierString;
    NSArray *attributeNames;
    NSDictionary *additionalAttributes;
    NSArray *suggestionValues;
    id representedObject;
    SGTQueryGenius *genius;
    long long scope;
    SGTCategory *category;
    NSURL *spotlightScope;
    BOOL additionalRawQueryIsOr;
    BOOL isExactMatch;
    BOOL showsUniquifier;
    BOOL useDefaultScope;
    BOOL intermediateResult;
    BOOL forceLastPosition;
    BOOL enforceStrictMatch;
    NSIndexSet *titleHighlights;
    NSIndexSet *uniquifierHighlights;
    NSString *inputString;
    double score;
    BOOL lastWordMatched;
    unsigned long long alignmentScore;
}

- (void)dealloc;

@end

