/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IFDiskManager : NSObject
{
}

+ (id)mountPointForPath:(id)arg1;
+ (BOOL)pathOnLocalVolume:(id)arg1;
+ (BOOL)rootVolumeIsReadOnly;
+ (BOOL)volumeAtPathIsReadOnly:(id)arg1;
+ (id)manager;
+ (void)initialize;
+ (void)setTypeForSession:(Class)arg1;
- (BOOL)diskIsAnImgsrc:(id)arg1;
- (unsigned long long)sizeOfImgsrcHierarchy;
- (id)imgsrcDiskAtLevel:(unsigned long long)arg1;
- (BOOL)isAnticipatingMoreDisks;
- (id)pathIsRemovable:(id)arg1;
- (id)_diskDictForIdentifier:(id)arg1;
- (id)mountPointForPath:(id)arg1;
- (id)fileSystemLocalizationForFileSystem:(id)arg1;
- (BOOL)checkDisksMediaReadOnly:(id)arg1;
- (id)wholeDiskForDisk:(id)arg1;
- (id)disksForLogicalVolumeGroup:(id)arg1;
- (id)diskForPath:(id)arg1;
- (id)diskForDiskSpecifier:(id)arg1;
- (id)diskForDiskIdentifier:(id)arg1;
- (id)disks;
- (id)allMountedVolumes;
- (id)allMountedVolumesIncludingSystemImages:(BOOL)arg1;
- (id)volumeAtPath:(id)arg1;
- (id)rootVolume;
- (BOOL)renameDisk:(id)arg1 toName:(id)arg2;
- (BOOL)mountDisk:(id)arg1;
- (BOOL)unmountAllDisksExceptDisk:(id)arg1;
- (BOOL)unmountDisk:(id)arg1;
- (BOOL)ejectDisk:(id)arg1;
- (void)releaseDisk:(id)arg1;
- (BOOL)reserveDisk:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)daIdle;
- (void)daDiskDisappeared:(struct __DADisk *)arg1;
- (void)daDiskChanged:(struct __DADisk *)arg1;
- (void)daDiskAppeared:(struct __DADisk *)arg1;
- (void)csDiskTerminated:(id)arg1;
- (void)csLVGTerminated:(id)arg1;
- (void)csDiskChanged:(id)arg1;
- (void)csDiskAppeared:(id)arg1;
- (BOOL)disablePermissionsOnDisk:(id)arg1;
- (void)enablePermissionsOnDisk:(id)arg1;
- (void)finalizeDisk:(id)arg1;
- (int)prepareDisk:(id)arg1;

@end

