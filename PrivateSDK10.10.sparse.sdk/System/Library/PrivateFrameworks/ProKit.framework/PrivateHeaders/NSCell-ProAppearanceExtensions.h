/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCell.h"

@interface NSCell (ProAppearanceExtensions)
+ (void)installProMethodSwizzles;
- (BOOL)_supportsClassicLargeMetrics;
- (void)_updateMyFontForLargeSize;
- (long long)proInteriorBackgroundStyleFromBackgroundStyle:(long long)arg1;
- (long long)proInteriorBackgroundStyleFromSuperInteriorBackgroundStyle:(long long)arg1;
- (BOOL)proIsReverseType;
- (void)didRequestObjectValueFromFormatter;
- (void)willRequestObjectValueFromFormatter;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)proTextAttributes;
- (void)proSetHUDTextShadowInAttributes:(id)arg1;
- (BOOL)canDrawDropShadow;
- (id)setUpProFieldEditorAttributes:(id)arg1;
- (void)proTextColor:(id *)arg1 backgroundColor:(id *)arg2;
- (id)proDisabledTextColor;
- (long long)decodeVariant:(int)arg1;
- (int)encodeVariant:(long long)arg1;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (void)proSetFont:(id)arg1;
- (void)proSetControlSize:(unsigned long long)arg1;
- (id)_proLabelFont;
- (void)_setControlSizeFlag:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
@end

