/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CoreAnimationLayerDelegate : NSObject
{
    struct CoreAnimationLayer *_layer;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CoreAnimationLayer *)coreAnimationLayer;
- (id)initWithCoreAnimationLayer:(struct CoreAnimationLayer *)arg1;

@end

