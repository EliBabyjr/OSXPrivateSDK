/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface ISS_DAVXMLNSBag : NSObject
{
    NSMutableDictionary *tagMapping;
    NSMutableDictionary *_tagObjects;
    NSMutableDictionary *allNS;
    unsigned int nsCounter;
    void *reserved1;
}

+ (void)registerNSTags:(id)arg1 withNamespace:(id)arg2;
+ (id)namespaceForTag:(id)arg1;
+ (id)_smartTagForTag:(id)arg1;
+ (void)initialize;
- (id)allXMLNSAttributes;
- (id)tagForNSTag:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)registerLocalNSTag:(id)arg1 withNamespace:(id)arg2;

@end

