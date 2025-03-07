/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSImage;

// Not exported
@interface ClippingIconImageRenderer : NSObject
{
    NSImage *_maskImage;
    NSImage *_dropShadowImage;
    BOOL _drawsDropShadowAndMask;
    long long _style;
}

@property(nonatomic) BOOL drawsDropShadowAndMask; // @synthesize drawsDropShadowAndMask=_drawsDropShadowAndMask;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 withTintColor:(id)arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)init;

@end

