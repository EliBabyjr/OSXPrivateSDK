/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface GEORPPlaceProblem : PBCodable <NSCopying>
{
    unsigned int _componentIndex;
    unsigned int _componentValueIndex;
    struct {
        unsigned int componentIndex:1;
        unsigned int componentValueIndex:1;
    } _has;
}

@property(nonatomic) unsigned int componentValueIndex; // @synthesize componentValueIndex=_componentValueIndex;
@property(nonatomic) unsigned int componentIndex; // @synthesize componentIndex=_componentIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasComponentValueIndex;
@property(nonatomic) BOOL hasComponentIndex;

@end

