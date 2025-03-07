/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSTimer;

// Not exported
@interface DelayedPopUpButtonCell : NSButtonCell
{
    NSTimer *_menuTimer;
    BOOL _didPopUpMenu;
    id <DelayedPopUpButtonCellDelegate> _delayedPopUpButtonCellDelegate;
}

@property(nonatomic) __weak id <DelayedPopUpButtonCellDelegate> delayedPopUpButtonCellDelegate; // @synthesize delayedPopUpButtonCellDelegate=_delayedPopUpButtonCellDelegate;
- (void).cxx_destruct;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_displayDelayedMenu;
- (void)_invalidateMenuTimer;
- (double)_menuDelayTime;

@end

