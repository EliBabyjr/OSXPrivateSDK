/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPanel.h"

@class NSButton, NSImage, NSView, NSViewController;

@interface CPKWindow : NSPanel
{
    NSView *_myContentView;
    BOOL _showingAlternateView;
    BOOL _prohibitingZoom;
    NSViewController *_alternateViewController;
    NSImage *_alternateBitmapImage;
    unsigned long long _alternateWindowStyle;
    struct CGRect _alternateWindowFrame;
    NSButton *_transformButton;
    id _privateData;
}

@property(retain) NSImage *alternateBitmapImage; // @synthesize alternateBitmapImage=_alternateBitmapImage;
@property(readonly) NSButton *transformButton; // @synthesize transformButton=_transformButton;
@property struct CGRect alternateWindowFrame; // @synthesize alternateWindowFrame=_alternateWindowFrame;
@property unsigned long long alternateWindowStyle; // @synthesize alternateWindowStyle=_alternateWindowStyle;
@property BOOL prohibitingZoom; // @synthesize prohibitingZoom=_prohibitingZoom;
@property BOOL showingAlternateView; // @synthesize showingAlternateView=_showingAlternateView;
@property(retain, nonatomic) NSViewController *alternateViewController; // @synthesize alternateViewController=_alternateViewController;
@property(readonly) NSView *myContentView; // @synthesize myContentView=_myContentView;
- (id)_privateStorage;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)performZoom:(id)arg1;
- (BOOL)hasKeyAppearance;
- (void)_characterViewerDidOpen:(id)arg1;
- (void)_characterViewerWillOpen:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)_didCancelOperation:(id)arg1;
- (void)windowWillClosed:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)characterDidSelected:(id)arg1;
- (void)_titlebarClicked:(id)arg1;
- (void)_characterViewerButtonClicked:(id)arg1;
- (void)_callWillCloseDelegate;
- (void)_detachedWindowClosed:(id)arg1;
- (void)setLastKeyWindow:(id)arg1 bringBack:(BOOL)arg2;
- (void)_switchWindowStyleToResizable:(BOOL)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)transformWindow;
- (void)prepareTransformFromPopover:(BOOL)arg1;
- (void)dealloc;
- (id)initWithParentPopover:(id)arg1;

@end

