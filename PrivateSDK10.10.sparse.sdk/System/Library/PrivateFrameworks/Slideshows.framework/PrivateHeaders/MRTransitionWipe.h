/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRTransition.h>

@interface MRTransitionWipe : MRTransition
{
    double _progressInternal;
    double _progressAim;
    double _angle;
    double _angleAim;
    double _x;
    double _y;
    BOOL _isManuallyTransitioning;
    BOOL _isFinishing;
    BOOL _isCanceling;
}

+ (void)initialize;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)setAttributes:(id)arg1;
- (BOOL)supportsDirectionOverride;
- (void)unload;
- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;
- (BOOL)dependsOnFingerPosition;
- (BOOL)isTransitioning;

@end

