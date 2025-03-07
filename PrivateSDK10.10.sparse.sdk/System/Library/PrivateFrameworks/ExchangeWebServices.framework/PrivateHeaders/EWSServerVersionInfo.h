/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EWSServerVersionInfo : NSObject
{
    long long _MajorBuildNumber;
    long long _MajorVersion;
    long long _MinorBuildNumber;
    long long _MinorVersion;
    NSString *_Version;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Version; // @synthesize Version=_Version;
@property(nonatomic) long long MinorVersion; // @synthesize MinorVersion=_MinorVersion;
@property(nonatomic) long long MinorBuildNumber; // @synthesize MinorBuildNumber=_MinorBuildNumber;
@property(nonatomic) long long MajorVersion; // @synthesize MajorVersion=_MajorVersion;
@property(nonatomic) long long MajorBuildNumber; // @synthesize MajorBuildNumber=_MajorBuildNumber;
- (void)dealloc;
- (id)description;
- (id)_newStringForMajorVersion:(long long)arg1;
- (BOOL)isLessThanMinimumSupportedVersion;

@end

