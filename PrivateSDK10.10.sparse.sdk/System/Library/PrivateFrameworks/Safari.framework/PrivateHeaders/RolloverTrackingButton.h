/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/ButtonPlus.h>

@class NSTrackingArea;

// Not exported
@interface RolloverTrackingButton : ButtonPlus
{
    NSTrackingArea *_trackingArea;
    BOOL _mouseOver;
    BOOL _trackingMouseDown;
    BOOL _trackingRectUpdatePending;
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
    BOOL _redrawOnMouseEnteredAndExited;
    id <RolloverTrackingButtonDelegate> _delegate;
}

@property(nonatomic) BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
@property(nonatomic) BOOL usesRolloverAppearanceOnMouseDown; // @synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown;
@property(nonatomic) BOOL usesRolloverAppearanceInInactiveWindow; // @synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow;
@property(nonatomic) __weak id <RolloverTrackingButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (BOOL)mouseIsOver;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_finishInitialization;

@end

