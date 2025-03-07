/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/Banner.h>

@class ButtonWithFontSmoothing, RolloverImageButton;

// Not exported
@interface DefaultBrowserBanner : Banner
{
    ButtonWithFontSmoothing *_useSafariAsDefaultButton;
    RolloverImageButton *_closeButton;
}

+ (int)bannerSortOrder;
@property(nonatomic) __weak RolloverImageButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak ButtonWithFontSmoothing *useSafariAsDefaultButton; // @synthesize useSafariAsDefaultButton=_useSafariAsDefaultButton;
- (void).cxx_destruct;
- (id)bannerNibName;
- (id)initWithContentViewController:(struct SearchableWebContentViewController *)arg1;
- (void)_setSafariAsDefaultBrowser:(id)arg1;

@end

