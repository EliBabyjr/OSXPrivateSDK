/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButton.h"

@class NSImage;

@interface FRToolbarButton : NSButton
{
    NSImage *_glyph;
}

+ (struct CGSize)titleSize:(id)arg1;
+ (id)disabledTitleAttributes;
+ (id)titleAttributes;
+ (id)disabledTitleForegroundColor;
+ (id)titleForegroundColor;
+ (id)disabledTitleShadow;
+ (id)titleShadow;
+ (struct CGSize)theSize;
+ (void)initialize;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isRestricted;
- (void)_drawTitle:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

