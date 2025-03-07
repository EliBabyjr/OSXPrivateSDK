/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOMapRegion, NSString;

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    CDStruct_3f74b7eb *_featureHandles;
    unsigned long long _featureHandlesCount;
    unsigned long long _featureHandlesSpace;
    NSString *_correctedValue;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
}

@property(retain, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property(retain, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property(retain, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setFeatureHandles:(CDStruct_3f74b7eb *)arg1 count:(unsigned long long)arg2;
- (CDStruct_3f74b7eb)featureHandleAtIndex:(unsigned long long)arg1;
- (void)addFeatureHandle:(CDStruct_3f74b7eb)arg1;
- (void)clearFeatureHandles;
@property(readonly, nonatomic) CDStruct_3f74b7eb *featureHandles;
@property(readonly, nonatomic) unsigned long long featureHandlesCount;
@property(readonly, nonatomic) BOOL hasFeatureRegion;
@property(readonly, nonatomic) BOOL hasCorrectedValue;
@property(readonly, nonatomic) BOOL hasOriginalValue;
- (void)dealloc;

@end

