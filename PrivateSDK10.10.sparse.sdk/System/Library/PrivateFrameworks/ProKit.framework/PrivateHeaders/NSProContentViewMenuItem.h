/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProMenuItem.h>

@class NSProButton, NSProContentViewMenuThumbnailView, NSProTextField;

// Not exported
@interface NSProContentViewMenuItem : NSProMenuItem
{
    NSProTextField *_titleField;
    NSProTextField *_subtitleField;
    NSProContentViewMenuThumbnailView *_thumbnailView;
    NSProButton *_deleteButton;
    NSProButton *_dragButton;
    SEL _deleteAction;
    SEL _dragAction;
    void *_proReserved4;
    void *_proReserved5;
    void *_proReserved6;
}

@property(getter=isHighlighted) BOOL highlighted;
- (void)dragActionHandler:(id)arg1;
- (void)deleteActionHandler:(id)arg1;
- (void)awakeFromNib;
- (BOOL)dragEnabled;
- (void)setDragEnabled:(BOOL)arg1;
- (BOOL)deleteEnabled;
- (void)setDeleteEnabled:(BOOL)arg1;
- (SEL)dragAction;
- (void)setDragAction:(SEL)arg1;
- (SEL)deleteAction;
- (void)setDeleteAction:(SEL)arg1;
- (id)thumbnailImage;
- (void)setThumbnailImage:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)_sizeToFit;

@end

