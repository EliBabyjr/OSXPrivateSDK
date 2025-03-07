/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MediaControlClient : NSObject
{
    struct dispatch_queue_s *_queue;
    struct MediaControlClientImp *_client;
    struct dispatch_queue_s *_eventHandlerQueue;
    id _eventHandlerBlock;
}

- (void)setVolume:(float)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)setRate:(float)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)setPosition:(float)arg1 options:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)setPosition:(float)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)playWithParams:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)authorizeWithPICRequest:(id)arg1 options:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)activateResource:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)removeResource:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)addResource:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(struct dispatch_queue_s *)arg4 completionBlock:(id)arg5;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)removeItem:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)insertItem:(id)arg1 afterItem:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)setEventHandlerQueue:(struct dispatch_queue_s *)arg1 eventHandlerBlock:(id)arg2;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(struct dispatch_queue_s *)arg3 completionBlock:(id)arg4;
- (void)ensureDisconnected;
- (void)ensureConnected;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)checkAuthentication;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (struct MediaControlClientImp *)internalClient;

@end

