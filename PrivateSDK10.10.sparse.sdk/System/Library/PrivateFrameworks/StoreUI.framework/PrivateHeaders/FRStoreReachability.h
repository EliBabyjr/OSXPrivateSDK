/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FRStoreReachability : NSObject
{
    struct __SCNetworkReachability *_reachRef;
}

+ (BOOL)isStoreReachable;
+ (id)sharedInstance;
- (BOOL)_isStoreReachable;
- (BOOL)_isReachableWithFlags:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

