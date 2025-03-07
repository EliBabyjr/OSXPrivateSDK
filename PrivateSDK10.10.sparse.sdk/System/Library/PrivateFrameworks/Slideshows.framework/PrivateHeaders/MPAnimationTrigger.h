/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MPAction.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MPAnimationTrigger : MPAction
{
    NSString *_animationKey;
    NSMutableDictionary *_animationAttributes;
}

+ (id)animationTrigger;
@property(copy, nonatomic) NSDictionary *animationAttributes; // @synthesize animationAttributes=_animationAttributes;
@property(copy, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
- (void)setAction:(id)arg1;
- (id)animationAttributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

