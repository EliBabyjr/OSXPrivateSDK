/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IASCommonViewBasedTableDelegate.h"

@class NSString, SMFDEManagementViewController;

@interface SMFDETableDelegate : IASCommonViewBasedTableDelegate
{
    SMFDEManagementViewController *_fdeManagementViewController;
    NSString *_passwordButtonLabel;
}

@property(readonly) NSString *passwordButtonLabel; // @synthesize passwordButtonLabel=_passwordButtonLabel;
@property SMFDEManagementViewController *fdeManagementViewController; // @synthesize fdeManagementViewController=_fdeManagementViewController;
- (void).cxx_destruct;
- (void)pressedPasswordButton:(id)arg1;
- (void)awakeFromNib;

@end

