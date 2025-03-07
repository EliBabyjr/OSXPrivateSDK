/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray *_vertexs;
    struct {
        unsigned int eastLng:1;
        unsigned int northLat:1;
        unsigned int southLat:1;
        unsigned int westLng:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *vertexs; // @synthesize vertexs=_vertexs;
@property(nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property(nonatomic) double northLat; // @synthesize northLat=_northLat;
@property(nonatomic) double westLng; // @synthesize westLng=_westLng;
@property(nonatomic) double southLat; // @synthesize southLat=_southLat;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexsCount;
- (void)addVertex:(id)arg1;
- (void)clearVertexs;
@property(nonatomic) BOOL hasEastLng;
@property(nonatomic) BOOL hasNorthLat;
@property(nonatomic) BOOL hasWestLng;
@property(nonatomic) BOOL hasSouthLat;
- (void)dealloc;
- (BOOL)containsMapRect:(CDStruct_02837cd9)arg1;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) double spanLng;
@property(readonly, nonatomic) double spanLat;
@property(readonly, nonatomic) double centerLng;
@property(readonly, nonatomic) double centerLat;
- (void)setMapRect:(CDStruct_02837cd9)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1;
- (id)initWithCoordinateRegion:(CDStruct_02837cd9)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;

@end

