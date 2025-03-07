/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CFRRating : NSObject
{
    NSString *_localizedName;
    NSString *_localizedShortName;
    long long _rank;
}

+ (id)ratingFromDictionary:(id)arg1;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToRating:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

