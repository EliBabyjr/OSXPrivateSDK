/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, NSData, NSMutableArray, NSString;

@interface GEOSuggestionEntry : PBCodable <NSCopying>
{
    CDStruct_97e972fa *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
}

@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSString *calloutTitle; // @synthesize calloutTitle=_calloutTitle;
@property(retain, nonatomic) NSString *searchQueryDisplayString; // @synthesize searchQueryDisplayString=_searchQueryDisplayString;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) GEOLatLng *latlng; // @synthesize latlng=_latlng;
@property(retain, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property(retain, nonatomic) NSMutableArray *displayLines; // @synthesize displayLines=_displayLines;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)addNamedFeature:(id)arg1;
- (void)clearNamedFeatures;
@property(readonly, nonatomic) BOOL hasCalloutTitle;
@property(readonly, nonatomic) BOOL hasSearchQueryDisplayString;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasLatlng;
@property(readonly, nonatomic) BOOL hasIconID;
- (void)setTextHighlights:(CDStruct_97e972fa *)arg1 count:(unsigned long long)arg2;
- (CDStruct_97e972fa)textHighlightsAtIndex:(unsigned long long)arg1;
- (void)addTextHighlights:(CDStruct_97e972fa)arg1;
- (void)clearTextHighlights;
@property(readonly, nonatomic) CDStruct_97e972fa *textHighlights;
@property(readonly, nonatomic) unsigned long long textHighlightsCount;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLinesCount;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (void)dealloc;

@end

