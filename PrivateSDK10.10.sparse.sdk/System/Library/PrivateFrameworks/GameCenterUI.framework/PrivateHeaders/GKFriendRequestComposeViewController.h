/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "GKDialogControllerSizing-Protocol.h"
#import "GKRemoteViewControllerDelegate-Protocol.h"
#import "GKViewController-Protocol.h"

@class GKRemoteViewController, NSMutableDictionary, NSString;

@interface GKFriendRequestComposeViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>
{
    id _remoteViewController;
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    id _initialState;
}

+ (unsigned long long)maxNumberOfRecipients;
@property(retain) NSMutableDictionary *initialState; // @synthesize initialState=_initialState;
@property(retain) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)setMessage:(id)arg1;
@property(nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate; // @synthesize composeViewDelegate=_composeViewDelegateWeak;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

