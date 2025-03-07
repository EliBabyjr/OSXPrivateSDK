/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString;

// Not exported
@interface WBSRecentWebSearchEntry : NSObject
{
    NSString *_searchString;
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;

@end

