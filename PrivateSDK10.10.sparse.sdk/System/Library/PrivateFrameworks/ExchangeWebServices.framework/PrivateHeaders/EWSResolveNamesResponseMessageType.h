/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSResolveNamesResponseMessageType : EWSResponseMessageType
{
    NSArray *_ResolutionSet;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *ResolutionSet; // @synthesize ResolutionSet=_ResolutionSet;
- (void)dealloc;

@end

