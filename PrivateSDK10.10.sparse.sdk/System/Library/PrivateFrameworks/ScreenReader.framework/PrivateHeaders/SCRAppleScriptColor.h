/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface SCRAppleScriptColor : NSObject
{
    NSArray *_colors;
}

+ (id)scriptingRGBColorWithDescriptor:(id)arg1;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void)dealloc;
- (id)scriptingRGBColorDescriptor;

@end

