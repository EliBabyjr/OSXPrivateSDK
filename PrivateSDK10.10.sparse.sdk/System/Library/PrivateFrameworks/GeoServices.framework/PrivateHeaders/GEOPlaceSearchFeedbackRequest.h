/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct {
        unsigned int sessionGUID:1;
        unsigned int businessID:1;
        unsigned int timestamp:1;
        unsigned int feedbackType:1;
        unsigned int localSearchProviderID:1;
        unsigned int numberOfResults:1;
        unsigned int positionInResults:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) int positionInResults; // @synthesize positionInResults=_positionInResults;
@property(nonatomic) int numberOfResults; // @synthesize numberOfResults=_numberOfResults;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) CDStruct_612aec5b sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasPositionInResults;
@property(nonatomic) BOOL hasNumberOfResults;
@property(nonatomic) BOOL hasFeedbackType;
@property(nonatomic) BOOL hasBusinessID;
@property(nonatomic) BOOL hasSessionGUID;
@property(nonatomic) BOOL hasTimestamp;

@end

