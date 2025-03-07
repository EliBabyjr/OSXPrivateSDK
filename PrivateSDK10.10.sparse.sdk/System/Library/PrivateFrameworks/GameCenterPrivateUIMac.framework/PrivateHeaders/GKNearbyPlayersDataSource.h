/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKBasicCollectionViewDataSource.h>

@class NSMutableArray;

@interface GKNearbyPlayersDataSource : GKBasicCollectionViewDataSource
{
    BOOL _browsingForNearbyPlayers;
    id <GKNearbyBrowserDelegate> _nearbyDelegate;
    NSMutableArray *_nearbyPlayers;
}

@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) BOOL browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
- (id)sectionTitle;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeAllPlayers;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)didUpdateModel;
- (void)dealloc;
- (id)init;

@end

