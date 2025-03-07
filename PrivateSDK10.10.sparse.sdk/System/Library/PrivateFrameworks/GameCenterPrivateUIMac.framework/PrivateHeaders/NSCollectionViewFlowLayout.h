/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/NSCollectionViewLayout.h>

@interface NSCollectionViewFlowLayout : NSCollectionViewLayout
{
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    struct CGSize _itemSize;
    long long _scrollDirection;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct NSEdgeInsets _sectionInset;
}

@property(nonatomic) struct NSEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;

@end

