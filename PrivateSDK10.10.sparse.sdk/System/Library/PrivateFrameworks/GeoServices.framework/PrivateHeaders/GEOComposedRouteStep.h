/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOComposedRoute, GEOStep;

@interface GEOComposedRouteStep : NSObject
{
    GEOComposedRoute *_composedRoute;
    GEOStep *_geoStep;
    unsigned long long _stepIndex;
    struct _NSRange _pointRange;
    struct _NSRange _maneuverPointRange;
    long long _routeLegType;
}

@property(nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) struct _NSRange maneuverPointRange; // @synthesize maneuverPointRange=_maneuverPointRange;
@property(readonly, nonatomic) long long routeLegType; // @synthesize routeLegType=_routeLegType;
@property(readonly, nonatomic) struct _NSRange pointRange; // @synthesize pointRange=_pointRange;
@property(readonly, nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(readonly, nonatomic) GEOStep *geoStep; // @synthesize geoStep=_geoStep;
- (id)description;
- (id)firstNameOrBranch;
@property(readonly, nonatomic, getter=getNextStep) GEOComposedRouteStep *nextStep;
@property(readonly, nonatomic, getter=getPreviousStep) GEOComposedRouteStep *previousStep;
@property(readonly, nonatomic) unsigned int distance;
@property(readonly, nonatomic) unsigned int duration;
@property(readonly, nonatomic) BOOL hasDuration;
@property(readonly, nonatomic) CDStruct_c3b9c2ee endGeoCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee startGeoCoordinate;
@property(readonly, nonatomic) BOOL isUncertainArrival;
@property(readonly, nonatomic) unsigned int maneuverEndPointIndex;
@property(readonly, nonatomic) unsigned int maneuverStartPointIndex;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) unsigned int endPointIndex;
@property(readonly, nonatomic) unsigned int startPointIndex;
@property(readonly, nonatomic) int transportType;
- (void)dealloc;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(long long)arg3 stepIndex:(unsigned long long)arg4 pointRange:(struct _NSRange)arg5 maneuverPointRange:(struct _NSRange)arg6;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(long long)arg2 stepIndex:(unsigned long long)arg3 pointRange:(struct _NSRange)arg4;

@end

