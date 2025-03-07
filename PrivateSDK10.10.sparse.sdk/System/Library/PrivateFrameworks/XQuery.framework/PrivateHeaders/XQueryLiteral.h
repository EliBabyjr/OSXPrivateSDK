/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior-Protocol.h"

@class NSString;

// Not exported
@interface XQueryLiteral : XQueryExpr <XQueryExprBehavior>
{
    id _value;
}

+ (id)stringLiteralWithString:(id)arg1;
+ (id)integerLiteralWithString:(id)arg1;
+ (id)doubleLiteralWithString:(id)arg1;
+ (id)decimalLiteralWithString:(id)arg1;
+ (id)literalWithValue:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)literalValue;
- (id)initWithValue:(id)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

