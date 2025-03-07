/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DSMDataStream-Protocol.h"
#import "NSCoding-Protocol.h"

@class DSMDataStreamDescription, NSArray, NSString;

@interface DSMBasicDataStream : NSObject <DSMDataStream, NSCoding>
{
    int _dataStreamType;
    DSMDataStreamDescription *_dataStreamDescription;
    NSArray *_dataStreamElements;
}

@property(readonly) int dataStreamType; // @synthesize dataStreamType=_dataStreamType;
@property(readonly) NSArray *dataStreamElements; // @synthesize dataStreamElements=_dataStreamElements;
@property(readonly) DSMDataStreamDescription *dataStreamDescription; // @synthesize dataStreamDescription=_dataStreamDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addStreamDataElement:(id)arg1;
- (id)_initWithDataStream:(id)arg1;
- (id)initWithDataStreamDescription:(id)arg1 andDataStreamType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

