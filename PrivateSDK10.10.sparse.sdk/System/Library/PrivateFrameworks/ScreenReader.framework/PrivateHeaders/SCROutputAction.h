/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCRCIndexMap, SCROffsetMappedString;

@interface SCROutputAction : NSObject <NSCopying, NSCoding>
{
    NSString *_category;
    NSString *_component;
    int _message;
    SCRCIndexMap *_variants;
    int _synchronization;
    SCROffsetMappedString *_offsetMappedString;
    BOOL _hasBeenDispatched;
    BOOL _hasBeenExecuted;
    unsigned long long _uniqueID;
}

- (id)shortDescriptionReversed;
- (id)shortDescription;
- (id)description;
- (unsigned long long)uniqueID;
- (BOOL)hasBeenExecuted;
- (BOOL)hasBeenDispatched;
- (int)synchronization;
- (id)offsetMappedString;
- (id)string;
- (id)objectForIndex:(int)arg1;
- (id)variants;
- (int)message;
- (id)component;
- (id)category;
- (void)addVariants:(id)arg1;
- (void)setVariants:(id)arg1;
- (void)setHasBeenExecuted:(BOOL)arg1;
- (void)setHasBeenDispatched:(BOOL)arg1;
- (void)setSynchronization:(int)arg1;
- (void)setVariant:(id)arg1 forKey:(int)arg2;
- (void)setOriginalAttributedString:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setMessage:(int)arg1;
- (void)setComponent:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initBrailleActionWithMessage:(int)arg1 variants:(id)arg2;
- (id)initSoundActionWithMessage:(int)arg1 soundIdentifier:(id)arg2;
- (id)initTextDisplayActionWithMessage:(int)arg1 string:(id)arg2 variant:(int)arg3;
- (id)initSpeechActionWithMessage:(int)arg1 string:(id)arg2 variant:(int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithOutputAction:(id)arg1;
- (void)dealloc;
- (id)init;

@end

