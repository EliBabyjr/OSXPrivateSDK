/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSView;

// Not exported
@interface NSProSlidingView : NSObject
{
    NSView *view;
    struct CGPoint startingLocation;
    struct CGPoint destination;
    double startTime;
    double duration;
}

- (struct CGPoint)position;
- (struct CGPoint)destination;
- (id)initWithLocation:(struct CGPoint)arg1 destination:(struct CGPoint)arg2 travelTime:(double)arg3;

@end

