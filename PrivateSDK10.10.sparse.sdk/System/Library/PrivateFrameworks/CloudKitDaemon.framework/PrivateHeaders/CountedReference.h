/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface CountedReference : NSObject
{
    BOOL _didScheduleDealloc;
    id _referencedObject;
    NSString *_name;
    unsigned long long _referenceCount;
}

@property(nonatomic) BOOL didScheduleDealloc; // @synthesize didScheduleDealloc=_didScheduleDealloc;
@property(nonatomic) unsigned long long referenceCount; // @synthesize referenceCount=_referenceCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id referencedObject; // @synthesize referencedObject=_referencedObject;
- (void).cxx_destruct;

@end

