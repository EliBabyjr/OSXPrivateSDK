/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <vCard/CNVCardLineFactory-Protocol.h>

@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>
{
}

+ (id)version21LineFactory;
+ (id)version30LineFactory;
- (id)versionPlaceholderLine;
- (id)lineWithLiteralValue:(id)arg1;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)stringLineWithName:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

