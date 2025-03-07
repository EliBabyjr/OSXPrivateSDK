/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableDictionary, SCRCThreadKey, SCRWindowState;

// Not exported
@interface SCRDnDInfo : NSObject
{
    NSData *_voCursorSnapShotData;
    int _dragState;
    SCRWindowState *_windowState;
    NSMutableDictionary *_dragItemInfo;
    NSMutableDictionary *_destinationItemInfo;
    SCRCThreadKey *_threadKey;
}

+ (void)initialize;
@property(retain) NSMutableDictionary *destinationItemInfo; // @synthesize destinationItemInfo=_destinationItemInfo;
@property(retain) NSMutableDictionary *dragItemInfo; // @synthesize dragItemInfo=_dragItemInfo;
@property(retain) NSData *voCursorSnapShotData; // @synthesize voCursorSnapShotData=_voCursorSnapShotData;
@property(retain) SCRWindowState *windowState;
@property int dragState;
- (id)dropDestinationDescription;
- (void)setDropDestinationElement:(id)arg1;
- (id)dropDestinationElement;
- (void)setDragItemDescription:(id)arg1;
- (id)dragItemDescription;
- (void)setLastElementMarkedForDragAndDrop:(id)arg1;
- (id)applicationOfLastElementMarkedForDragAndDrop;
- (id)lastElementMarkedForDragAndDrop;
- (void)dealloc;
- (id)init;

@end

