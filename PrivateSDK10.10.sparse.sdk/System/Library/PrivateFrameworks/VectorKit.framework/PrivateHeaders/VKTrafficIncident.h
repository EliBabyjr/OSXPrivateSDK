/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface VKTrafficIncident : NSObject <NSCopying>
{
    struct VKPoint _worldPoint;
    NSString *_title;
    NSString *_subtitle;
    long long _type;
    long long _routeRelevance;
    long long _significance;
    BOOL _isNotForDisplay;
    BOOL _isOnSelectedRoute;
    struct PolylineCoordinate _routeOffset;
    unsigned int _routeOffsetInMeters;
    CDStruct_2c43369c _location;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    float _minZoom;
    float _maxZoom;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
}

@property(readonly, nonatomic) long long significance; // @synthesize significance=_significance;
@property(readonly, nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(readonly, nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(readonly, nonatomic) struct VKPoint worldPoint; // @synthesize worldPoint=_worldPoint;
@property(readonly, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *crossStreet; // @synthesize crossStreet=_crossStreet;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
@property(nonatomic) unsigned int routeOffsetInMeters; // @synthesize routeOffsetInMeters=_routeOffsetInMeters;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(nonatomic) BOOL isOnSelectedRoute; // @synthesize isOnSelectedRoute=_isOnSelectedRoute;
@property(nonatomic) long long routeRelevance; // @synthesize routeRelevance=_routeRelevance;
@property(readonly, nonatomic) BOOL isNotForDisplay; // @synthesize isNotForDisplay=_isNotForDisplay;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *uniqueString; // @synthesize uniqueString=_uniqueString;
@property(readonly, nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;
- (id)initWithIncident:(id)arg1 vertices:(CDStruct_912cb5d2 *)arg2 tileRect:(CDStruct_d2b197d1)arg3 tileSize:(double)arg4;
- (id)initWithIncidentData:(const struct Incident *)arg1 worldPoint:(struct VKPoint *)arg2;
- (BOOL)hasSameIdentifier:(id)arg1;

@end

