/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSData;

@interface Transaction : NSObject <NSSecureCoding>
{
    unsigned long long _transactionType;
    NSData *_record;
}

+ (BOOL)supportsSecureCoding;
+ (id)toString:(unsigned long long)arg1;
@property(retain) NSData *record; // @synthesize record=_record;
@property unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 andRecord:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2;

@end

