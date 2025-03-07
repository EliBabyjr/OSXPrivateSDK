/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSControl.h"

#import "CNAutocompleteFetchDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"

@class CNAutocompleteResult, MUITokenAddressField, NSArray, NSButton, NSLayoutConstraint, NSMapTable, NSMutableArray, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSView, NSWindow;

@interface MUIAddressField : NSControl <CNContactPickerDelegate, CNAutocompleteFetchDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTokenFieldDelegate>
{
    SEL _action;
    id _target;
    unsigned long long _style;
    BOOL _ignoreCompletionForTextChange;
    BOOL _isShowingContactPicker;
    BOOL _shouldDrawFocusRing;
    BOOL _isBoundToTokenField;
    BOOL _isShowingSelectedCompletion;
    NSString *_senderDomain;
    NSScrollView *_scrollView;
    MUITokenAddressField *_tokenField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_addContactButton;
    NSWindow *_completionWindow;
    NSTableView *_completionTableView;
    NSScrollView *_completionTableScrollView;
    CNAutocompleteResult *_selectedResult;
    NSMutableArray *_completionResults;
    id <CNCancelable> _currentSearchRequest;
    NSString *_previousPartialString;
    double _completionStartTime;
    long long _addressDisplayMode;
    id _tokenValue;
    NSLayoutConstraint *_addContactButtonWidthConstraint;
    NSLayoutConstraint *_addContactButtonTrailingConstraint;
    NSLayoutConstraint *_tokenFieldTrailingConstraint;
    NSLayoutConstraint *_tokenFieldBottomConstraint;
    NSLayoutConstraint *_addressFieldHeightConstraint;
    NSMapTable *_representedObjectsCache;
    NSMutableArray *_autocompletionOperations;
    NSView *_progressIndicatorContainer;
    id <MUITokenAddressDelegate> _tokenAddressDelegate;
    struct _NSRange _completionHighlightRange;
}

+ (id)_contactPicker;
+ (id)readablePasteboardTypes;
+ (id)keyPathsForValuesAffectingAddresses;
@property(nonatomic) BOOL isShowingSelectedCompletion; // @synthesize isShowingSelectedCompletion=_isShowingSelectedCompletion;
@property(nonatomic) BOOL isBoundToTokenField; // @synthesize isBoundToTokenField=_isBoundToTokenField;
@property(nonatomic) __weak id <MUITokenAddressDelegate> tokenAddressDelegate; // @synthesize tokenAddressDelegate=_tokenAddressDelegate;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(retain, nonatomic) NSView *progressIndicatorContainer; // @synthesize progressIndicatorContainer=_progressIndicatorContainer;
@property(retain, nonatomic) NSMutableArray *autocompletionOperations; // @synthesize autocompletionOperations=_autocompletionOperations;
@property(retain, nonatomic) NSMapTable *representedObjectsCache; // @synthesize representedObjectsCache=_representedObjectsCache;
@property(retain, nonatomic) NSLayoutConstraint *addressFieldHeightConstraint; // @synthesize addressFieldHeightConstraint=_addressFieldHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldBottomConstraint; // @synthesize tokenFieldBottomConstraint=_tokenFieldBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldTrailingConstraint; // @synthesize tokenFieldTrailingConstraint=_tokenFieldTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addContactButtonTrailingConstraint; // @synthesize addContactButtonTrailingConstraint=_addContactButtonTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addContactButtonWidthConstraint; // @synthesize addContactButtonWidthConstraint=_addContactButtonWidthConstraint;
@property(nonatomic) BOOL isShowingContactPicker; // @synthesize isShowingContactPicker=_isShowingContactPicker;
@property(retain, nonatomic) id tokenValue; // @synthesize tokenValue=_tokenValue;
@property(nonatomic) long long addressDisplayMode; // @synthesize addressDisplayMode=_addressDisplayMode;
@property(nonatomic) BOOL ignoreCompletionForTextChange; // @synthesize ignoreCompletionForTextChange=_ignoreCompletionForTextChange;
@property(nonatomic) struct _NSRange completionHighlightRange; // @synthesize completionHighlightRange=_completionHighlightRange;
@property(nonatomic) double completionStartTime; // @synthesize completionStartTime=_completionStartTime;
@property(copy, nonatomic) NSString *previousPartialString; // @synthesize previousPartialString=_previousPartialString;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property(retain, nonatomic) NSMutableArray *completionResults; // @synthesize completionResults=_completionResults;
@property(retain, nonatomic) CNAutocompleteResult *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(retain, nonatomic) NSScrollView *completionTableScrollView; // @synthesize completionTableScrollView=_completionTableScrollView;
@property(retain, nonatomic) NSTableView *completionTableView; // @synthesize completionTableView=_completionTableView;
@property(retain, nonatomic) NSWindow *completionWindow; // @synthesize completionWindow=_completionWindow;
@property(retain, nonatomic) NSButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) MUITokenAddressField *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *senderDomain; // @synthesize senderDomain=_senderDomain;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)setAccessibilityTitleUIElement:(id)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (BOOL)_addressFieldNeedsToBeScrollable;
- (void)_resizeFieldIfNeeded;
- (void)updateConstraints;
- (BOOL)_hasFocus;
- (void)contactPickerDidClose:(id)arg1;
- (void)contactPickerWillClose:(id)arg1;
- (void)contactPicker:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)_showContactPicker:(id)arg1;
- (void)_tokenFieldGainedFocus:(id)arg1;
- (void)_completeSelection:(id)arg1;
- (void)_selectTableViewRow:(unsigned long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_completionTableView;
- (void)_presentCompletionWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)_completionStringForSelectedRecord;
- (BOOL)tokenField:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_objectDidTriggerAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)setNextKeyView:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
@property(nonatomic) unsigned long long style;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)_cleanUpOperationArray;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)_tokenFieldCommitedEditing:(id)arg1;
- (id)_tokensWithGroupTokensExpanded:(id)arg1;
- (void)_addAddress:(id)arg1 contact:(id)arg2;
@property(retain, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) BOOL isEmpty;
- (void)_refreshAddressDisplayMode;
- (void)_sharedPreferencesChanged:(id)arg1;
- (void)_showSelectedCompletionInField;
- (void)_cancelCompletion;
- (void)_startCompleting;
- (void)_updateTrailingConstraints;
- (void)_scrollerStyleDidChange:(id)arg1;
- (void)_configureConstraints;
- (id)_addContactImage;
- (void)_configureAddContactButton;
- (void)_configureProgressIndicator;
- (void)_configureTokenField;
- (void)_configureScrollView;
- (void)_windowDidChangeKeyStatus:(id)arg1;
- (void)_bindOrUnbindToTokenField:(BOOL)arg1;
- (void)viewDidMoveToSuperview;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)_registerForNotifications;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)_muiAddressFieldCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

