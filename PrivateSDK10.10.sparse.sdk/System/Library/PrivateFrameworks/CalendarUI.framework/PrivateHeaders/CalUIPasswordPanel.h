/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CalUIPasswordPanelDelegate-Protocol.h"

@class CalManagedAccount, IAPasswordUIController, NSString;

@interface CalUIPasswordPanel : NSObject <CalUIPasswordPanelDelegate>
{
    CalManagedAccount *_account;
    IAPasswordUIController *_controller;
    BOOL _cancelled;
}

@property(readonly, nonatomic) IAPasswordUIController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)authenticationFinishedForPassword:(id)arg1 error:(id)arg2;
- (void)didEnterPassword:(id)arg1 withResult:(long long)arg2;
- (void)finish;
- (void)cancel;
- (void)performAuthenticationWithPassword:(id)arg1;
- (id)initWithAccount:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

