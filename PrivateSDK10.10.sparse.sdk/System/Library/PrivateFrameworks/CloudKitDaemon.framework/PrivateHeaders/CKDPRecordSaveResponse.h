/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPDateStatistics, CKDPRecord, NSString;

// Not exported
@interface CKDPRecordSaveResponse : PBCodable <NSCopying>
{
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property(retain, nonatomic) CKDPRecord *serverFields; // @synthesize serverFields=_serverFields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasServerFields;
@property(readonly, nonatomic) BOOL hasTimeStatistics;
@property(readonly, nonatomic) BOOL hasEtag;

@end

