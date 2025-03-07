/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/_GEOPlaceRequestTicket.h>

#import "GEOMapServiceSearchTicket-Protocol.h"

@class GEOMapRegion, GEOMapServiceTraits, NSString;

// Not exported
@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>
{
    BOOL _shiftLocationsIfNeeded;
}

@property(readonly, nonatomic) NSString *searchQuery;
- (void)submitWithHandler:(id)arg1 networkActivity:(void)arg2;
- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

