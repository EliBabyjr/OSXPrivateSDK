/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSBrowser.h"

@interface NSProBrowser : NSBrowser
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
+ (id)_columnLeftBorderColor;
+ (Class)_horizontalScrollerClass;
+ (BOOL)_drawFocusRect;
+ (id)_defaultsDomain;
+ (BOOL)_debugFrame;
+ (Class)cellClass;
+ (Class)browserColumnViewClass;
+ (Class)tableColumnViewControllerClass;
+ (void)setScrollerClass:(Class)arg1;
- (void)dealloc;
- (void)_scrollerStyleRecommendationChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)setMatrixClass:(Class)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)_horizontalScrollerSeparationHeight;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)_setScrollerSize:(unsigned long long)arg1;
- (unsigned long long)controlSize;
- (double)_titleSpacerHeight;
- (void)_tileContinuousScrollingBrowser;
- (double)_scrollerAreaHeight;
- (BOOL)_hasColumns;
- (BOOL)_hasColumnView:(id)arg1;
- (BOOL)_isFirstColumnView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initScrollViewForColumns;
- (id)_init;
- (void)_enableAutosavingAndColumnResizingNotifications;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (id)_createColumn:(struct CGRect)arg1 empty:(BOOL)arg2;
- (double)_columnSpacerWidth;
- (struct CGSize)_calcVisibleColumnAreaAvailable;
- (Class)_browserScrollViewClass;
- (double)_borderWidth;
- (id)_columnResizerFacet;

@end

