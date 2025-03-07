/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, NSMutableArray, NSString;

// Not exported
@interface CKDPRecordSaveRequest : PBRequest <NSCopying>
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    int _saveSemantics;
    NSString *_zoneProtectionInfoTag;
    BOOL _merge;
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property(retain, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property(nonatomic) BOOL merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)clearConflictLosersToResolves;
@property(readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property(readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property(nonatomic) BOOL hasSaveSemantics;
@property(nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property(readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property(readonly, nonatomic) BOOL hasEtag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)clearFieldsToDeleteIfExistOnMerges;
@property(nonatomic) BOOL hasMerge;
@property(readonly, nonatomic) BOOL hasRecord;

@end

