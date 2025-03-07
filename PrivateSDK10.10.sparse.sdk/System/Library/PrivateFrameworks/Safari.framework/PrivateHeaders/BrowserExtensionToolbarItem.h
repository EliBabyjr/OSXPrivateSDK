/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/BrowserToolbarItem.h>

// Not exported
@interface BrowserExtensionToolbarItem : BrowserToolbarItem
{
    struct RefPtr<Safari::ExtensionToolbarItem> _extensionToolbarItem;
    BOOL _addedToToolbar;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)performClickAndHoldAction:(id)arg1;
- (void)performClickAction:(id)arg1;
- (void)validate;
- (void)toolbarItemRemoved:(id)arg1;
- (void)toolbarItemAdded:(id)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (void)showPopover;
- (void)showMenu;
- (id)menuFormRepresentation;
- (id)menu;
- (id)badgedButton;
- (struct ExtensionToolbarItem *)extensionToolbarItem;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtensionToolbarItem:(struct ExtensionToolbarItem *)arg1;

@end

