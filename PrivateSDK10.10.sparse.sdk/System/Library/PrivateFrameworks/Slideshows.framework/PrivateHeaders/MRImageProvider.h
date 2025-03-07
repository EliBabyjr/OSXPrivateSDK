/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MRAssetPlayerDelegate-Protocol.h"
#import "MRLoadable-Protocol.h"
#import "MRRenderable-Protocol.h"

@class MRAssetPlayer, MRImage, MRLayerEffect, NSDictionary, NSInvocationOperation, NSLock, NSString;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable, MRAssetPlayerDelegate>
{
    NSString *mAssetPath;
    struct CGSize mDefaultSize;
    NSString *mImageSizeScript;
    NSDictionary *mEffectAttributes;
    NSInvocationOperation *mPreloadOperation;
    NSLock *mPreloadOperationLock;
    MRImage *mOriginalImage;
    struct CGSize mOriginalImageSize;
    BOOL mIsLoaded;
    struct CGSize mRequestedSize;
    double mShowTime;
    double mShowDuration;
    struct CGSize mImageSize;
    struct CGSize mLastImageSize;
    MRAssetPlayer *mSlidePlayer;
    unsigned int mFlags;
    BOOL mIsCleanedUp;
    BOOL mJustHoldIt;
    MRLayerEffect *_effectLayer;
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=mOriginalImageSize;
@property(copy, nonatomic) NSString *assetPath; // @synthesize assetPath=mAssetPath;
@property(nonatomic) BOOL justHoldIt; // @synthesize justHoldIt=mJustHoldIt;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=mRequestedSize;
@property(nonatomic) double showDuration; // @synthesize showDuration=mShowDuration;
@property(nonatomic) double showTime; // @synthesize showTime=mShowTime;
@property(retain, nonatomic) NSDictionary *effectAttributes; // @synthesize effectAttributes=mEffectAttributes;
@property(copy, nonatomic) NSString *imageSizeScript; // @synthesize imageSizeScript=mImageSizeScript;
@property(nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=mDefaultSize;
- (void)imageIsAvailableFromAssetPlayer:(id)arg1;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_computeImageSizeInContext:(id)arg1 withArguments:(id)arg2;
@property(readonly, nonatomic) BOOL isInfinite;
@property(readonly, nonatomic) BOOL isAlphaFriendly;
@property(readonly, nonatomic) BOOL isOpaque;
@property(readonly, nonatomic) BOOL isNative3D;
- (void)cancelLoading;
- (void)unload;
- (void)loadWithArguments:(id)arg1;
- (void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4;
@property(readonly, nonatomic) BOOL isLoaded;
- (BOOL)isLoadedForTime:(double)arg1;
@property MRLayerEffect *effectLayer; // @synthesize effectLayer=_effectLayer;
- (void)_unloadIfNotUpdatingLive;
- (BOOL)endLiveUpdate;
- (BOOL)beginLiveUpdate;
- (struct CGSize)imageSizeForAspectRatio:(float)arg1;
@property(readonly, nonatomic) double imageAspectRatio;
@property(nonatomic) BOOL wantsPowerOfTwo;
@property(nonatomic) BOOL wantsMipmap;
@property(nonatomic) BOOL wantsMonochromatic;
- (void)cleanup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

