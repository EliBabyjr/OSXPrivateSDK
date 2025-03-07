/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject
{
    double _machTime;
    unsigned long long _activityId;
}

@property(readonly) unsigned long long activityId; // @synthesize activityId=_activityId;
@property(readonly) double machTime; // @synthesize machTime=_machTime;
- (BOOL)isEqual:(id)arg1;
- (long long)compareToOtherMessage:(id)arg1;
@property(readonly) NSString *message;
- (id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2;

@end

