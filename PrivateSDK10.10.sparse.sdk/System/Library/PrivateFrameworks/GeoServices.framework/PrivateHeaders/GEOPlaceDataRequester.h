/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOServiceRequester.h>

// Not exported
@interface GEOPlaceDataRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;
+ (id)_serviceTypeNumber;
+ (unsigned long long)_urlType;
- (id)_validateResponse:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(id)arg3;

@end

