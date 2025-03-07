/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior-Protocol.h"

@class NSString, XQueryTypeDeclaration;

// Not exported
@interface XQueryCaseClauseExpr : XQueryExpr <XQueryExprBehavior>
{
    NSString *_varName;
    XQueryTypeDeclaration *_type;
    id _expr;
    long long _varID;
}

+ (id)exprWithName:(id)arg1 type:(id)arg2 expr:(id)arg3;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (long long)varID;
- (id)type;
- (id)initWithName:(id)arg1 type:(id)arg2 expr:(id)arg3;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

