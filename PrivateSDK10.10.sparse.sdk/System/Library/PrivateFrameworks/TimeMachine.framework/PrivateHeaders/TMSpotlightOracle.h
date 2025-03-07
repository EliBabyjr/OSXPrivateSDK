/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MDSPathFilter, NSArray, NSString;

@interface TMSpotlightOracle : NSObject
{
    MDSPathFilter *_spotlightFilter;
    NSString *_mountPoint;
    int _dev;
    BOOL _indexTrustable;
}

+ (id)oracleForMountPoint:(id)arg1 device:(int)arg2;
+ (id)oracleForMountPoint:(id)arg1;
@property BOOL indexTrustable; // @synthesize indexTrustable=_indexTrustable;
@property(readonly) int device; // @synthesize device=_dev;
@property(readonly) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(readonly) MDSPathFilter *spotlightFilter; // @synthesize spotlightFilter=_spotlightFilter;
- (BOOL)pathIsExcludedFromIndexing:(const char *)arg1;
@property(readonly) NSArray *stickyExclusionPaths;
@property(readonly) unsigned char currentIndexingState;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSpotlightFilter:(id)arg1 forMountPoint:(id)arg2 device:(int)arg3;

@end

