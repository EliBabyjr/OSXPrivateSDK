/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/NSCollectionReusableView.h>

@class NSTextField;

@interface GKMultiplayerHeaderView : NSCollectionReusableView
{
    NSTextField *_playerLabel;
}

@property NSTextField *playerLabel; // @synthesize playerLabel=_playerLabel;
- (void)setMinPlayers:(long long)arg1 maxPlayers:(long long)arg2;
- (void)awakeFromNib;

@end

