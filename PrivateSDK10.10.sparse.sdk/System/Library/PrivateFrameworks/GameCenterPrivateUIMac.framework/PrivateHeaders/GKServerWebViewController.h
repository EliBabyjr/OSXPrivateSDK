/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UXViewController.h"

#import "GKServerWebViewJSRootDelegate-Protocol.h"

@class GKMTextFieldPlus, GKServerWebViewJSRoot, NSArray, NSButton, NSData, NSDictionary, NSLayoutConstraint, NSScrollView, NSString, NSTextField, NSURL, NSURLRequest, WebView;

@interface GKServerWebViewController : UXViewController <GKServerWebViewJSRootDelegate>
{
    NSURL *_url;
    long long _alertTag;
    WebView *_webView;
    NSString *_okCallback;
    NSString *_cancelCallback;
    NSString *_playerID;
    NSString *_authToken;
    NSURLRequest *_previousRequest;
    long long _status;
    NSData *_pushToken;
    BOOL _dismissOnAuthenticate;
    id _completionHandler;
    NSLayoutConstraint *_widthLayoutConstraint;
    GKServerWebViewJSRoot *_jsRoot;
    NSDictionary *_buttonInfo;
    BOOL _showSpinner;
    NSTextField *_errorTitle;
    GKMTextFieldPlus *_errorDescription;
    BOOL _waitForLoad;
    NSArray *_heightLayoutConstraints;
    NSButton *_innerLeftButton;
    NSButton *_outerLeftButton;
    NSButton *_innerRightButton;
    NSButton *_outerRightButton;
    NSString *_urlTypeRequested;
}

+ (id)keyPathsForValuesAffectingContentWidth;
+ (id)keyPathsForValuesAffectingScrollView;
@property(retain, nonatomic) NSString *urlTypeRequested; // @synthesize urlTypeRequested=_urlTypeRequested;
@property(retain, nonatomic) NSButton *outerRightButton; // @synthesize outerRightButton=_outerRightButton;
@property(retain, nonatomic) NSButton *innerRightButton; // @synthesize innerRightButton=_innerRightButton;
@property(retain, nonatomic) NSButton *outerLeftButton; // @synthesize outerLeftButton=_outerLeftButton;
@property(retain, nonatomic) NSButton *innerLeftButton; // @synthesize innerLeftButton=_innerLeftButton;
@property BOOL waitForLoad; // @synthesize waitForLoad=_waitForLoad;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *heightLayoutConstraints; // @synthesize heightLayoutConstraints=_heightLayoutConstraints;
@property(retain, nonatomic) GKMTextFieldPlus *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSTextField *errorTitle; // @synthesize errorTitle=_errorTitle;
@property BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property(copy, nonatomic) NSDictionary *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(nonatomic) NSLayoutConstraint *widthLayoutConstraint; // @synthesize widthLayoutConstraint=_widthLayoutConstraint;
@property(nonatomic) long long alertTag; // @synthesize alertTag=_alertTag;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL dismissOnAuthenticate; // @synthesize dismissOnAuthenticate=_dismissOnAuthenticate;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURLRequest *previousRequest; // @synthesize previousRequest=_previousRequest;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(retain, nonatomic) NSString *okCallback; // @synthesize okCallback=_okCallback;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void)uploadContacts;
- (void)changePhoto;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)parseAlertURLString:(id)arg1;
- (void)showMessageForError:(id)arg1;
- (void)presentError:(id)arg1;
- (id)willPresentError:(id)arg1;
- (void)parseNavBarURLString:(id)arg1;
- (void)navButtonPressed:(id)arg1;
- (void)javaScriptAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)serverWebViewJSRoot:(id)arg1 changeNavBarWithButtons:(id)arg2 showSpinner:(BOOL)arg3;
- (void)serverWebViewJSRoot:(id)arg1 reauthenticateWithCompletionHandler:(id)arg2;
- (void)serverWebViewJSRoot:(id)arg1 presentAlert:(id)arg2 withCompletionHandler:(id)arg3;
- (void)serverWebViewJSRoot:(id)arg1 saveFile:(id)arg2 suggestedFilename:(id)arg3 mimeType:(id)arg4;
- (void)processGameKitURLComponents:(id)arg1;
- (id)decodeDashEncodedString:(id)arg1;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (BOOL)shouldStartLoadWithURL:(id)arg1 request:(id)arg2 redirectTo:(id *)arg3;
- (void)authenticateAndTryURLRequestAgain:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)finish;
- (void)startLoadingURL:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)_didBeginSheet;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (void)dealloc;
- (void)loadView;
- (void)updateScrollView;
@property(readonly, nonatomic) double contentWidth;
- (double)defaultWidth;
- (void)clearBackground;
@property(readonly, nonatomic) NSScrollView *scrollView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

