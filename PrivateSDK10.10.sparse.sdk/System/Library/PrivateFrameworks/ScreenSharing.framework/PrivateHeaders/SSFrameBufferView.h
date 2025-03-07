/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "SSDragDelegate-Protocol.h"
#import "SSFrameBufferObserver-Protocol.h"

@class CALayer, NSArray, NSImage, NSMutableDictionary, NSPasteboard, NSString, NSTrackingArea, SSFrameBuffer;

@interface SSFrameBufferView : NSView <SSFrameBufferObserver, SSDragDelegate>
{
    SSFrameBuffer *mFrameBuffer;
    id <SSInputEventConsumer> mInputEventConsumer;
    CALayer *cachedImageLayer;
    CALayer *flashLayer;
    id <SSFrameBufferViewDelegate> delegate;
    BOOL mShouldWarnAboutScaling;
    double mXScaleFactor;
    double mXInverseScaleFactor;
    double mYScaleFactor;
    double mYInverseScaleFactor;
    NSTrackingArea *mTrackingArea;
    BOOL mCursorInside;
    BOOL mShouldMaskScreen;
    NSPasteboard *mRemotePasteboard;
    NSImage *mRemoteDragImage;
    NSArray *mRemoteFilePaths;
    NSMutableDictionary *mScreenIdsAndRenderViews;
    void *mReservedForInstanceVariables;
    BOOL allowsDragAndDropFileCopyToRemote;
    BOOL allowsDragAndDropFileCopyFromRemote;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
@property BOOL allowsDragAndDropFileCopyFromRemote; // @synthesize allowsDragAndDropFileCopyFromRemote;
@property BOOL allowsDragAndDropFileCopyToRemote; // @synthesize allowsDragAndDropFileCopyToRemote;
@property BOOL shouldMaskScreen; // @synthesize shouldMaskScreen=mShouldMaskScreen;
@property id <SSFrameBufferViewDelegate> delegate; // @synthesize delegate;
@property(copy) NSArray *remoteFilePaths; // @synthesize remoteFilePaths=mRemoteFilePaths;
@property(retain) NSImage *remoteDragImage; // @synthesize remoteDragImage=mRemoteDragImage;
@property(retain) NSPasteboard *remotePasteboard; // @synthesize remotePasteboard=mRemotePasteboard;
@property(retain) id <SSInputEventConsumer> inputEventConsumer; // @synthesize inputEventConsumer=mInputEventConsumer;
- (struct SSPoint)frameBufferCoordinatesFromWindowCoordinates:(struct CGPoint)arg1;
- (struct SSPoint)frameBufferCoordinatesFromNSEvent:(id)arg1;
- (void)sendMouseEventWithWindowCoordinates:(struct CGPoint)arg1;
- (void)sendMouseMovedEvent:(id)arg1;
- (void)sendMouseButtonEvent:(id)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3;
- (void)sendMouseButtonEventWithWindowCoordinates:(struct CGPoint)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3;
- (void)updateSubviews;
@property(readonly) BOOL scalingNotInSync;
- (void)updateScalingFactors;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)ssDragRemotePasteboardTransferred:(id)arg1 withDragImage:(id)arg2 withRemoteFilePaths:(id)arg3;
- (id)genericDocumentIconForDragWithItemCount:(unsigned long long)arg1;
@property(readonly) BOOL isPBCopy;
- (void)ssFrameBufferSizeDidChange:(id)arg1;
- (void)ssFrameBuffer:(id)arg1 sizeWillChangeTo:(struct SSSize)arg2;
- (void)ssFrameBuffer:(id)arg1 rectangleChanged:(struct SSRect)arg2;
@property(retain) SSFrameBuffer *frameBuffer; // @dynamic frameBuffer;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)swipeWithEvent:(id)arg1;
- (void)gestureScrollWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)flash;
@property BOOL useCachedImage;
- (void)dealloc;
- (void)awakeFromNib;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setupLayer;
- (void)commonInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

