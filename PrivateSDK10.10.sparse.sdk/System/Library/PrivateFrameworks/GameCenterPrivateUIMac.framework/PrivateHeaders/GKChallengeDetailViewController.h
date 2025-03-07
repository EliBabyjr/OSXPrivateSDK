/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class GKChallenge, GKHorizontalBubbleControlsView, GKPlayerWithSpeechBalloonView, GKTextBubbleControl, NSImageView, NSTextField;

@interface GKChallengeDetailViewController : NSViewController
{
    BOOL _didTransition;
    BOOL _shouldShowPlay;
    BOOL _needInitialScroll;
    GKChallenge *_challenge;
    id <GKChallengeDetailDelegate> _delegate;
    NSImageView *_iconView;
    NSTextField *_goalLabel;
    NSTextField *_fromLabel;
    NSTextField *_infoLabel;
    GKPlayerWithSpeechBalloonView *_playerView;
    GKHorizontalBubbleControlsView *_bubblesView;
    GKTextBubbleControl *_declineBubble;
    GKTextBubbleControl *_playBubble;
}

+ (id)challengeDetailWithChallenge:(id)arg1;
@property BOOL needInitialScroll; // @synthesize needInitialScroll=_needInitialScroll;
@property GKTextBubbleControl *playBubble; // @synthesize playBubble=_playBubble;
@property GKTextBubbleControl *declineBubble; // @synthesize declineBubble=_declineBubble;
@property GKHorizontalBubbleControlsView *bubblesView; // @synthesize bubblesView=_bubblesView;
@property GKPlayerWithSpeechBalloonView *playerView; // @synthesize playerView=_playerView;
@property NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property NSTextField *fromLabel; // @synthesize fromLabel=_fromLabel;
@property NSTextField *goalLabel; // @synthesize goalLabel=_goalLabel;
@property NSImageView *iconView; // @synthesize iconView=_iconView;
@property BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property id <GKChallengeDetailDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL didTransition; // @synthesize didTransition=_didTransition;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
- (void)buy:(id)arg1;
- (void)play:(id)arg1;
- (void)decline:(id)arg1;
- (void)performInitialScroll;
- (void)viewDidLayout;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)configurePlayBubbleForGameCenter;
- (void)configurePlayBubbleForInGame;
- (void)configurePlayBubble;
- (void)configureForChallenge;
- (void)awakeFromNib;
- (void)dealloc;

@end

