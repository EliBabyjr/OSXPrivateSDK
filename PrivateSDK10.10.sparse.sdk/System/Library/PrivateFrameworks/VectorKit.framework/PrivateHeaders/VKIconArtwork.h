/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, VKImage;

// Not exported
@interface VKIconArtwork : NSObject
{
    BOOL _hasIcon;
    VKImage *_image;
    double _contentScale;
    NSMutableArray *_completionHandlers;
}

@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (void)getImage:(id)arg1;
- (id)image;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 contentScale:(double)arg2;

@end

