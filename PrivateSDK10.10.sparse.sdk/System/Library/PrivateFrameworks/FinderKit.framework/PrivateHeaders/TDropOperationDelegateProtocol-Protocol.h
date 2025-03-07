/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TNodeTaskDelegateProtocol-Protocol.h"

@protocol TDropOperationDelegateProtocol <TNodeTaskDelegateProtocol>

@optional
- (id)dropTargetViewForDraggingInfo:(id)arg1;
- (void)receivePromiseDragNode:(const struct TFENode *)arg1 spatialData:(const struct DataBrowserItemSpatialData *)arg2;
- (void)calculateSpatialData:(struct DataBrowserItemSpatialData *)arg1 draggingItem:(id)arg2 forcePlace:(_Bool)arg3;
- (void)calculatePropertiesWithDrop:(struct TDropOperation *)arg1 forNode:(const struct TFENode *)arg2 withPasteboardItem:(void *)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(struct TFENodePropertyList *)arg5 forcePlace:(_Bool)arg6 applyNow:(_Bool)arg7;
@end

