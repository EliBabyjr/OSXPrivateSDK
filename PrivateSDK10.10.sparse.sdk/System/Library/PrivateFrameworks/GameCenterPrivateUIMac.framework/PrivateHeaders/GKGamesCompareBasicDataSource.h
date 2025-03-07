/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKBasicCollectionViewDataSource.h>

@class GKPlayer, NSString;

@interface GKGamesCompareBasicDataSource : GKBasicCollectionViewDataSource
{
    GKPlayer *_player;
    NSString *_localPlayerSeed;
    NSString *_playerSeed;
}

+ (id)gamesCompareBasicDataSourceWithPlayer:(id)arg1;
@property(retain, nonatomic) NSString *playerSeed; // @synthesize playerSeed=_playerSeed;
@property(retain, nonatomic) NSString *localPlayerSeed; // @synthesize localPlayerSeed=_localPlayerSeed;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (BOOL)listNeedsUpdateForLocalPlayerSeed:(id)arg1 playerSeed:(id)arg2;
@property(readonly, nonatomic) NSString *overallSeed;
- (id)seedForLocalPlayerSeed:(id)arg1 playerSeed:(id)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end

