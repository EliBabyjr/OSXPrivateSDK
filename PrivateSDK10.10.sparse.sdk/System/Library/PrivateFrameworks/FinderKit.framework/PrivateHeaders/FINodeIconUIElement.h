/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FINodeUIElement.h>

@class IKImageBrowserView;

// Not exported
@interface FINodeIconUIElement : FINodeUIElement
{
    struct TNSRef<id> _controller;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setController:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (struct CGRect)frame;
- (void)setSelection:(_Bool)arg1;
- (_Bool)isSelected;
@property(readonly, retain, nonatomic) IKImageBrowserView *containerView; // @dynamic containerView;

@end

