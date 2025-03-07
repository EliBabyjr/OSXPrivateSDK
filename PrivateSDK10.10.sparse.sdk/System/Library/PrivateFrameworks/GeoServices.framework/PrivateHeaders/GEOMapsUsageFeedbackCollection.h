/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    int _actionType;
    GEOCarInfo *_carInfo;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    int _sequenceNumber;
    struct {
        unsigned int sessionID:1;
        unsigned int sessionRelativeTimestamp:1;
        unsigned int zoomLevel:1;
        unsigned int actionType:1;
        unsigned int sequenceNumber:1;
    } _has;
}

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasZoomLevel;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(readonly, nonatomic) BOOL hasCarInfo;
@property(readonly, nonatomic) BOOL hasPlaceActionDetails;
@property(nonatomic) BOOL hasSessionRelativeTimestamp;
@property(nonatomic) BOOL hasActionType;
@property(nonatomic) BOOL hasSessionID;
- (void)dealloc;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

@end

