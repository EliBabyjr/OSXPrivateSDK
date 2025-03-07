/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreWiFi/CoreWiFiIE.h>

@class NSData, NSMutableArray;

@interface CoreWiFiRSNIE : CoreWiFiIE
{
    NSData *oui;
    long long version;
    BOOL allowUnicastCipherTKIP;
    BOOL allowUnicastCipherCCMP;
    BOOL allowUnicastCipherUseGroup;
    BOOL allowMulticastCipherWEP40;
    BOOL allowMulticastCipherWEP104;
    BOOL allowMulticastCipherTKIP;
    BOOL allowMulticastCipherCCMP;
    BOOL allowKeyManagementPSK;
    BOOL allowKeyManagement8021X;
    NSMutableArray *pmkids;
    BOOL supportsPreAuthentication;
    BOOL hasNoPairwise;
    unsigned long long replayCounterPTKSA;
    unsigned long long replayCounterGTKSA;
    BOOL isPeerKeyEnabled;
}

@property(retain, nonatomic) NSMutableArray *pmkids; // @synthesize pmkids;
@property(nonatomic) BOOL allowKeyManagement8021X; // @synthesize allowKeyManagement8021X;
@property(nonatomic) BOOL allowKeyManagementPSK; // @synthesize allowKeyManagementPSK;
@property(nonatomic) BOOL allowMulticastCipherCCMP; // @synthesize allowMulticastCipherCCMP;
@property(nonatomic) BOOL allowMulticastCipherTKIP; // @synthesize allowMulticastCipherTKIP;
@property(nonatomic) BOOL allowMulticastCipherWEP104; // @synthesize allowMulticastCipherWEP104;
@property(nonatomic) BOOL allowMulticastCipherWEP40; // @synthesize allowMulticastCipherWEP40;
@property(nonatomic) BOOL allowUnicastCipherUseGroup; // @synthesize allowUnicastCipherUseGroup;
@property(nonatomic) BOOL allowUnicastCipherCCMP; // @synthesize allowUnicastCipherCCMP;
@property(nonatomic) BOOL allowUnicastCipherTKIP; // @synthesize allowUnicastCipherTKIP;
@property(nonatomic) BOOL isPeerKeyEnabled; // @synthesize isPeerKeyEnabled;
@property(nonatomic) unsigned long long replayCounterGTKSA; // @synthesize replayCounterGTKSA;
@property(nonatomic) unsigned long long replayCounterPTKSA; // @synthesize replayCounterPTKSA;
@property(nonatomic) BOOL hasNoPairwise; // @synthesize hasNoPairwise;
@property(nonatomic) BOOL supportsPreAuthentication; // @synthesize supportsPreAuthentication;
@property(readonly, nonatomic) long long version; // @synthesize version;
@property(retain, nonatomic) NSData *oui; // @synthesize oui;
- (void)setMulticastCipher:(unsigned char)arg1;
- (void)setUnicastCipher:(unsigned char)arg1;
- (void)setAKM:(unsigned char)arg1;
- (unsigned long long)parsePMKIDs:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseCapabilities:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseAKM:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parsePairwiseCipher:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseGroupCipher:(char *)arg1 withLength:(unsigned long long)arg2;
- (unsigned long long)parseVersion:(char *)arg1 withLength:(unsigned long long)arg2;
- (BOOL)parseIE:(id *)arg1;
- (void)generateMatchingConfig:(id)arg1;
- (void)generateIE;
- (unsigned short)countAKMs;
- (void)appendSuite:(id)arg1 cipher:(unsigned char)arg2;
- (unsigned short)countUnicastCiphers;
- (id)description;
- (void)dealloc;
- (id)initWithIE:(id)arg1 withOUI:(id)arg2;
- (id)init;

@end

