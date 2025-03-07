/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoKit/GeoKitPlace.h>

@class GEOCountry, NSNumber, NSString;

@interface GEOCity : GeoKitPlace
{
}

+ (id)cupertinoFromContext:(id)arg1;
+ (id)cityWithGeonameID:(unsigned long long)arg1 inContext:(id)arg2;
+ (id)reverseGeocodingWithLongitude:(double)arg1 latitude:(double)arg2 managedObjectContext:(id)arg3;
+ (id)_reverseGeocodingWithLongitude:(double)arg1 latitude:(double)arg2 longitudeSpan:(double)arg3 latitudeSpan:(double)arg4 managedObjectContext:(id)arg5;
+ (id)citiesWithTimeZoneName:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 resultType:(unsigned long long)arg5;
+ (id)citiesWhoseNameStartsWith:(id)arg1 managedObjectContext:(id)arg2 fetchLimit:(unsigned long long)arg3 resultType:(unsigned long long)arg4;
+ (id)citiesAtLongitude:(double)arg1 latitude:(double)arg2 longitudeSpan:(double)arg3 latitudeSpan:(double)arg4 timeZoneNamesScope:(id)arg5 managedObjectContext:(id)arg6 sortDescriptors:(id)arg7 fetchLimit:(unsigned long long)arg8 resultType:(unsigned long long)arg9;
+ (id)allCitiesInManagedObjectContext:(id)arg1 sortDescriptors:(id)arg2 fetchLimit:(unsigned long long)arg3 resultType:(unsigned long long)arg4;
+ (id)_predicateForTimeZoneSearch:(id)arg1 timeZoneNameKeyPath:(id)arg2;
+ (id)_predicateForPlaceSearchWithLongitude:(double)arg1 latitude:(double)arg2 longituteSpan:(double)arg3 latitudeSpan:(double)arg4 longitudeKeyPath:(id)arg5 latitudeKeyPath:(id)arg6;
+ (id)displayStringForCity:(id)arg1 regionalCode:(id)arg2 country:(id)arg3;
+ (id)citiesWhoseNameStartsWith:(id)arg1 regionalCode:(id)arg2 countryCode:(id)arg3 adaptive:(BOOL)arg4 managedObjectContext:(id)arg5;
+ (id)_citiesWithCountryCode:(id)arg1 managedObjectContext:(id)arg2;
+ (id)_citiesWithRegionalCode:(id)arg1 countryCode:(id)arg2 managedObjectContext:(id)arg3;
+ (id)_citiesWhoseNameStartsWith:(id)arg1 regionalCode:(id)arg2 countryCode:(id)arg3 managedObjectContext:(id)arg4;
+ (id)citiesWithPredicate:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3 fetchLimit:(unsigned long long)arg4 resultType:(unsigned long long)arg5;
+ (id)_sharedLegacyCountryNameConversionDictionary;
+ (id)cityWithLegacyDumpArray:(id)arg1;
+ (id)cityWithDumpDictionary:(id)arg1;
+ (id)_timeZonePrefBundle;
+ (id)systemCity;
- (id)timeZone;
- (id)bestNearbyCitiesMaxCount:(unsigned long long)arg1;
- (id)nearbyCitiesWithinLongitudeSpan:(double)arg1 latitudeSpan:(double)arg2 sortDescriptors:(id)arg3 fecthLimit:(unsigned long long)arg4;
- (id)displayShortTimeZoneString;
- (id)displayTimeZoneString;
- (id)displayNameAndCountry;
- (id)legacyDumpArray;
- (id)dumpDictionary;

// Remaining properties
@property(retain) GEOCountry *country; // @dynamic country;
@property(retain) NSNumber *elevation; // @dynamic elevation;
@property(retain) NSNumber *isCapital; // @dynamic isCapital;
@property(retain) NSString *regionalCode; // @dynamic regionalCode;
@property(retain) NSString *timeZoneName; // @dynamic timeZoneName;

@end

