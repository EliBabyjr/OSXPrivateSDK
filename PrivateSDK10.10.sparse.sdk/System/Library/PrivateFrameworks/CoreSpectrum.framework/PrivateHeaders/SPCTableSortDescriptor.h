/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSortDescriptor.h"

@interface SPCTableSortDescriptor : NSSortDescriptor
{
    unsigned long long _dimensionToSort;
    unsigned long long _sortIndex;
    id _sortKey;
}

@property(retain, nonatomic) id sortKey; // @synthesize sortKey=_sortKey;
@property(nonatomic) unsigned long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(nonatomic) unsigned long long dimensionToSort; // @synthesize dimensionToSort=_dimensionToSort;

@end

