/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface XQueryStep : NSObject
{
    id _expr;
    id _next;
    NSArray *_predicates;
}

- (id)handlePreicatesFromIndex:(unsigned long long)arg1 items:(id)arg2 context:(id)arg3;
- (void)bindInfoForProlog:(id)arg1;
- (void)processItems:(id)arg1 toResults:(id)arg2 forContext:(id)arg3 validate:(BOOL)arg4;
- (void)setPredicates:(id)arg1;
- (void)setLast:(id)arg1;
- (void)setNext:(id)arg1;
- (id)predicates;
- (id)expr;
- (id)next;
- (id)initWithExpr:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end

