/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HDAInterface/HDAInterface.h>

@interface HDAMikeyInterface : HDAInterface
{
    _Bool mInternalMikey;
}

- (unsigned int)lookup_device:(const char *)arg1 Name:(const char *)arg2;
- (int)setupNewUserClient:(const char *)arg1 builtIn:(_Bool)arg2;
- (int)setState:(unsigned int)arg1 subSel:(unsigned int)arg2 value3:(unsigned int)arg3 value4:(unsigned int)arg4 value5:(unsigned int)arg5 bufferPtr:(void *)arg6;
- (int)getState:(unsigned int)arg1 subSel:(unsigned int)arg2 value3:(unsigned int)arg3 value4:(unsigned int)arg4 value5:(unsigned int)arg5 bufferPtr:(void *)arg6;
- (int)ldoState:(char *)arg1;
- (int)chinaHeadsetMode:(_Bool *)arg1;
- (int)mikeyType:(unsigned int *)arg1;
- (int)peripheralDetect:(_Bool *)arg1;
- (int)supportsChinaHeadset:(_Bool *)arg1;
- (_Bool)available;
- (void)tearDownUserClient;
- (int)setupUserClient;
- (void)dealloc;
- (id)init;

@end

