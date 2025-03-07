/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableOrderedSet;

@interface AKModelController : NSObject
{
    NSMutableOrderedSet *_mutablePageModelControllers;
}

- (void).cxx_destruct;
- (void)populateFromArchivablePageModelControllers:(id)arg1;
- (id)archivablePageModelControllers;
- (void)deselectAllAnnotations;
- (void)deleteAllSelectedAnnotations;
- (id)allSelectedAnnotations;
- (id)pageModelControllerForAnnotation:(id)arg1;
- (id)pageModelControllerForPage:(unsigned long long)arg1;
- (void)replacePageModelControllersAtIndexes:(id)arg1 withPageModelControllers:(id)arg2;
- (void)replaceObjectInPageModelControllersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removePageModelControllersAtIndexes:(id)arg1;
- (void)removeObjectFromPageModelControllersAtIndex:(unsigned long long)arg1;
- (void)insertPageModelControllers:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inPageModelControllersAtIndex:(unsigned long long)arg2;
@property(readonly) NSArray *pageModelControllers;
- (id)init;

@end

