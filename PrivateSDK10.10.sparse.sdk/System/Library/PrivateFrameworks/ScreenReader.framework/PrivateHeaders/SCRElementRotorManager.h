/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCRElement;

// Not exported
@interface SCRElementRotorManager : NSObject
{
    NSMutableArray *_activeRotors;
    NSString *_currentRotorType;
    SCRElement *_currentElement;
    SCRCTargetSelectorTimer *_hideVisualsTimer;
    NSDictionary *_searchKeyFromRotor;
    SCRCThreadKey *_threadKey;
}

+ (id)sharedManager;
+ (void)initialize;
@property(retain, nonatomic) NSString *currentRotorType; // @synthesize currentRotorType=_currentRotorType;
@property(retain, nonatomic) SCRElement *currentElement; // @synthesize currentElement=_currentElement;
- (id)rotorTypeForWebGuideInMovementDirection:(int)arg1;
- (id)currentRotorTypeForWebGuide;
- (id)searchKeyToWebRotorLookup;
- (BOOL)advanceRotorInDirection:(int)arg1 onlyVisible:(BOOL)arg2 request:(id)arg3 showVisuals:(BOOL)arg4 autoHideVisuals:(BOOL)arg5;
- (void)_delayedHideVisualsCallback;
- (void)hideVisuals;
- (void)delayHideVisuals;
- (id)_hideVisualsTimer;
- (void)updateQuickNavOverridesSelection;
- (BOOL)_useWebRotorForElement:(id)arg1;
- (BOOL)_currentTypeAndElementSupportSelection;
- (id)_moveToNextRotor:(int)arg1 includeOnlyVisibleGuideRotors:(BOOL)arg2;
- (BOOL)isRotorShownInGuides:(id)arg1;
- (id)titleForRotorType:(id)arg1;
- (void)_updateRotors;
- (id)activeRotors:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

