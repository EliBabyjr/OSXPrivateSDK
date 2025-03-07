/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButtonCell.h"

// Not exported
@interface ReaderButtonCell : NSButtonCell
{
    long long _readerButtonState;
}

@property long long readerButtonState; // @synthesize readerButtonState=_readerButtonState;
- (void)drawTitleWithFrame:(struct CGRect)arg1 oldState:(long long)arg2 newState:(long long)arg3 fractionComplete:(double)arg4 inView:(id)arg5;
- (void)drawBezelWithFrame:(struct CGRect)arg1 oldState:(long long)arg2 newState:(long long)arg3 fractionComplete:(double)arg4 inView:(id)arg5;
- (struct CGRect)_titleRectForBounds:(struct CGRect)arg1 state:(long long)arg2;
- (void)_getTextColor:(id *)arg1 engravingColor:(id *)arg2 forState:(long long)arg3 alphaMultiplier:(double)arg4;
- (void)_getLeftCap:(id *)arg1 fill:(id *)arg2 rightCap:(id *)arg3 forState:(long long)arg4;
- (void)_drawTitleWithFrame:(struct CGRect)arg1 state:(long long)arg2 fraction:(double)arg3 inView:(id)arg4;
- (void)_drawBezelWithFrame:(struct CGRect)arg1 state:(long long)arg2 opacity:(double)arg3 inView:(id)arg4;

@end

