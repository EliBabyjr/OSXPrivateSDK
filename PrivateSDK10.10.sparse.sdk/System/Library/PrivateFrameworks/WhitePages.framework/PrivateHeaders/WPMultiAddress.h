/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABMultiValue, NSMutableArray;

@interface WPMultiAddress : NSObject
{
    ABMultiValue *_abAddresses;
    NSMutableArray *_addresses;
}

+ (id)multiAddressWithABPerson:(id)arg1;
+ (id)multiAddressWithPerson:(id)arg1;
+ (id)multiAddressWithAddresses:(id)arg1;
- (void)replaceAddress:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)localizedAddressStringAtIndex:(unsigned long long)arg1;
- (id)allAddresses;
- (id)addressesForLabel:(id)arg1;
- (id)allLabels;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initMultiAddressWithABPerson:(id)arg1;
- (id)initMultiAddressWithPerson:(id)arg1;
- (id)initMultiAddressWithAddresses:(id)arg1;

@end

