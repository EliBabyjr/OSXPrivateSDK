/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRTextArea.h>

#import "SCRGuideHighlightDelegateProtocol-Protocol.h"
#import "SCRWebGroupWindowDelegate-Protocol.h"

@class NSArray, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString, SCRCTargetSelectorTimer, SCRElement, SCRTextMarkerRange, SCRUIElement;

// Not exported
@interface SCRWebArea : SCRTextArea <SCRWebGroupWindowDelegate, SCRGuideHighlightDelegateProtocol>
{
    unsigned long long _previousURLCount;
    long long _frameIndex;
    SCRWebArea *_topLevelWebArea;
    long long _childIndex;
    SCRElement *_readContentsElement;
    NSMutableArray *_brailleLineChildren;
    NSMutableArray *_frames;
    NSMutableArray *_webSpots;
    SCRUIElement *_sweetSpot;
    NSString *_selectedString;
    SCRTextMarkerRange *_lastMarkerRange;
    struct CGRect _webGroupFrame;
    int _navigationType;
    struct __AXTextMarker *_lineTextMarker;
    NSArray *_lineArray;
    long long _lineArrayPosition;
    struct CGRect _lineBounds;
    SCRElement *_readFromBeginningStopElement;
    NSDictionary *_previousWebPageLayout;
    NSMutableDictionary *_domainBucketLayout;
    SCRElement *_currentLandmark;
    NSLock *_liveRegionLock;
    NSMutableDictionary *_liveRegions;
    SCRCTargetSelectorTimer *_liveRegionProcessTimer;
    int _loadingBehavior;
    SCRCTargetSelectorTimer *_loadingCoalescerTimer;
    SCRCTargetSelectorTimer *_checkFocusedChildIndexCoalescerTimer;
    struct {
        unsigned int coalescingLayouts:1;
        unsigned int unregisterNotification:1;
        unsigned int registeredLayoutCompleteNotification:1;
        unsigned int needToRebuildChildren:1;
        unsigned int isTopLevelWebArea:1;
        unsigned int registeredForSelectionChangeNotification:1;
        unsigned int registeredForLiveRegionCreatedNotification:1;
        unsigned int didPerformGroupNavigationForCurrentEventChain:1;
        unsigned int didPerformLineNavigation:1;
        unsigned int hasBeenFocusedInto:1;
        unsigned int lastNavigationUsedInvertedT:1;
        unsigned int completedLoadingWebspots:1;
        unsigned int registeredForNavChange:1;
        unsigned int storedPreviousWebLayoutData:1;
        unsigned int isDashboardWebArea:1;
        unsigned int performedInitializationTasks:1;
        unsigned int hasFinishedBuildingLiveRegions:1;
        unsigned int retainedParentChainForLoadingCoalescerTimer:1;
        unsigned int registeredForExpandedNotification:1;
        unsigned int reserved:12;
    } _srwFlags;
}

