/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/PFCommon.h>

@interface PFPackage : PFCommon
{
}

+ (id)packageWithURL:(id)arg1 error:(id *)arg2;
+ (id)cachedPackageWithURL:(id)arg1;
- (int)capabilities;
- (BOOL)hasCapability:(int)arg1;
- (id)createReceipt:(id)arg1 withPlan:(id)arg2;
- (id)taskToCreateReceipt:(id)arg1 withPlan:(id)arg2;
- (int)extractPayloadWithPlan:(id)arg1 toDirectory:(id)arg2;
- (int)extractPayloadFiles:(struct __CFArray *)arg1 toDirectory:(id)arg2;
- (int)extractPayloadToDirectory:(id)arg1;
- (id)taskForExtractionWithPlan:(id)arg1 toDirectory:(id)arg2;
- (id)taskForExtraction:(struct __CFArray *)arg1 toDirectory:(id)arg2;
- (id)taskForExtraction:(id)arg1;
- (id)runAction:(id)arg1 withContextDictionary:(id)arg2 localization:(id)arg3;
- (id)taskForAction:(id)arg1 withContextDictionary:(id)arg2;
- (BOOL)hasAction:(id)arg1;
- (void)dealloc;
- (id)initWithModule:(Class)arg1 forLocation:(id)arg2 error:(id *)arg3;

@end

