/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class EKEventViewController;

@interface EKEventView : NSView
{
    EKEventViewController *_controller;
}

@property __weak EKEventViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithEventViewController:(id)arg1;

@end

