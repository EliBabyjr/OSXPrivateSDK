/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface IDSSocketPairMessage : NSObject
{
    NSData *_underlyingData;
    unsigned char _command;
    id <NSObject> _context;
}

+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) unsigned char command; // @synthesize command=_command;
@property(readonly, retain, nonatomic) NSData *underlyingData; // @synthesize underlyingData=_underlyingData;
- (id)_existingUnderlyingData;
@property(readonly, nonatomic) unsigned long long underlyingDataLength;
- (id)_nonHeaderData;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

