/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VideoConferenceRealTimeChannel-Protocol.h"

@class NSData, NSDictionary, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, TCPBufferPool;

// Not exported
@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel>
{
    int _connectState;
    int _connectedFD;
    int _isChannelBound;
    id _handler;
    id _allocationResponseHandler;
    id _terminationHandler;
    id _bindingResponseHandler;
    id _destroyHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> *_timer;
    float _fTimeout;
    NSString *_participantID;
    unsigned short _channelNumber;
    NSMutableDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    struct tagIPPORT _serverIPPort;
    NSData *_allocateReq;
    NSData *_channelBReq;
    double _allocationTimestamp;
    NSMutableData *_currentlyReadingMessage;
    long long _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    long long _currentPadding;
    char *_writeBuf;
    int _head;
    int _tail;
    TCPBufferPool *_bufferPool;
}

@property(copy) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy) id terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(copy) id destroyHandler; // @synthesize destroyHandler=_destroyHandler;
@property(copy) id bindingResponseHandler; // @synthesize bindingResponseHandler=_bindingResponseHandler;
@property(copy) id allocationResponseHandler; // @synthesize allocationResponseHandler=_allocationResponseHandler;
@property(copy) id receiveHandler; // @synthesize receiveHandler=_handler;
- (BOOL)isTunnelSocketClosed;
- (void)closeTunnelSocket;
- (void)unbindChannel;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (BOOL)sendRefreshMsg:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)sendChannelBindingMsgWithDict:(id)arg1 error:(id *)arg2;
- (BOOL)sendAllocateMsg:(id *)arg1;
- (unsigned int)connectionType;
- (void)finalize;
- (void)dealloc;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned int)arg2 relayType:(unsigned char)arg3 errorCode:(int *)arg4;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (void)processSocketReadSSL;
- (void)receivedControlData:(id)arg1;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(BOOL)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5;
- (void)processSocketWrite:(unsigned char)arg1;
- (void)sendTCPData:(const void *)arg1 bufSize:(int)arg2;
- (void)processSocketRead;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2;
- (void)destroyDispatchTimer;
- (void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5;
- (void)resetConnection;

@end

