/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@interface MREffectStretchableSlide : MREffect
{
    struct CGRect mSpriteInnerRect;
    struct CGRect mImageInnerRect;
    BOOL mDontDrawInner;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isOpaque;
- (BOOL)isNative3D;
- (void)setAttributes:(id)arg1;

@end

