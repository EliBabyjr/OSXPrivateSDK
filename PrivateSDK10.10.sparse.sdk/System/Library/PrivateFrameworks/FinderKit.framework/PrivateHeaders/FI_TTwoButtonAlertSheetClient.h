/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TStdAlertSheetClientProtocol-Protocol.h"

@class NSString;

// Not exported
@interface FI_TTwoButtonAlertSheetClient : NSObject <TStdAlertSheetClientProtocol>
{
    function_2d7db078 _callback;
}

+ (id)clientWithCallback:(function_2d7db078)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;
- (id)initWithCallback:(function_2d7db078)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

