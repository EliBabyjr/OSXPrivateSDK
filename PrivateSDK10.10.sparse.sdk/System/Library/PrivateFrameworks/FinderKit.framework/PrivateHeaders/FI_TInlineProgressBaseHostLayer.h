/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TLayer.h>

// Not exported
@interface FI_TInlineProgressBaseHostLayer : FI_TLayer
{
    struct TNSRef<FI_TInlineProgressBarLayer *> _progressLayer;
    unsigned long long _animationCount;
    _Bool _cleanupWhenFinished;
    id <TViewAnimationDelegate> _animationDelegate;
}

@property(nonatomic) id <TViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)keepAnimationAlive;
- (void)completeAnimation;
- (void)setSelected:(BOOL)arg1;
- (void)setProgressFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)setPercentComplete:(double)arg1 animated:(_Bool)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (id)initVariant:(int)arg1 percentComplete:(double)arg2;

@end

