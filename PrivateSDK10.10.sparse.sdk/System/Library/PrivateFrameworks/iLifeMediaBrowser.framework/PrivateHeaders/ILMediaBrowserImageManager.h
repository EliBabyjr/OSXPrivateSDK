/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface ILMediaBrowserImageManager : NSObject
{
    NSRecursiveLock *_imageAccessLock;
    NSString *_uniqueID;
    NSString *_cachedDBasePath;
    NSMutableDictionary *_cachedDBaseDict;
    NSMutableArray *_loadAttributesRequestQueue;
    NSMutableDictionary *_loadAttributesRequestsByPath;
    BOOL _cachedDBaseNeedsSave;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (id)imageBitmapRep:(id)arg1;
- (id)attemptToResolveMediaAlias:(id)arg1 moviePath:(id)arg2;
- (void)processLoadAttributesRequest;
- (void)continueProcessingLoadAttributesRequest:(id)arg1;
- (void)extractThumbnailAndMetadataFromMovieRequest:(id)arg1;
- (void)applyRequestedInfoToMediaObject:(id)arg1;
- (void)removeRequestFromQueue:(id)arg1;
- (id)avAssetWithPath:(id)arg1;
- (void)loadAttributes:(id)arg1 forVideoMediaObject:(id)arg2 atPath:(id)arg3;
- (void)addLoadAttributesRequest:(id)arg1;
- (void)checkForNextRequest;
- (void)loadAttributes:(id)arg1 forImageMediaObject:(id)arg2 atPath:(id)arg3;
- (void)loadAttributes:(id)arg1 forMediaObject:(id)arg2 atPath:(id)arg3;
- (void)loadCachedAttributesForMediaObject:(id)arg1 updateIfNotFound:(BOOL)arg2;
- (void)applyCachedInfo:(id)arg1 toMediaObject:(id)arg2;
- (void)loadCachedAttributesForMediaObject:(id)arg1;
- (void)updateThumbnailDataXmlForPath:(id)arg1 info:(id)arg2;
- (void)_writeCachedDBaseDictToFile;
- (id)cachedDBaseDict;
- (void)handleApplicationWillTerminate:(id)arg1;
- (id)photoBoothIcon;
- (id)garageBandIcon;
- (id)iMovie7Icon;
- (id)iMovieIcon;
- (id)apertureIcon;
- (id)iPhotoIcon;
- (id)iTunesIcon;
- (id)defaultFolderImage;
- (id)defaultOfflineFolderImage;
- (id)counterBadgeImageForCount:(unsigned long long)arg1;
- (id)counterBadgeImageForCount:(unsigned long long)arg1 scaleFactor:(double)arg2;
- (id)iconForMediaGroupType:(unsigned long long)arg1;
- (id)iconImageForFilePath:(id)arg1;
- (id)iconForFile:(id)arg1;
- (id)currentBundle;
- (id)imageNamed:(id)arg1 inBundle:(id)arg2;
- (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end

