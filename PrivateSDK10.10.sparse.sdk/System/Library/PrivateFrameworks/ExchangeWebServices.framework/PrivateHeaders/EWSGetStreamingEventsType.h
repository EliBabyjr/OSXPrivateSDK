/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSGetStreamingEventsType : EWSBaseRequestType
{
    NSArray *_SubscriptionIds;
    long long _ConnectionTimeout;
}

+ (id)definition;
@property(nonatomic) long long ConnectionTimeout; // @synthesize ConnectionTimeout=_ConnectionTimeout;
@property(copy, nonatomic) NSArray *SubscriptionIds; // @synthesize SubscriptionIds=_SubscriptionIds;
- (void)dealloc;

@end

