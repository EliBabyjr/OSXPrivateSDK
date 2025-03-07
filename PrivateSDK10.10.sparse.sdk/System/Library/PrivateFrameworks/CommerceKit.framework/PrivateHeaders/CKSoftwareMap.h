/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommerceKit/CKServiceInterface.h>

@class NSLock, NSMutableArray;

@interface CKSoftwareMap : CKServiceInterface
{
    NSMutableArray *_observers;
    NSLock *_observersLock;
}

+ (id)sharedSoftwareMap;
- (void).cxx_destruct;
- (id)adaptableBundleIdentifiers;
- (BOOL)adoptionCompletedForBundleID:(id)arg1 adoptingDSID:(out id *)arg2 appleID:(out id *)arg3;
- (id)updateRequestBodyData:(char *)arg1 includeInstalledApps:(BOOL)arg2 includeBundledApps:(BOOL)arg3 conditionally:(BOOL)arg4 hadUnadoptedApps:(out char *)arg5;
- (id)iconForApplicationWithBundeID:(id)arg1;
- (id)bundleInfoFromBundleAtPath:(id)arg1;
- (BOOL)isTrialVersionOfBundleIdentifier:(id)arg1;
- (id)receiptFromBundleAtPath:(id)arg1;
- (id)productForPath:(id)arg1;
- (id)allProducts;
- (id)productForItemIdentifier:(unsigned long long)arg1;
- (id)productForBundleIdentifier:(id)arg1;
- (void)removeProductsObserver:(id)arg1;
- (id)addProductsObserver:(id)arg1 queue:(void)arg2;
- (id)initWithStoreClient:(id)arg1;

@end

