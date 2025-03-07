/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoKit/GEOWorldImageLayer.h>

@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer
{
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)arg1;
- (void)setRotation:(double)arg1;
- (double)rotation;
- (void)dealloc;
- (id)initWithImages:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_animationTimer:(id)arg1;
- (id)_prototypeLayer;

@end

