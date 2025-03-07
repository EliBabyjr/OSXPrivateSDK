/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MPLayer.h>

@class MCContainerSerializer, MPTransition;

@interface MPLayerSerializer : MPLayer
{
    MCContainerSerializer *_layerSerializer;
    MPTransition *_introTransition;
}

- (void)setAudioPlaylist:(id)arg1;
- (void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2;
- (void)removeEffectContainersAtIndices:(id)arg1;
- (void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2;
- (void)setIntroTransition:(id)arg1;
- (id)introTransition;
- (void)dealloc;
- (id)description;
- (id)container;
- (void)setLayerSerializer:(id)arg1;

@end

