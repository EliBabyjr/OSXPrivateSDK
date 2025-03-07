/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior-Protocol.h"

@class NSArray, NSMutableArray, NSString;

// Not exported
@interface XQueryElementExpr : XQueryExpr <XQueryExprBehavior>
{
    NSString *_name;
    id _nameExpr;
    NSMutableArray *_namespaces;
    NSArray *_attributes;
    NSArray *_items;
}

+ (id)elementExprWithNameExpr:(id)arg1 value:(id)arg2;
+ (id)elementeExprWithName:(id)arg1 attributes:(id)arg2 items:(id)arg3;
- (id)evaluateWithContext:(id)arg1;
- (BOOL)updateNamespacesForElement:(id)arg1 qName:(id)arg2 context:(id)arg3;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithNameExpr:(id)arg1 value:(id)arg2;
- (id)initWithName:(id)arg1 attributes:(id)arg2 items:(id)arg3;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

