/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface IASMagicPocketView : NSView
{
}

- (BOOL)_isGrayScaleColor:(id)arg1;
- (id)_deriveShadowColor:(id)arg1;
- (void)draw;
- (struct CGRect)rectForBorderLine;
- (struct CGRect)rectForPocketShadow;
- (id)findShadowColor;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)accessibilityIsIgnored;
- (void)_windowKeyStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

