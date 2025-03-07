/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDImmutableObject-Protocol.h"
#import "NSCopying-Protocol.h"

@class EDPhoneticInfo, EDRunsCollection, NSString;

// Not exported
@interface EDString : NSObject <NSCopying, EDImmutableObject>
{
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    _Bool mDoNotModify;
}

+ (id)edStringWithString:(id)arg1 runs:(id)arg2;
+ (id)edStringWithString:(id)arg1;
+ (id)string;
- (void)setDoNotModify:(_Bool)arg1;
- (void)setRuns:(id)arg1;
- (id)runs;
- (void)setPhoneticInfo:(id)arg1;
- (id)phoneticInfo;
- (void)appendString:(id)arg1;
- (void)prependString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEDString:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)init;
- (_Bool)isEmpty;
- (id)firstRunFont;
- (_Bool)areThereRuns;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

