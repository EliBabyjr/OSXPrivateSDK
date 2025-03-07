/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindow.h"

@interface DBCWindow : NSWindow
{
    id _widget;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
- (void)_resetClipForTrackingRect:(long long)arg1;
- (void)_setEventMask:(unsigned long long)arg1 forTrackingRect:(long long)arg2;
- (void)_setMouseMovedEventsEnabled:(BOOL)arg1;
- (BOOL)_shouldPropagateWindowLevelToInputMethods;
- (long long)_nextTrackingNum;
- (BOOL)displaysWhenScreenProfileChanges;
- (void)_setColorSpace:(id)arg1 sendNotification:(BOOL)arg2;
- (void)setColorSpace:(id)arg1;
- (void)_moveTrackingArea:(id)arg1 toRect:(struct CGRect)arg2;
- (void)_enableTrackingArea:(id)arg1;
- (void)_disableTrackingArea:(id)arg1;
- (void)_removeTrackingRects:(long long *)arg1 count:(long long)arg2;
- (void)_removeTrackingRect:(long long)arg1;
- (void)_installTrackingRects:(struct CGRect *)arg1 insideList:(char *)arg2 userDataList:(void **)arg3 trackingNumList:(long long *)arg4 count:(long long)arg5;
- (void)_installTrackingRect:(struct CGRect)arg1 assumeInside:(BOOL)arg2 userData:(void *)arg3 trackingNum:(long long)arg4;
- (void)_discardCursorRect:(long long)arg1;
- (void)_setCursorRect:(struct CGRect)arg1 index:(long long)arg2;
- (void)_setEventMask:(int)arg1;
- (long long)level;
- (BOOL)_isNonactivatingPanel;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)widget;
- (void)setWidget:(id)arg1;
- (void)_adjustWindowToScreen;
- (BOOL)_allowsOrdering;
- (void)_setFrame:(struct CGRect)arg1;
- (id)_initFromGlobalWindow:(long long)arg1 inRect:(const struct CGRect *)arg2 styleMask:(unsigned long long)arg3;

@end

