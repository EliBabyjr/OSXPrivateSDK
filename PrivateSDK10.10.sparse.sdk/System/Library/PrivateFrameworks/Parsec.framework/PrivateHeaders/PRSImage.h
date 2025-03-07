/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSData, NSImage, NSMutableArray, NSString, NSURL;

@interface PRSImage : NSObject <NSSecureCoding>
{
    NSMutableArray *_completionBlocks;
    NSImage *_preloadedImage;
    BOOL _loaded;
    BOOL _isTemplate;
    NSImage *_image;
    NSString *_identifier;
    NSString *_dataType;
    NSData *_data;
    NSURL *_url;
}

+ (BOOL)supportsSecureCoding;
+ (id)converterBlock;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *dataType; // @synthesize dataType=_dataType;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL isTemplate; // @synthesize isTemplate=_isTemplate;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)loadImageWithSource:(id)arg1 scaleFactor:(double)arg2 completion:(id)arg3;
- (void)preloadImageWithSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

