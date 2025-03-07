/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DDHighlightsDataSource-Protocol.h"
#import "DDOperationDelegate-Protocol.h"

@class DDThreadManager, NSMutableArray, NSMutableDictionary, NSString;

@interface DDDetectorManager2 : NSObject <DDOperationDelegate, DDHighlightsDataSource>
{
    struct __CFDictionary *_highlightsIdentifierForOverlay;
    NSMutableDictionary *_highlightsRequestsForIdentifier;
    struct __CFDictionary *_identifierForController;
    NSMutableDictionary *_scanRequestsForIdentifier;
    id <DDDetectorManager2Delegate> _delegate;
    DDThreadManager *_threadManager;
    NSMutableArray *_scanOperations;
    BOOL _highlightEverything;
    BOOL _onlyURLify;
}

+ (void)runService:(id)arg1;
+ (void)setPasteboardUrl:(id)arg1;
+ (void)setPasteboardString:(id)arg1;
+ (void)popupMenuForDDContext:(id)arg1 view:(id)arg2 completionHandler:(id)arg3;
+ (id)sharedManager;
- (id)_highligtsOverlayForController:(id)arg1 highlightRequest:(id)arg2;
- (id)_highlightsOverlayForIdentifier:(id)arg1;
- (void)readDefaults:(id)arg1;
- (void)setOnlyURLify:(BOOL)arg1;
- (void)setHighlightsEverything:(BOOL)arg1;
- (void)scanCompleted:(id)arg1;
- (void)layoutChangedForOverlay:(id)arg1;
- (BOOL)highlightsView:(id)arg1 blankAfterObject:(id)arg2;
- (id)highlightsView:(id)arg1 tooltipForObject:(id)arg2;
- (int)highlightsView:(id)arg1 actionForEvent:(id)arg2 onHighlightObject:(id)arg3 proposedAction:(int)arg4;
- (void)requestUIForClick:(BOOL)arg1 onHighlightObject:(id)arg2 frame:(struct CGRect)arg3 aimFrame:(struct CGRect)arg4 immediate:(BOOL)arg5;
- (void)externalUIIsOver;
- (unsigned long long)highlightsView:(id)arg1 highlightStyleForObject:(id)arg2;
- (id)highlightsView:(id)arg1 framesOfHighlightObject:(id)arg2;
- (id)highlightsViewHighlightObjects:(id)arg1;
- (id)detectControllerContent:(id)arg1 context:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)clearResultsForController:(id)arg1;
- (void)controllerWithIdentifierWillDisappear:(id)arg1;
- (void)controllerWithIdentifierDidAppear:(id)arg1;
- (void)cancelDetectionForIdentifier:(id)arg1;
- (void)controllerWithIdentifierWillGoAway:(id)arg1;
- (void)_removeReferenceToHLOverlayForIdentifier:(id)arg1;
- (void)controllerWillGoAway:(id)arg1;
- (void)setDOMModificationMode:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithThreadManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

