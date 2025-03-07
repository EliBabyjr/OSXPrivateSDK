/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVCore/AVExtendedOperation.h>

@class NSData, VCChannel, _GetVCChannelOp;

@interface VCChannelNegotiationOp : AVExtendedOperation
{
    unsigned int _message;
    _GetVCChannelOp *_channelOp;
}

@property unsigned int message; // @synthesize message=_message;
- (void)dealloc;
@property(readonly, retain) NSData *connectionData;
@property(readonly, retain) VCChannel *vcChannel;
- (id)initWithNegotiation:(id)arg1 message:(unsigned int)arg2;
- (void)_createChildOpsWithIMHandle:(id)arg1;

@end

