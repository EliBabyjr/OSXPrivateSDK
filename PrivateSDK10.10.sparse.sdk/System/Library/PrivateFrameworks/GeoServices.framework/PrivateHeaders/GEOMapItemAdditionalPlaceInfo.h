/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject
{
    NSString *_name;
    int _placeType;
    double _areaInMeters;
}

@property(readonly, nonatomic) double areaInMeters; // @synthesize areaInMeters=_areaInMeters;
@property(readonly, nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;

@end

