/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, GEOMapItemStorage, NSString, PBUnknownFields;

@interface MSPPlaceBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_droppedPinCoordinate;
    GEOMapItemStorage *_mapItemStorage;
    int _origin;
    NSString *_title;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *droppedPinCoordinate; // @synthesize droppedPinCoordinate=_droppedPinCoordinate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDroppedPinCoordinate;
@property(readonly, nonatomic) BOOL hasTitle;
@property(nonatomic) BOOL hasOrigin;
@property(readonly, nonatomic) BOOL hasMapItemStorage;

@end

