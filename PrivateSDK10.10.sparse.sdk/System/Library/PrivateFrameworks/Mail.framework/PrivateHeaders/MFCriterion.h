/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface MFCriterion : NSObject
{
    BOOL _dateIsRelative;
    BOOL _allCriteriaMustBeSatisfied;
    BOOL _originatedFromSearchSuggestion;
    int _specialMailboxType;
    NSString *_name;
    NSString *_expression;
    NSString *_criterionIdentifier;
    long long _criterionType;
    long long _qualifier;
    long long _dateUnits;
    NSArray *_criteria;
    unsigned long long _knownLimit;
    NSString *_uniqueId;
}

+ (BOOL)criteria:(id)arg1 areEqualToCriteria:(id)arg2;
+ (id)stringForCriterionType:(long long)arg1;
+ (long long)criterionTypeForString:(id)arg1;
+ (id)queryScopePathForMailbox:(id)arg1;
+ (void)logSpotlightStatus;
+ (BOOL)logCriterionConversionErrors;
+ (void)setLogSpotlightCallbacks:(BOOL)arg1;
+ (BOOL)logSpotlightCallbacks;
+ (void)setLogSpotlightQueries:(BOOL)arg1;
+ (BOOL)logSpotlightQueries;
+ (BOOL)searchUsingOnlySpotlight;
+ (id)compoundCriterionWithCriteria:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)criteriaFromDefaultsArray:(id)arg1;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property BOOL originatedFromSearchSuggestion; // @synthesize originatedFromSearchSuggestion=_originatedFromSearchSuggestion;
@property unsigned long long knownLimit; // @synthesize knownLimit=_knownLimit;
@property int specialMailboxType; // @synthesize specialMailboxType=_specialMailboxType;
@property BOOL allCriteriaMustBeSatisfied; // @synthesize allCriteriaMustBeSatisfied=_allCriteriaMustBeSatisfied;
@property BOOL dateIsRelative; // @synthesize dateIsRelative=_dateIsRelative;
@property long long dateUnits; // @synthesize dateUnits=_dateUnits;
@property long long qualifier; // @synthesize qualifier=_qualifier;
@property(copy) NSString *expression; // @synthesize expression=_expression;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)smartMailboxesVersion;
- (long long)version;
- (BOOL)containsJunkMailboxCriterion;
- (BOOL)isEqualToCriterion:(id)arg1;
- (BOOL)isValid:(id *)arg1 options:(unsigned int)arg2;
- (id)description;
- (id)descriptionWithDepth:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *criteria; // @synthesize criteria=_criteria;
- (id)_simplifyOnce;
- (id)simplifiedCriterion;
- (id)stringForRuleQualifier:(long long)arg1;
- (long long)ruleQualifierForString:(id)arg1;
- (id)utiForMessageAttachmentType:(BOOL)arg1;
- (id)_searchTermForExpression:(id)arg1 withQualifer:(long long)arg2 exactMatch:(BOOL)arg3;
- (id)_comparisonOperatorForQualifier:(long long)arg1;
- (id)_spotlightQueryStringForCompoundCriterionWithInFlightURLs:(id)arg1;
- (id)_spotlightStringForHeaderQueryString:(id)arg1 withSpotlightAttribute:(id)arg2;
- (id)escapedString:(id)arg1;
- (id)_spotlightQueryStringForAnyRecipientCriterion;
- (id)_spotlightQueryStringForHeaderCriterion;
- (id)_spotlightQueryStringForContainsAttachmentsCriterion;
- (id)_spotlightQueryStringForAttachmentTypeCriterion;
- (id)_spotlightQueryStringForBodyCriterion;
- (id)_spotlightDateQueryStringForAttribute:(id)arg1;
- (id)_spotlightQueryStringForPriorityCriterion;
- (id)_spotlightQueryStringForFlagCriterion;
- (id)_spotlightQueryStringForFlaggedStatusCriterion;
- (id)_spotlightQueryStringForGroupOrVIPSendersCriterion;
- (id)_spotlightQueryStringForAnyAttachmentCriterion;
- (id)_spotlightQueryStringForAccountCriterion:(id)arg1;
- (id)_spotlightQueryStringForGmailLabelCriterion;
- (id)_spotlightQueryStringForMailboxCriterion:(id)arg1;
- (id)_spotlightQueryStringForNotInAJunkOrTrashMailboxCriterion;
- (id)_spotlightQueryStringForInASpecialMailboxCriterionWithQualifier:(long long)arg1 inFlightURLs:(id)arg2;
- (id)_spotlightQueryStringForMessageID;
- (id)spotlightQueryString;
- (id)_spotlightQueryStringWithInFlightURLs:(id)arg1;
- (BOOL)_isCompoundCriterionSpotlightCriterion;
- (BOOL)isSpotlightCriterion;
- (BOOL)_isSpotlightOnlyCriterion;
- (BOOL)containsVIPSendersCriterion;
- (BOOL)_containsVIPSendersCriterionWithInFlightURLs:(id)arg1;
- (BOOL)containsMailboxCriterion;
- (BOOL)containsWhereFromsCriterion;
- (BOOL)containsSpotlightOnlyCriterion;
- (BOOL)containsSpotlightCriterion;
- (id)_qualifierString;
@property(copy) NSString *criterionIdentifier; // @synthesize criterionIdentifier=_criterionIdentifier;
- (void)_setCriterionIdentifier:(id)arg1;
@property long long criterionType; // @synthesize criterionType=_criterionType;
- (BOOL)hasExpression;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (id)init;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (id)compoundCriterionBySplittingExpression;
- (id)convertToGmailLabelCriterionIfNeeded;
- (unsigned long long)bestBaseTable;
- (id)SQLExpressionWithTables:(unsigned long long *)arg1 baseTable:(unsigned long long)arg2;
- (id)criterionForSpotlight;
- (id)criterionForSQLIgnoringGmail;
- (id)criterionForSQL;
- (id)criterionValueForNotEqualRelativeDates:(long long *)arg1;
- (id)criterionExpressionForEqualRelativeDates:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;
- (BOOL)isExpressibleInTigerSchema;
- (id)SQLExpressionWithContext:(CDStruct_c53ccb4e *)arg1 depth:(unsigned long long)arg2 enclosingSmartMailboxes:(id)arg3;
- (BOOL)hasNumberCriterion;
- (id)criterionByMergingSpotlightCriteria;
- (id)fixOnceWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2;
- (id)criterionForSearchWithExpandedSmartMailboxes:(id)arg1 forSpotlight:(BOOL)arg2 convertingGmailCriteria:(BOOL)arg3;
- (id)targetSmartMailbox;

@end

