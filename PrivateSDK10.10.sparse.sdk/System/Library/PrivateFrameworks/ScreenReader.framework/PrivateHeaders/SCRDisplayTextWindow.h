/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRDisplayWindow.h>

@class SCRDisplayTextCell;

@interface SCRDisplayTextWindow : SCRDisplayWindow
{
    SCRDisplayTextCell *_textField;
    double _fontSize;
    int _numberOfRows;
    BOOL _isHidden;
    int _resizeHType;
    int _resizeVType;
    struct CGRect _mouseDownWindowBounds;
    double _mouseDownSpacing;
    int _mouseDownNumberOfRows;
    double _mouseDownFontSize;
    BOOL _isOptionMouseDown;
    BOOL _isFrozen;
    BOOL _registeredObservers;
}

+ (BOOL)textFrozen;
+ (void)setTextFrozen:(BOOL)arg1;
+ (void)setKeyCaptureDisplayEnabled:(BOOL)arg1;
+ (void)displayText:(id)arg1;
+ (void)displayConfigurationDidChange;
+ (void)_defaultsChangedForKeyPath:(id)arg1 speak:(id)arg2;
+ (int)initialWindowLevel;
+ (void)moveRightByStep:(double)arg1;
+ (void)moveLeftByStep:(double)arg1;
+ (void)moveDownByStep:(double)arg1;
+ (void)moveUpByStep:(double)arg1;
+ (void)decreaseWidthByStep:(double)arg1;
+ (void)increaseWidthByStep:(double)arg1;
+ (void)_setMetric:(double)arg1 forKey:(id)arg2;
+ (void)_updateMetrics:(id)arg1;
+ (void)addSizeToRequest:(id)arg1;
+ (void)addLocationToRequest:(id)arg1;
+ (void)decreaseNumberOfRows;
+ (void)increaseNumberOfRows;
+ (void)_echoUpdateNumberOfRows:(int)arg1;
+ (void)hide;
+ (void)show;
+ (void)hideOnly;
+ (void)showOnly;
+ (void)_echoUpdateEnabled:(BOOL)arg1;
+ (void)decreaseFontSize;
+ (void)increaseFontSize;
+ (void)_echoUpdateFontSize:(double)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)sharedTextWindow;
+ (void)initialize;
- (void)handleMouseDragEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseDownEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseUpEvent:(struct _CGSEventRecord)arg1;
- (void)drawInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)setText:(id)arg1;
- (void)setScreenRect:(struct CGRect)arg1;
- (void)_getFontSize:(double *)arg1 numberOfRows:(int *)arg2;
- (void)setFontSize:(double)arg1 withNumberOfRows:(int)arg2 useRect:(struct CGRect *)arg3 growTop:(BOOL)arg4 constrain:(BOOL)arg5;
- (void)hide;
- (void)show;
- (BOOL)isHidden;
- (struct CGSize)minLineSize;
- (void)centerText;
- (void)setTextColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)removeObservers;
- (void)registerObservers;
- (void)dealloc;
- (id)initWithScreenRect:(struct CGRect)arg1;

@end

