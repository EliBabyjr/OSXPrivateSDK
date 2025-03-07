/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSData, NSString, NSURL;

@interface SAUIImageResource : AceObject <SAAceSerializable>
{
}

+ (id)imageResourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)imageResource;
@property(nonatomic) double scaleFactor;
@property(copy, nonatomic) NSURL *resourceUrl;
@property(nonatomic) double pointWidth;
@property(nonatomic) double pointHeight;
@property(copy, nonatomic) NSData *imageData;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

