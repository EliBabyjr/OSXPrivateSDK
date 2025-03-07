/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "ProgressReceiver-Protocol.h"

// Not exported
@interface ProgressReceivingView : NSView <ProgressReceiver>
{
    id <ProgressReceivingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ProgressReceivingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)progressSenderProgressDidComplete:(id)arg1;
- (void)progressSenderProgressDidChange:(id)arg1;
- (void)progressSenderProgressWillStart:(id)arg1;

@end

