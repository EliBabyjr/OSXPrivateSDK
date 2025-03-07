/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IOHDAudioCodecDeviceUserClient : NSObject
{
    unsigned int gMasterPort;
    unsigned int gDriverObject;
    unsigned int gDataPort;
    unsigned char ucTestBuffer[16384];
    unsigned char ucSecondaryTestBuffer[16384];
    unsigned char ucStickyStatusBuffer[16384];
    unsigned int mCodecUserClientIndex;
    unsigned int mControllerUserClientIndex;
    CDStruct_15e3c77a *mHDAInterruptCountInfoPtr;
    CDStruct_d9ed2e53 *mRegPtr;
    CDStruct_5fc0065f *mRegElapsedPtr;
    CDStruct_b2428c19 *mEdidPtr;
    unsigned char appleHDAControllerUserClientBuffer[4096];
    unsigned char iOHDACodecDeviceUserClientBuffer[4096];
    unsigned char appleHDADriverUserClientBuffer[4096];
    unsigned char appleHDA_UserClientBuffer[4096];
}

- (int)powerUpAppleGraphicsController;
- (int)setAppleHDADriver_retaskMode:(unsigned int)arg1 access:(unsigned int)arg2;
- (void)getAppleHDADriver_retaskMode:(unsigned int *)arg1 access:(unsigned int *)arg2;
- (int)setAppleHDADriver_loggingMessageMode:(unsigned int)arg1;
- (unsigned int)getAppleHDADriver_loggingMessageMode;
- (int)setAppleHDADriver_allMicsMode:(unsigned int)arg1;
- (unsigned int)getAppleHDADriver_allMicsMode;
- (int)setAppleHDADriver_dspMode:(unsigned int)arg1 input:(_Bool)arg2 output:(_Bool)arg3;
- (int)setAppleHDADriver_spiRead:(unsigned short)arg1 register:(unsigned short)arg2 data:(unsigned int *)arg3;
- (int)setAppleHDADriver_spiWrite:(unsigned short)arg1 register:(unsigned short)arg2 data:(unsigned int)arg3;
- (int)setAppleHDADriver_spiConfig:(unsigned int)arg1;
- (int)getAppleHDADriver_spiConfig:(unsigned int *)arg1;
- (unsigned int)getAppleHDADriver_dspMode:(_Bool)arg1;
- (int)setAppleHDADriver_pollMode:(unsigned int)arg1;
- (unsigned int)getAppleHDADriver_pollMode;
- (int)setAppleHDADriver_diagsLockMode:(unsigned int)arg1;
- (int)getAppleHDADriver_diagsLockMode:(unsigned int *)arg1;
- (int)setAppleHDADriver_afgPowerMode:(unsigned int)arg1;
- (int)getAppleHDADriver_afgPowerMode:(unsigned int *)arg1;
- (int)setAppleHDADriver_afgLowPowerMode:(unsigned int)arg1;
- (int)getAppleHDADriver_afgLowPowerMode:(unsigned int *)arg1;
- (int)getDMICClkDrivingStrength:(unsigned int *)arg1;
- (int)getControllerVendorID:(unsigned short *)arg1 andProductID:(unsigned short *)arg2;
- (CDStruct_b2428c19 *)get_mEdidPtr;
- (CDStruct_5fc0065f *)get_mRegElapsedPtr;
- (CDStruct_d9ed2e53 *)get_mRegPtr;
- (CDStruct_15e3c77a *)get_mHDAInterruptCountInfoPtr;
- (int)getHighDefinitionAudioControllerMaxBusStallEnable:(unsigned int *)arg1;
- (int)enableHighDefinitionAudioControllerMaxBusStall:(unsigned int)arg1;
- (int)writeHighDefinitionAudioControllerMaxBusStall:(unsigned int)arg1;
- (int)readHighDefinitionAudioControllerMaxBusStall:(unsigned int *)arg1;
- (int)getCodecAddress:(unsigned int *)arg1;
- (int)transactVerbAndResponse:(unsigned int)arg1 verb:(unsigned int)arg2 payload:(unsigned int)arg3 responsePtr:(unsigned int *)arg4;
- (int)writeHighDefinitionAudioControllerRegisters;
- (int)getBDL:(int)arg1 bdlEStructPtr:(CDStruct_02b1acbf *)arg2;
- (int)readEDID;
- (int)readHighDefintionAudioControllerStickyStatus:(unsigned int *)arg1;
- (int)readElapsedHighDefinitionAudioControllerRegisters;
- (int)readHighDefinitionAudioControllerRegisters;
- (int)getHDAInterruptCountInfo;
- (void)parseErrorCode:(unsigned int)arg1;
- (int)setState:(unsigned int)arg1 sel:(unsigned int)arg2 subSel:(unsigned int)arg3 value:(unsigned int)arg4 value2:(unsigned int)arg5 value3:(unsigned int)arg6 bufferPtr:(void *)arg7;
- (int)getState:(unsigned int)arg1 sel:(unsigned int)arg2 subSel:(unsigned int)arg3 value:(unsigned int)arg4 value2:(unsigned int)arg5 value3:(unsigned int)arg6 bufferPtr:(void *)arg7;
- (void)TearDownUserClient;
- (int)setControllerUserClientIndex:(unsigned int)arg1;
- (int)setCodecUserClientIndex:(unsigned int)arg1;
- (unsigned int)getCountOfUserClients:(unsigned int)arg1;
- (_Bool)checkCodecExistsForController:(unsigned int)arg1 Vendor:(unsigned int)arg2;
- (int)getCodecID:(unsigned int *)arg1 Vendor:(unsigned int *)arg2;
- (void *)getProperty:(struct __CFString *)arg1;
- (int)SetupUserClient:(unsigned int)arg1 index:(unsigned int)arg2;
- (int)SetupUserClient:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

