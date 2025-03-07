/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FSPath, NSData, NSDictionary, NSString;

@interface VolumeInfo : NSObject
{
    NSString *_inspectedPath;
    FSPath *_mountPath;
    NSData *_uuid;
    NSString *_uuidString;
    NSString *_volumeName;
    NSString *_bsdName;
    NSDictionary *_rawDescription;
    int _deviceNumber;
    BOOL _supportsClonefile;
}

+ (BOOL)mapInode:(unsigned long long *)arg1 atPath:(id)arg2;
@property BOOL supportsClonefile; // @synthesize supportsClonefile=_supportsClonefile;
@property(readonly) int deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(retain, nonatomic) NSDictionary *rawDescription; // @synthesize rawDescription=_rawDescription;
@property(retain, nonatomic) NSString *bsdName; // @synthesize bsdName=_bsdName;
@property(retain, nonatomic) NSString *volumeName; // @synthesize volumeName=_volumeName;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) FSPath *mountPath; // @synthesize mountPath=_mountPath;
@property(retain, nonatomic) NSString *inspectedPath; // @synthesize inspectedPath=_inspectedPath;
- (void)dealloc;
- (id)description;
- (BOOL)isHFS;
- (unsigned long long)currentFSEventID;
- (id)fsEventStoreUUID;
- (BOOL)mapInode:(unsigned long long *)arg1 atVolumeRelativePath:(id)arg2;
- (id)mapPathFromInode:(unsigned long long)arg1;
- (id)initWithPathInVolume:(id)arg1;
- (void)refresh;
- (BOOL)setUpCachedVolumeInfo;
- (void)nulifyCachedVolumeInfo;
- (id)findAllNamesOfLinkAtPath:(id)arg1;
- (id)findAllNamesOfLinkAtInode:(unsigned long long)arg1;
- (id)mapPathOfHardLinkFromSpecialInode:(unsigned long long)arg1;

@end

