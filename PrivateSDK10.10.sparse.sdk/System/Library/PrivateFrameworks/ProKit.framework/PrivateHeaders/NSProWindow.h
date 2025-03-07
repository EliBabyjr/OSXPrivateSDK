/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindow.h"

@interface NSProWindow : NSWindow
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (Class)customWindowTheme;
+ (void)installCustomWindowTheme:(Class)arg1;
+ (void)initializeIfHUD:(id)arg1;
+ (void)initialize;
+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (BOOL)isTexturedStyle:(unsigned long long)arg1;
+ (BOOL)isHUDStyle:(unsigned long long)arg1;
+ (BOOL)isBorderlessStyle:(unsigned long long)arg1;
- (id)customFieldEditor;
- (void)setCustomFieldEditor:(id)arg1;
- (id)contentSeparatorColor;
- (id)HUDMenu;
- (void)setHUDMenu:(id)arg1;
- (void)_proAutomateLiveResize;
- (unsigned long long)sheetBehavior;
- (BOOL)_hasDarkShadow;
- (BOOL)_isDarkWindow;
- (void)_setEventMask:(long long)arg1;
- (BOOL)_processKeyboardUIKey:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)trackWithEvent:(id)arg1;
- (id)fieldEditor:(BOOL)arg1 forObject:(id)arg2;
- (void)_setVisible:(BOOL)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)_validSize:(struct CGSize *)arg1 force:(BOOL)arg2;
- (struct CGRect)resizeCornerRect;
- (BOOL)hasLargeMetricsMask;
- (void)setSnapGravity:(double)arg1;
- (double)snapGravity;
- (void)setSnapsToEdges:(BOOL)arg1;
- (BOOL)snapsToEdges;
- (id)standardWindowButton:(unsigned long long)arg1;
- (void)_resetFirstResponder;
- (void)_setFirstResponder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (BOOL)_useMetalPattern;
- (id)_compositedBackground;
- (void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(BOOL)arg3 forCounter:(BOOL)arg4 force:(BOOL)arg5 isModal:(BOOL)arg6;

@end

