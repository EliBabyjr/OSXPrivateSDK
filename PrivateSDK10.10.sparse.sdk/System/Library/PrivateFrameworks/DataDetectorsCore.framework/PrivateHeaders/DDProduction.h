/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DDLocation, DDNonTerminal, NSArray;

// Not exported
@interface DDProduction : NSObject
{
    NSArray *_items;
    DDNonTerminal *_nonTerminal;
    long long _index;
    DDLocation *_location;
    long long *_graphOfWeakNT;
    long long _numberOfDottedProductions;
    struct __DDDotedProduction *_dottedProductions;
}

@property long long index; // @synthesize index=_index;
- (BOOL)checkDottedProductionIndex:(long long)arg1;
- (struct __DDDotedProduction *)dottedProductions;
- (void)setDottedProductions:(struct __DDDotedProduction *)arg1;
- (long long)numberOfDottedProduction;
- (long long)numberOfWeakNTBeforeIndex:(long long)arg1;
- (void)recalculateWeakNTGraphAndDottedProdNumber;
- (id)locationDescription;
- (struct __DDExpressionPosition)locationPosition;
- (id)locationFilename;
@property(retain) DDLocation *location;
- (id)nonTerminal;
- (id)symbols;
- (void)setSymbols:(id)arg1;
- (id)description;
- (id)descriptionWithMarkerPos:(int)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1 nonTerminal:(id)arg2;

@end

