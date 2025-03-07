/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpeechObjects/SOVoiceObject.h>

@class NSString;

@interface DownloadableVoice : SOVoiceObject
{
    unsigned long long _byteSize;
    NSString *_variant;
    NSString *_version;
    NSString *_tagName;
    NSString *_fullSizeBundleIdentifier;
    unsigned long long _fullSizeByteSize;
    NSString *_fullSizeTagName;
    NSString *_fullSizeVersion;
    BOOL _downloadFullSize;
}

@property(readonly) NSString *fullSizeVersion; // @synthesize fullSizeVersion=_fullSizeVersion;
@property BOOL downloadFullSize; // @synthesize downloadFullSize=_downloadFullSize;
@property(readonly) NSString *fullSizeTagName; // @synthesize fullSizeTagName=_fullSizeTagName;
@property(readonly) unsigned long long fullSizeByteSize; // @synthesize fullSizeByteSize=_fullSizeByteSize;
@property(readonly) NSString *fullSizeBundleIdentifier; // @synthesize fullSizeBundleIdentifier=_fullSizeBundleIdentifier;
@property(readonly, retain) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, retain) NSString *version; // @synthesize version=_version;
@property(readonly, retain) NSString *variant; // @synthesize variant=_variant;
@property(readonly) unsigned long long byteSize; // @synthesize byteSize=_byteSize;
- (id)displayedSize;
- (void)dealloc;
- (id)initWithVoiceID:(id)arg1 properties:(id)arg2;

@end

