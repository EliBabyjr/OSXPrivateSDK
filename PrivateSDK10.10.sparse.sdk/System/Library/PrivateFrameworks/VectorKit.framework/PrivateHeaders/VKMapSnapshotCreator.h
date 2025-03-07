/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VKMapModelDelegate-Protocol.h"

@class NSLocale, NSString, VKImageCanvas, VKMapCameraController, VKMapModel;

@interface VKMapSnapshotCreator : NSObject <VKMapModelDelegate>
{
    VKImageCanvas *_canvas;
    long long _mapType;
    VKMapModel *_mapModel;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    id _completion;
    struct GLRenderer *_gglRenderer;
    VKMapCameraController *_cameraController;
    unsigned int _tileGroupID;
    NSLocale *_locale;
}

+ (BOOL)supportsSharingThumbnails;
+ (BOOL)supportsHighResolutionSnapshots;
+ (shared_ptr_77723e34)device;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (id)mapModel:(id)arg1 markerForAnnotation:(id)arg2;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)cancel;
- (void)renderRequest:(id)arg1 completion:(id)arg2;
- (void)renderSnapshot:(id)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (BOOL)isRoadClassDisabled:(int)arg1;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) BOOL localizeLabels;
@property(nonatomic) long long mapType;
@property(readonly) struct CGSize size;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 softwareRendering:(BOOL)arg4 tileGroupIdentifier:(unsigned int)arg5 locale:(id)arg6;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

