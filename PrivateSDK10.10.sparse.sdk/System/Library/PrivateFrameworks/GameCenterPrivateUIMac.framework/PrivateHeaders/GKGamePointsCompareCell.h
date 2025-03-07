/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKBaseGameCell.h>

@class GKGameRecord, NSTextField;

@interface GKGamePointsCompareCell : GKBaseGameCell
{
    GKGameRecord *_localPlayerGameRecord;
    NSTextField *_friendPointsLabel;
    NSTextField *_localPointsLabel;
    NSTextField *_totalPointsLabel;
    NSTextField *_achievementsCountLabel;
}

+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property NSTextField *achievementsCountLabel; // @synthesize achievementsCountLabel=_achievementsCountLabel;
@property NSTextField *totalPointsLabel; // @synthesize totalPointsLabel=_totalPointsLabel;
@property NSTextField *localPointsLabel; // @synthesize localPointsLabel=_localPointsLabel;
@property NSTextField *friendPointsLabel; // @synthesize friendPointsLabel=_friendPointsLabel;
@property(retain, nonatomic) GKGameRecord *localPlayerGameRecord; // @synthesize localPlayerGameRecord=_localPlayerGameRecord;
- (void)didUpdateModel;
- (void)prepareForReuse;

@end

