/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class MPDocument, MRRenderer;

@protocol MRMarimbaBasicPlayback
@property(nonatomic) BOOL enableSlideDidChangeNotification;
@property(readonly, nonatomic) MRRenderer *renderer;
@property(nonatomic) BOOL displaysFPS;
@property(nonatomic) BOOL stopWithVideo;
@property(nonatomic) double volume;
@property(readonly, nonatomic) BOOL isPlaying;
@property(readonly, nonatomic) double timeRemaining;
@property(nonatomic) double time;
@property(retain, nonatomic) MPDocument *document;
- (void)touchesCancelled:(id)arg1;
- (void)touchesEnded:(id)arg1;
- (void)touchesMoved:(id)arg1;
- (void)touchesBegan:(id)arg1;
- (void)warmupRenderer;
- (void)requestRendering:(BOOL)arg1;
- (struct CGImage *)snapshotAsCGImage;
- (struct CGImage *)snapshotAsCGImageForTime:(double)arg1 withSize:(struct CGSize)arg2;
- (void)prevFrame;
- (void)nextFrame;
- (void)gotoEnd;
- (void)gotoBeginning;
- (void)goForth;
- (void)goBack;
- (void)pauseWhenStill;
- (void)pause;
- (void)play;
- (void)togglePlayback;
@end

