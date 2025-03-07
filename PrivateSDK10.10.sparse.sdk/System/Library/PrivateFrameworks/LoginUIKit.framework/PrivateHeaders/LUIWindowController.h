/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <LoginUIKit/LUIController.h>

@class LUIAppleViewController, LUIButtonViewController, LUIFMMViewController, LUIInfoViewController, LUILogoViewController, LUIMessageViewController, LUIPanelViewController, LUIPopoverController, LUIProgressViewController, LUIStatusViewController, LUIUserListViewController, LUIWindow, NSArray, NSMutableArray, SFAuthorizationPluginView;

@interface LUIWindowController : LUIController
{
    LUIWindow *_mainWindow;
    NSMutableArray *_windows;
    LUIAppleViewController *_appleController;
    LUIButtonViewController *_buttonController;
    LUIFMMViewController *_fmmController;
    LUIInfoViewController *_infoController;
    LUILogoViewController *_logoController;
    LUIPanelViewController *_panelController;
    LUIStatusViewController *_statusController;
    LUIUserListViewController *_userListController;
    LUIMessageViewController *_messageViewController;
    LUIProgressViewController *_progressController;
    LUIPopoverController *_popover;
    SFAuthorizationPluginView *_authPluginView;
    id _windowDidShowBlock;
    BOOL _usesDesktopPicture;
    BOOL _desktopPicturesUpdated;
    NSArray *_topLevelObjects;
    long long _tearDownToken;
}

+ (id)windowControllerWithStyle:(int)arg1 andAuthPluginView:(id)arg2;
+ (id)windowControllerWithStyle:(int)arg1;
@property(readonly) LUIAppleViewController *appleController; // @synthesize appleController=_appleController;
@property(copy) id windowDidShowBlock; // @synthesize windowDidShowBlock=_windowDidShowBlock;
@property(readonly) SFAuthorizationPluginView *authPluginView; // @synthesize authPluginView=_authPluginView;
@property(readonly) LUIPopoverController *popover; // @synthesize popover=_popover;
@property(readonly) LUIProgressViewController *progressController; // @synthesize progressController=_progressController;
@property(readonly) LUIMessageViewController *messageController; // @synthesize messageController=_messageViewController;
@property(readonly) LUIUserListViewController *userListController; // @synthesize userListController=_userListController;
@property(readonly) LUIStatusViewController *statusController; // @synthesize statusController=_statusController;
@property(readonly) LUIPanelViewController *panelController; // @synthesize panelController=_panelController;
@property(readonly) LUILogoViewController *logoController; // @synthesize logoController=_logoController;
@property(readonly) LUIInfoViewController *infoController; // @synthesize infoController=_infoController;
@property(readonly) LUIFMMViewController *fmmController; // @synthesize fmmController=_fmmController;
@property(readonly) LUIButtonViewController *buttonController; // @synthesize buttonController=_buttonController;
@property LUIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 andAuthPluginView:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;
- (void)tearDownController;
- (void)setUIEnabled:(BOOL)arg1;
- (void)showWindow;
- (void)orderOutWindows;
- (void)hideWindow;
- (void)setWindowLevel:(long long)arg1;
- (void)setUsesDesktopPicture:(BOOL)arg1;
- (void)setActionHandler:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)showUserHint:(id)arg1 hasAppleID:(BOOL)arg2 hasMasterPassword:(BOOL)arg3;
- (void)showPopover:(id)arg1;
- (void)showPasswordExpirationInDays:(double)arg1 withContinue:(BOOL)arg2;
- (void)showPasswordChangeError:(id)arg1;
- (void)showPasswordChange:(int)arg1 subMode:(long long)arg2;
- (void)showPasswordChange:(int)arg1;
- (void)showNextLoginTime:(id)arg1;
- (void)showAppleIDVerification;
- (void)shakePopover;
- (void)hidePopover;
- (void)_backgroundPressed:(id)arg1;
- (id)_viewForPopover:(int)arg1;
- (void)_passwordHintMasterPasswordButtonPressed:(id)arg1;
- (void)_passwordHintAppleIDButtonPressed:(id)arg1;
- (void)_passwordExpirationChangePasswordButtonPressed:(id)arg1;
- (void)_passwordExpirationContinueButtonPressed:(id)arg1;
- (void)_passwordChangeChangePasswordButtonPressed:(id)arg1;
- (void)_passwordChangeCancelButtonPressed:(id)arg1;
- (void)_appleIDChangePasswordButtonPressed:(id)arg1;
- (void)_appleIDCancelButtonPressed:(id)arg1;
- (id)_windowWithFrame:(struct CGRect)arg1;
- (void)_updateDisplayIDs;
- (void)_setWindowFrames;
- (void)_setWindowAlphaValues:(double)arg1 animate:(BOOL)arg2;
- (void)_setupControllerWindow;
- (void)_layoutWindow;
- (void)_displaysDidChange:(id)arg1;
- (void)_addGuides;
- (void)_addControllersToWindow;
- (id)_viewControllers;

@end

