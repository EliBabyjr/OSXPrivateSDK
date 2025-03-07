/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FilterElementDefinition : NSObject
{
    NSString *_rootName;
    unsigned long long _rule;
    unsigned long long _mask;
    unsigned long long _subRule;
    unsigned long long _subMask;
    int _subAuxValueCount;
    BOOL _hasAuxValue;
    unsigned long long _auxValue;
    NSMutableDictionary *_setOfMatches;
    NSString *_namedLink;
    FilterElementDefinition *_wildCard;
    FilterElementDefinition *_superWildCard;
}

- (void)dump:(int)arg1;
- (void)dumpAttributesInto:(char *)arg1 forLevel:(int)arg2;
- (void)addRuleField:(int)arg1 value:(int)arg2 hasAuxValue:(BOOL)arg3 auxValue:(unsigned long long)arg4 inside:(BOOL)arg5 forPathComponents:(id)arg6 permitLink:(BOOL)arg7 componentIndex:(int)arg8 parentElement:(id)arg9 copyParentWildcardLink:(BOOL)arg10;
- (CDStruct_51293ebd)encodeInto:(struct _MDPlistContainer *)arg1 auxArray:(id)arg2 namedRootMap:(id)arg3;
- (BOOL)isBottomValue;
- (void)dealloc;
- (id)initAsRoot:(id)arg1;

@end

