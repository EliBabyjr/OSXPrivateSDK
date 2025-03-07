/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ReceiptInstallerProtocol
- (oneway void)setLastDoItLaterLogoutFailed:(BOOL)arg1;
- (oneway void)createWhatsNewOnlinePageViewedTimestamp;
- (oneway void)createWhatsNewNotificationTimestamp;
- (oneway void)writeUpToDateInfo:(id)arg1;
- (oneway void)createUpToDateFirstCheckinCookie;
- (oneway void)deleteVPPInviteFromPreferences;
- (oneway void)setAutoUpdateRestartRequiredEnabledPreference:(id)arg1 majorOSVersion:(id)arg2;
- (oneway void)setAutoUpdateEnabledPreference:(id)arg1 majorOSVersion:(id)arg2;
- (oneway void)removeCriticalUpdateTimeStamp;
- (oneway void)createCriticalUpdateTimeStamp;
- (oneway void)removeApplicationAtPath:(id)arg1;
- (oneway void)unlockApplicationsAtPaths:(id)arg1;
- (oneway void)lockApplicationAtPath:(id)arg1;
- (oneway void)setIconData:(id)arg1 forPlaceholderAtPath:(id)arg2;
- (oneway void)createPlaceholderAtPath:(id)arg1 fromPath:(id)arg2 replyBlock:(id)arg3;
- (oneway void)removePlaceholderAtPath:(id)arg1;
- (oneway void)createPlaceholderAtPath:(id)arg1 withData:(id)arg2;
- (oneway void)writeAdoptionInfo:(id)arg1;
- (oneway void)removeIAPProductAtPath:(id)arg1;
- (oneway void)installReceiptWithParameters:(id)arg1 replyBlock:(id)arg2;
@end

