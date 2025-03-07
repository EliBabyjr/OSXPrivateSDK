/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProTabView.h>

@interface NSProTearOffTabView : NSProTabView
{
    void *_dragSourceData;
    void *_dragDestinationData;
    struct __NSProTearOffTabViewFlags {
        unsigned int RESERVED:20;
        unsigned int delegateImplementsCreateWindowForTabViewItem:1;
        unsigned int delegateImplementsStopDraggingTabViewItem:1;
        unsigned int delegateImplementsStartDraggingTabViewItem:1;
        unsigned int delegateImplementsDidReorderTabViewItem:1;
        unsigned int delegateImplementsWillRemoveTabViewItem:1;
        unsigned int delegateImplementsCanRemoveTabViewItem:1;
        unsigned int delegateImplementsDidInsertTabViewItem:1;
        unsigned int delegateImplementsCanInsertTabViewItem:1;
        unsigned int acceptsDraggedTabViewItems:1;
        unsigned int canDragTabs:1;
        unsigned int dragState:2;
    } _ptoFlags;
    void *_proReserved4;
    void *_proReserved5;
    void *_proReserved6;
}

+ (void)_setAllowSelection:(BOOL)arg1;
+ (BOOL)_allowSelection;
+ (id)draggingSource;
- (void)_hideTabItem:(id)arg1;
- (void)moveTabItem:(id)arg1 toOriginOfTabItem:(id)arg2;
- (BOOL)acceptsDraggedTabViewItems;
- (void)setAcceptsDraggedTabViewItems:(BOOL)arg1;
- (BOOL)canDragTabs;
- (void)setCanDragTabs:(BOOL)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExitedTabArea:(id)arg1;
- (unsigned long long)draggingUpdatedTabArea:(id)arg1;
- (unsigned long long)draggingEnteredTabArea:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)dragItem;
- (CDStruct_09622b1b *)dragTabData;
- (void)removeAllTabViewItems;
- (id)shallowCopy;
- (void)displayTabViewItem:(id)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)_hasKeyboardFocusInTabItem:(id)arg1;
- (void)dragWindowWithMouseTracker:(id)arg1 andEvent:(id)arg2;
- (id)dragImageForWindow:(id)arg1 tabView:(id)arg2 tabItem:(id)arg3;
- (BOOL)dragTabToPoint:(struct CGPoint)arg1 useData:(CDStruct_09622b1b *)arg2;
- (void)freeDragData:(CDStruct_09622b1b *)arg1;
- (CDStruct_09622b1b *)allocateDragDataWithTabViewItem:(id)arg1 andLocation:(struct CGPoint)arg2;
- (void)stopDraggingTabWithMouseTracker:(id)arg1;
- (BOOL)continueDraggingTabWithMouseTracker:(id)arg1 andEvent:(id)arg2;
- (void)startDraggingTabWithMouseTracker:(id)arg1;
- (BOOL)mouseTracker:(id)arg1 didStopTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldContinueTrackingWithEvent:(id)arg2;
- (BOOL)mouseTracker:(id)arg1 shouldStartTrackingWithEvent:(id)arg2;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)setEnableDropHighlight:(BOOL)arg1;
- (void)drawDropHighlight:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_notifyWillRemoveTabViewItem:(id)arg1;
- (void)_notifyDidInsertTabViewItem:(id)arg1;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addTabViewItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_commonInit;

@end