+ (void)initialize;
- (id)textMarkerRangeForLine:(unsigned long long)arg1 withUIElement:(id)arg2;
- (void)setSelectedTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)selectedTextMarkerRangeWithUIElement:(id)arg1;
- (id)markerRangeWithUIElement:(id)arg1;
- (BOOL)shouldHandleTextSelection;
- (BOOL)shouldHandleTextNavigation;
- (BOOL)isWebArea;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (BOOL)lastNavigationUsedInvertedT;
- (BOOL)handleInvertedTRightUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleInvertedTLeftUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveWebRotorInDirection:(int)arg1 withRequest:(id)arg2 isGestureEvent:(BOOL)arg3;
- (BOOL)handleInvertedTUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleInvertedTDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_handleInvertedTVerticalMovementWithDirection:(int)arg1 event:(id)arg2 request:(id)arg3;
- (id)_verticalNavigationHandlerAncestor:(id)arg1;
- (unsigned long long)_searchKeyForWebRotor:(id)arg1;
- (BOOL)interactRightCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)hasBeenFocusedInto;
- (void)speakWebPageSummary:(id)arg1;
- (void)_speakWebPageSummary:(id)arg1;
- (void)_startSpeakingWebpage;
- (void)handleAutomaticLoadOption:(int)arg1 request:(id)arg2;
- (void)waitForHashToLoadElementIndex:(unsigned long long)arg1 withWaitMessage:(id)arg2;
- (BOOL)isContainerElement;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)numberOfChildren:(BOOL)arg1;
- (id)children:(BOOL)arg1;
- (id)elementHash:(BOOL)arg1;
- (void)scrollToTop;
- (void)_makeElementHash:(BOOL)arg1;
- (id)_deepFocusedChild;
- (id)elementFromUIElement:(id)arg1 useStitchedText:(BOOL)arg2;
- (id)elementFromUIElement:(id)arg1;
- (BOOL)containsElementHashMarkersForAllChildren;
- (void)_handleUserDefaultsResetNotification:(id)arg1;
- (id)uiElementForHashMarkerIndex:(unsigned long long)arg1 waitForIndex:(BOOL)arg2;
- (id)_brailleLineChildren;
- (void)buildBrailleLineWithFocusedElement:(id)arg1;
- (void)updateBrailleLineWithFocusedElement:(id)arg1;
- (id)titleForCommand:(id)arg1;
- (BOOL)helperForGuide:(id)arg1 highlightElement:(id)arg2;
- (BOOL)guide:(id)arg1 highlightElement:(id)arg2;
- (void)_displayWebGroupWithOption:(int)arg1;
- (void)handleWebGroupWindowUpdateStart:(id)arg1;
- (void)handleWebGroupWindowUpdateStopped:(id)arg1;
- (void)_clearWebGroupDisplay;
- (struct CGRect)webGroupFrameForStartingIndex:(long long)arg1 startMarker:(id *)arg2;
- (BOOL)_handleGroupNavigation:(id)arg1 forward:(BOOL)arg2;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldMapElement:(id)arg1;
- (BOOL)shouldNavigate;
- (id)childrenInReadContentsOrder;
- (id)readContentsElement;
- (void)forgetReadContentsElement;
- (void)prepareReadContentsElementVisibleOnly:(BOOL)arg1;
- (unsigned long long)readContentsElementCount;
- (BOOL)_handleReadToEnd:(id)arg1;
- (BOOL)readFromBeginningWithRequest:(id)arg1;
- (BOOL)shouldStopReadFromBeginning;
- (void)_setReadContentsElement:(id)arg1;
- (BOOL)_advanceInsertionPointWithDirection:(unsigned long long)arg1 granularity:(unsigned long long)arg2;
- (BOOL)moveToSelectedText:(id)arg1;
- (id)selectedText;
- (id)selectedTextMarkerRange;
- (id)elementContainingSelectedText;
- (BOOL)_handleTextAction:(int)arg1 request:(id)arg2;
- (id)currentCursorPosition;
- (struct CGRect)boundsForRange:(id)arg1;
- (BOOL)_handleLineNavigation:(BOOL)arg1 request:(id)arg2;
- (void)_resetLineNavigation;
- (id)_textMarkerRangeElementsFromAttributedString:(id)arg1;
- (void)_addString:(id)arg1 forMarkerRange:(struct _NSRange)arg2 toTextObject:(id)arg3;
- (BOOL)_handleWebOverview:(id)arg1 request:(id)arg2;
- (BOOL)interactDownCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)shouldIncludeDescendants;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)_nextChildInAXOrderFromIndex:(long long)arg1 movingForward:(BOOL)arg2 visibleOnly:(BOOL)arg3 childIndex:(long long *)arg4 wrapped:(char *)arg5;
- (id)_nextChildInAXOrderMovingForward:(BOOL)arg1 visibleOnly:(BOOL)arg2 childIndex:(long long *)arg3 wrapped:(char *)arg4;
- (id)nextElement;
- (id)previousElement;
- (BOOL)_navigateDOMToChild:(id)arg1 ofIndex:(long long)arg2 withEvent:(id)arg3 withRequest:(id)arg4 commandString:(id)arg5 forward:(BOOL)arg6 horizontal:(BOOL)arg7 allowFullWrapping:(BOOL)arg8 wrapped:(BOOL)arg9 allowScrolling:(BOOL)arg10;
- (BOOL)navigateToChildInAXOrderWithEvent:(id)arg1 request:(id)arg2 commandString:(id)arg3 forward:(BOOL)arg4 horizontal:(BOOL)arg5 allowFullWrapping:(BOOL)arg6 visibleOnly:(BOOL)arg7;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)showWebMenu;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)onlyChildForFocusingIntoInArray:(id)arg1;
- (void)_processLandmarkStatus:(id)arg1 request:(id)arg2 handled:(BOOL)arg3;
- (void)setCurrentLandmark:(id)arg1;
- (id)currentLandmark;
- (BOOL)focusInto:(id)arg1;
- (void)endFocus;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (BOOL)didLoadPage;
- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (BOOL)supportsScrollToVisible;
- (BOOL)shouldFocusOntoChild:(id)arg1;
- (void)_updateNativeSearchPerformed:(id)arg1;
- (id)_frames;
- (id)urls;
- (void)_finishedBuildingHash;
- (void)_determineFrameIndex;
- (BOOL)canFocusOutInto;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)needToRebuildChildren;
- (id)prepareArrayToFocusInto;
- (void)_processRedundantLabels;
- (BOOL)shouldPromoteForMovingUIElement:(id)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (void)_resetVOCursorAfterLayoutChange;
- (void)layoutCoalescor:(id)arg1;
- (void)_loadCompleteHandler:(id)arg1;
- (void)_elementExpandedHandler:(id)arg1;
- (void)_performInitializationTasks;
- (int)_didPerformNativeSearch;
- (void)_setDidPerformNativeSearch:(int)arg1;
- (id)_indexPathComparator;
- (BOOL)_isAncestorOfUIElement:(id)arg1;
- (void)_layoutCompleteHandler:(id)arg1;
- (void)_handleProgressUpdate;
- (id)potentialTitleElementFromChild:(id)arg1;
- (BOOL)supportsInAppSearching;
- (void)_handleLayoutComplete:(id)arg1;
- (void)_checkFocusedChildIndex;
- (double)loadingProgress;
- (void)_setCoalescingLayouts:(BOOL)arg1;
- (BOOL)_coalescingLayouts;
- (id)topLevelWebArea;
- (void)_setChildIndex:(long long)arg1;
- (long long)_childIndex;
- (void)_setPreviousURLCount:(unsigned long long)arg1;
- (void)setKeyboardFocus:(BOOL)arg1;
- (BOOL)hasKeyboardFocus;
- (unsigned long long)_previousURLCount;
- (void)registerForLayoutCompleteNotification;
- (BOOL)navigatingWithWebGroups;
- (BOOL)navigatingWithGroups;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (id)roleDescription;
- (BOOL)isTopLevelWebArea;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setNavigationType:(id)arg1;
- (void)dealloc;
- (void)deallocChildren;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;
- (void)_detectLiveRegions;
- (void)_detectLiveRegionsHandler:(id)arg1;
- (void)_initializeLiveRegionTrees:(id)arg1;
- (id)_liveRegionQueue;
- (void)_updateLiveRegionTreeForUIElement:(id)arg1;
- (void)_processLiveRegionUpdate:(id)arg1;
- (BOOL)isLiveRegionEnabled:(id)arg1;
- (void)setLiveRegion:(id)arg1 isEnabled:(BOOL)arg2;
- (id)_flattenedLiveRegionTree:(id)arg1;
- (void)_liveRegionUpdate:(id)arg1;
- (id)_liveRegionDifference:(id)arg1 oldTree:(id)arg2 newTree:(id)arg3 relevantMask:(int)arg4;
- (void)_outputLiveRegionDifference:(id)arg1 changedElements:(id)arg2;
- (BOOL)_shouldImageElementBeProcessed:(id)arg1;
- (BOOL)_handleLiveRegionToggle:(id)arg1 request:(id)arg2;
- (void)_liveRegionCleanup;
- (void)_setLiveRegionTree:(id)arg1 forKey:(id)arg2;
- (id)_liveRegionTreeForKey:(id)arg1;
- (BOOL)_liveRegionTreeExistsForKey:(id)arg1;
- (void)_setLiveRegions:(id)arg1;
- (BOOL)_handleDifferencingEngineNavigation:(id)arg1 forward:(BOOL)arg2;
- (BOOL)_doesMarkerMatchPreviousLayout:(id)arg1;
- (void)_performDifferencingEngineSetup;
- (BOOL)_addMarker:(id)arg1 toLayoutStorage:(id)arg2 shouldCheckExisting:(BOOL)arg3;
- (void)_loadPreviousWebpageLayout;
- (void)_loadDomainBucket;
- (void)_finalizeDifferencingEngine;
- (id)_differencingDomainBucketFilePath;
- (id)_differencingFileKeyForURL:(id)arg1;
- (id)_differencingKeyForAppStorage;
- (BOOL)_setWebspotWithRequest:(id)arg1;
- (BOOL)_setSweetspotWithRequest:(id)arg1;
- (BOOL)_removeWebspotWithRequest:(id)arg1;
- (void)_removeWebspotWithElement:(id)arg1;
- (id)_findWebspotsWithElement:(id)arg1;
- (void)_storeWebspots;
- (id)_createStoredDictionaryForWebspot:(id)arg1;
- (id)webSpots;
- (id)sweetSpot;
- (BOOL)_handleWebspotNavigation:(BOOL)arg1 request:(id)arg2;
- (void)_loadWebspots;
- (void)_clearWebspotCache;
- (id)retrieveUIElementWithStoredInformation:(id)arg1;
- (id)_nearbyUIElements:(long long)arg1 fromUIElement:(id)arg2;
- (BOOL)_uiElementDirectMatch:(id)arg1 withAttributes:(id)arg2;
- (unsigned long long)_sweetSpotIndex;
- (BOOL)_hasLoadedWebspots;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (id)selectionDescriptionFromAttributedText:(id)arg1;
- (void)moveSelectionToMarker:(id)arg1;
- (void)moveSelectionToElement:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (BOOL)modifySelection:(CDStruct_a734b2e2)arg1 event:(id)arg2;
- (void)_setSelectionToCurrentElement;
- (void)clearWebSelection;
- (BOOL)handledKeyboardSelectionEvent:(id)arg1;
- (BOOL)_handledKeyboardSelectionEvent:(id)arg1;

@end

