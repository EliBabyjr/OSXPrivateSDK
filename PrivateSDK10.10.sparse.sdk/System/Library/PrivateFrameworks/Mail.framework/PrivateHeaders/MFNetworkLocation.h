/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MFNetworkLocation : NSObject
{
    NSMutableDictionary *_accountDefaults;
    NSMutableDictionary *_domainsBySubnet;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_postChanged;
- (id)bestDeliveryAccountForAccount:(id)arg1 ignoreLockedDelivery:(BOOL)arg2;
- (void)setAccount:(id)arg1 deliveryAccount:(id)arg2;
- (id)deliveryAccountForAccount:(id)arg1;
- (BOOL)isForDomain:(id)arg1;
- (BOOL)isForIPAddress:(id)arg1;
- (id)subnets;
- (id)domains;
- (void)addDomains:(id)arg1 IPAddresses:(id)arg2;
- (id)archive;
- (id)initWithArchive:(id)arg1;
- (id)initWithDomains:(id)arg1 IPAddresses:(id)arg2;
- (id)init;

@end

