/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSOutlineViewDataSource-Protocol.h"

@class FI_TBrowserViewController, NSString;

// Not exported
@interface FI_TBrowserViewDataSource : NSObject <NSOutlineViewDataSource>
{
    FI_TBrowserViewController *_controller;
    struct TNodeToChildrenMap *_nodeChildrenMap;
    struct TGroupClientNodes *_nodeGroups;
    _Bool _groupsNeedSorting;
    struct map<TFENode, TNSRef<FI_TContainerExtraData *>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<FI_TContainerExtraData *>>>> _extraDataForContainer;
}

+ (id)newDocumentButtonNode;
+ (id)moreNode;
@property(nonatomic) FI_TBrowserViewController *controller; // @synthesize controller=_controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)updateNodesGroup:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3 sortGroupsAscending:(_Bool)arg4;
- (_Bool)removeNodesInGroups:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3 sortGroupsAscending:(_Bool)arg4;
- (_Bool)addNodesInGroups:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 removeAll:(_Bool)arg3 groupChanges:(struct TGroupChanges *)arg4 sortGroupsAscending:(_Bool)arg5;
- (void)sortGroupsIfNeeded:(const struct TFENode *)arg1 ascending:(_Bool)arg2;
- (_Bool)removeNodesInGroups:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 exceptInGroup:(const struct TFENode *)arg3 groupsChanged:(set_55a3e8f7 *)arg4;
- (_Bool)removeNodes:(const struct TFENodeVector *)arg1 fromGroup:(const struct TFENode *)arg2 forContainer:(const struct TFENode *)arg3;
- (struct TGroup *)groupForClientNode:(const struct TFENode *)arg1;
- (struct TGroup *)groupOfNode:(const struct TFENode *)arg1;
- (struct TFENode)groupNodeOfNode:(const struct TFENode *)arg1;
- (unsigned long long)indexForGroupedChild:(const struct TFENode *)arg1 inParent:(const struct TFENode *)arg2 countGroups:(_Bool)arg3;
- (struct TFENode)groupedChildOfNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2 countGroups:(_Bool)arg3;
- (_Bool)isGroupRow:(long long)arg1 inContainer:(const struct TFENode *)arg2;
- (unsigned long long)groupedChildrenCountOfNode:(const struct TFENode *)arg1 countGroups:(_Bool)arg2;
- (_Bool)addNodes:(const struct TFENodeVector *)arg1 toGroup:(struct TGroup *)arg2 forContainer:(const struct TFENode *)arg3 updatedGroups:(set_55a3e8f7 *)arg4;
- (struct TFENode)clientNodeForGroup:(struct TGroup *)arg1 forContainer:(const struct TFENode *)arg2;
- (void)sortGroups:(const struct TFENode *)arg1 ascending:(_Bool)arg2;
- (void)sortGroupsAccordingToNodes:(const struct TFENode *)arg1 withCollator:(const struct SortCollator *)arg2;
- (void)sortWithCollator:(const struct SortCollator *)arg1;
- (void)replaceChildrenOf:(const struct TFENode *)arg1 with:(const struct TFENodeVector *)arg2;
- (void)sortAllChildrenOf:(const struct TFENode *)arg1 withCollator:(const struct SortCollator *)arg2 grouping:(_Bool)arg3;
- (void)removeAllNodesInContainer:(const struct TFENode *)arg1;
- (_Bool)removeNodes:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2;
- (void)updateExtraData:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2;
- (_Bool)addNodes:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2;
- (_Bool)addNodes:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 withComparator:(struct TBaseNodeComparator *)arg3;
- (id)extraDataForContainer:(const struct TFENode *)arg1;
- (unsigned long long)indexForChild:(const struct TFENode *)arg1 inParent:(const struct TFENode *)arg2;
- (struct TFENode)childOfNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (const struct TFENodeVector *)childrenOfNode:(const struct TFENode *)arg1;
- (unsigned int)generationCountForSubContainer:(const struct TFENode *)arg1;
- (unsigned int)generationCount;
- (void)swapChildren:(id)arg1 ofSubContainer:(const struct TFENode *)arg2;
- (void)swapChildren:(id)arg1;
- (id)newDataSourceWithClonedChildren;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

