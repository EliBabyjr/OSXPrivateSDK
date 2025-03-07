/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProSplitView.h"

// Not exported
@interface BKSidebarSplitView : NSProSplitView
{
    double _lastDividerPosition;
}

- (void)mouseDown:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)adjustSubviews;
- (double)dividerThickness;
- (void)toggleSplitterPosition;
@property double lastDividerPercentage;
@property BOOL firstViewVisible;
- (void)_toggleButtonAction:(id)arg1;
- (void)_updateShowHideToggle;
- (BOOL)_firstViewCovered;
- (void)_setSplitterPosition:(double)arg1 animate:(BOOL)arg2;

@end

