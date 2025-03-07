/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VCJitterBuffer : NSObject
{
    void *pRTPContext;
    struct tagHANDLE *rtpHandle;
    struct _opaque_pthread_mutex_t teardownMutex;
    double prevReceivedAudioTime;
}

- (BOOL)pullAudioSamples:(char *)arg1 timestamp:(unsigned int *)arg2 byteCount:(int *)arg3 sampleCount:(int *)arg4 sampleRate:(int *)arg5 receivedBytes:(int *)arg6 lastReceivedAudioTime:(double *)arg7 padding:(char *)arg8 paddingLength:(char *)arg9 silence:(int *)arg10;
- (void)dealloc;
- (void)invalidateHandle;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1;

@end

