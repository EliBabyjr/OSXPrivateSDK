/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FILocationPopUpDelegate <NSObject>

@optional
- (void)cmdToggleFinderKitSidebar:(id)arg1;
- (_Bool)finderLocationPopUpSidebarIsShowing:(id)arg1;
- (_Bool)finderLocationPopUpWantsSidebarMenuItem:(id)arg1;
- (void)finderLocationPopUpWillDisplay:(id)arg1;
- (void)finderLocationPopUpOtherLocation:(id)arg1;
- (unsigned long long)finderLocationPopUpMenuOptions:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
@end

