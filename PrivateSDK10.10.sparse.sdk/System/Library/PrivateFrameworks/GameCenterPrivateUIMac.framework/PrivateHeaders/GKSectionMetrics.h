/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKGridLayoutMetrics.h>

@class NSDictionary;

@interface GKSectionMetrics : GKGridLayoutMetrics
{
    BOOL _incrementalRevealConsumesPadding;
    BOOL _shouldAlwaysIncludeShowMore;
    BOOL _shouldShowSectionHeadersWhenNoItems;
    unsigned long long _alignment;
    double _lineSpacing;
    double _interitemSpacing;
    double _marginBetweenItems;
    double _desiredItemWidth;
    double _flowColumnWidth;
    unsigned long long _flowMaxColumnCount;
    double _desiredItemHeight;
    NSDictionary *_itemHeightList;
    unsigned long long _lastLineItemAlignment;
    unsigned long long _maximumVisibleItemCount;
    unsigned long long _incrementalRevealItemCount;
    struct NSEdgeInsets _padding;
}

+ (id)metricsForIdiom:(int)arg1;
@property(nonatomic) BOOL shouldShowSectionHeadersWhenNoItems; // @synthesize shouldShowSectionHeadersWhenNoItems=_shouldShowSectionHeadersWhenNoItems;
@property(nonatomic) BOOL shouldAlwaysIncludeShowMore; // @synthesize shouldAlwaysIncludeShowMore=_shouldAlwaysIncludeShowMore;
@property(nonatomic) BOOL incrementalRevealConsumesPadding; // @synthesize incrementalRevealConsumesPadding=_incrementalRevealConsumesPadding;
@property(nonatomic) unsigned long long incrementalRevealItemCount; // @synthesize incrementalRevealItemCount=_incrementalRevealItemCount;
@property(nonatomic) unsigned long long maximumVisibleItemCount; // @synthesize maximumVisibleItemCount=_maximumVisibleItemCount;
@property(nonatomic) unsigned long long lastLineItemAlignment; // @synthesize lastLineItemAlignment=_lastLineItemAlignment;
@property(retain, nonatomic) NSDictionary *itemHeightList; // @synthesize itemHeightList=_itemHeightList;
@property(nonatomic) double desiredItemHeight; // @synthesize desiredItemHeight=_desiredItemHeight;
@property(nonatomic) unsigned long long flowMaxColumnCount; // @synthesize flowMaxColumnCount=_flowMaxColumnCount;
@property(nonatomic) double flowColumnWidth; // @synthesize flowColumnWidth=_flowColumnWidth;
@property(nonatomic) double desiredItemWidth; // @synthesize desiredItemWidth=_desiredItemWidth;
@property(nonatomic) double marginBetweenItems; // @synthesize marginBetweenItems=_marginBetweenItems;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
- (struct CGSize)itemSizeForCollectionView:(id)arg1;
@property(readonly, nonatomic) double calculatedItemHeight;
@property(nonatomic) BOOL sectionHeadersShouldPin;
@property(nonatomic) double showMoreHeight;
@property(nonatomic) double sectionHeaderHeight;
- (id)localDescription;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithIdiom:(int)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

