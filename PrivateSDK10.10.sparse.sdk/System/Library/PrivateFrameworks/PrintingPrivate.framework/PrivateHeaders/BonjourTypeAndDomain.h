/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface BonjourTypeAndDomain : NSObject
{
    NSString *type;
    NSString *domain;
}

+ (id)bonjourType:(id)arg1 domain:(id)arg2;
@property(retain) NSString *domain; // @synthesize domain;
@property(retain) NSString *type; // @synthesize type;
@property(readonly) BOOL fax; // @dynamic fax;
@property(readonly) BOOL local; // @dynamic local;
@property(readonly) BOOL shared; // @dynamic shared;
@property(readonly) BOOL secure; // @dynamic secure;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initBonjourType:(id)arg1 domain:(id)arg2;

@end

