/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSImage;

// Not exported
@interface NSProContentViewMenuThumbnailView : NSView
{
    NSImage *_image;
    BOOL _selected;
}

@property(getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;

@end

