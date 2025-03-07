/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CannedVideoFrameFeeder-Protocol.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVURLAsset, NSString, VideoScaler;

// Not exported
@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder>
{
    AVURLAsset *_compressedFileAsset;
    AVAssetReader *_assetReader;
    AVAssetTrack *_videoTrack;
    AVAssetReaderTrackOutput *_readerVideoTrackOutput;
    NSString *_movieURLString;
    VideoScaler *_videoScaler;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct __CVPixelBufferPool *_rotatedPixelBufferPool;
    int _width;
    int _height;
    int _allFrameCount;
    double _allFrameRate;
    int _frameCount;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(nonatomic) double allFrameRate; // @synthesize allFrameRate=_allFrameRate;
@property(nonatomic) int allFrameCount; // @synthesize allFrameCount=_allFrameCount;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) VideoScaler *videoScaler; // @synthesize videoScaler=_videoScaler;
@property(retain, nonatomic) NSString *movieURLString; // @synthesize movieURLString=_movieURLString;
@property(retain, nonatomic) AVAssetReaderTrackOutput *readerVideoTrackOutput; // @synthesize readerVideoTrackOutput=_readerVideoTrackOutput;
@property(retain, nonatomic) AVAssetTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(retain, nonatomic) AVURLAsset *compressedFileAsset; // @synthesize compressedFileAsset=_compressedFileAsset;
- (void)getFrameRate:(double *)arg1 frameCount:(int *)arg2;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (int)initialize;
- (int)initializeDecoder;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

