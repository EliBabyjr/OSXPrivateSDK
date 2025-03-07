/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, WBSURLSuffixChecker;

// Not exported
@interface SearchProvider : NSObject <NSSecureCoding>
{
    NSString *_localizableName;
    NSString *_searchURLTemplate;
    NSString *_safeSearchURLTemplate;
    NSDictionary *_safeSearchURLQueryParameters;
    NSArray *_hostSuffixes;
    NSArray *_pathPrefixes;
    BOOL _usesSearchTermsFromFragment;
    NSString *_queryKey;
    NSMutableSet *_homepageURLs;
    BOOL _usesSecureSearchURL;
    WBSURLSuffixChecker *_hostSuffixChecker;
    NSString *_shortName;
    NSString *_scriptingName;
    NSString *_identifier;
    NSString *_parsecSearchIdentifier;
    NSString *_parsecSearchSuggestionIdentifier;
    NSString *_suggestionsURLTemplate;
}

+ (id)suggestionsURLWithTemplateString:(id)arg1 query:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *suggestionsURLTemplate; // @synthesize suggestionsURLTemplate=_suggestionsURLTemplate;
@property(copy, nonatomic) NSString *parsecSearchSuggestionIdentifier; // @synthesize parsecSearchSuggestionIdentifier=_parsecSearchSuggestionIdentifier;
@property(copy, nonatomic) NSString *parsecSearchIdentifier; // @synthesize parsecSearchIdentifier=_parsecSearchIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *scriptingName; // @synthesize scriptingName=_scriptingName;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (id)userVisibleQueryFromSearchURL:(id)arg1;
- (id)suggestionsURLForUserTypedString:(id)arg1;
- (id)searchURLForUserTypedString:(id)arg1;
- (BOOL)urlIsValidSearch:(id)arg1;
- (BOOL)urlIsHomepage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)safeSearchURLForSearchURL:(id)arg1;
- (id)initWithIdentifier:(id)arg1 shortName:(id)arg2 localizableName:(id)arg3 scriptingName:(id)arg4 searchURLTemplate:(id)arg5 safeSearchURLTemplate:(id)arg6 safeSearchURLQueryParameters:(id)arg7 suggestionsURLTemplate:(id)arg8 homepageURLs:(id)arg9 hostSuffixes:(id)arg10 pathPrefixes:(id)arg11 usesSearchTermsFromFragment:(BOOL)arg12;

@end

