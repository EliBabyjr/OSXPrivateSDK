/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface SCROutputSequentialStep : NSObject <NSCopying, NSCoding>
{
    NSString *_category;
    NSMutableArray *_actions;
    int _repeatStyle;
    BOOL _requestWasSentSynchronously;
}

@property(nonatomic) BOOL requestWasSentSynchronously; // @synthesize requestWasSentSynchronously=_requestWasSentSynchronously;
- (id)shortDescription;
- (id)description;
- (int)repeatStyle;
- (void)replaceActionsInRange:(struct _NSRange)arg1 withActionsFromArray:(id)arg2;
- (void)removeActionAtIndex:(unsigned long long)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;
- (id)actions;
- (id)category;
- (void)setRepeatStyle:(int)arg1;
- (void)setCategory:(id)arg1;
- (void)addAction:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithSequentialStep:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

