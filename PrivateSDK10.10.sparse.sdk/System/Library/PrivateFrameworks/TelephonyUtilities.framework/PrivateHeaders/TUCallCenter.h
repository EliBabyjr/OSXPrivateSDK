/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSIDQueryControllerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TUCall, TUCallCenterCallsCache, TUCallModelState;

@interface TUCallCenter : NSObject <IDSIDQueryControllerDelegate>
{
    NSMutableArray *_displayedCalls;
    NSMutableArray *_conferenceParticipantCalls;
    TUCallCenterCallsCache *_callsCache;
    TUCallModelState *_callModelState;
}

+ (BOOL)emergencyCallBackModeIsActive;
+ (BOOL)shouldDisableAppFeatures;
+ (BOOL)isIMAVChatHostProcess;
+ (BOOL)isInCallServiceProcess;
+ (id)sharedInstance;
+ (id)_sharedInstanceWithDaemonDelegate:(id)arg1;
+ (id)sharedAddressBook;
@property(retain, nonatomic) TUCallModelState *callModelState; // @synthesize callModelState=_callModelState;
@property(retain, nonatomic) TUCallCenterCallsCache *callsCache; // @synthesize callsCache=_callsCache;
@property(retain, nonatomic) NSMutableArray *conferenceParticipantCalls; // @synthesize conferenceParticipantCalls=_conferenceParticipantCalls;
@property(retain, nonatomic) NSMutableArray *displayedCalls; // @synthesize displayedCalls=_displayedCalls;
- (void)endEmergencyCallBackMode;
- (void)_callStatusChangedInternal:(id)arg1;
- (void)filteredIncomingIMAVChat:(id)arg1;
- (void)createdOutgoingIMAVChat:(id)arg1;
- (void)invitedToIMAVChat:(id)arg1;
- (void)daemonConnected:(id)arg1;
- (void)handleChatVideoStalledDidChange:(id)arg1;
- (void)handleChatVideoQualityDidChange:(id)arg1;
- (void)handleChatRemotePauseDidChange:(id)arg1;
- (void)handleChatRemoteScreenDidChange:(id)arg1;
- (void)handleChatRemoteVideoDidChange:(id)arg1;
- (void)handleChatFirstRemoteFrameArrived:(id)arg1;
- (void)handleChatFirstPreviewFrameArrived:(id)arg1;
- (void)handleChatInvitationSent:(id)arg1;
- (id)_videoCallUserInfoForUserInfo:(id)arg1;
- (void)handleChatSendingAudioChangedNotification:(id)arg1;
- (void)handleChatConferenceMetadataUpdated:(id)arg1;
- (void)handleChatStateChanged:(id)arg1;
- (void)_handleCallEnded:(id)arg1 withReason:(unsigned int)arg2 error:(int)arg3;
- (void)handleCallModelStateChanged:(id)arg1;
- (void)handleCallerIDChanged:(id)arg1;
- (void)handleCallSubTypeChanged:(id)arg1;
- (void)handleCallerUnavailableForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (id)_callerUnavailableUserInfoForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (void)handleCallFailed:(id)arg1;
- (void)handleFilteredCall:(id)arg1 userInfo:(id)arg2;
- (void)handleFilteredCall:(id)arg1;
- (void)handleCallConnected:(id)arg1;
- (void)handleCallStatusOnDefaultPairedDeviceChanged:(id)arg1;
- (void)handleCallStatusChanged:(id)arg1 userInfo:(id)arg2;
- (void)handleCallStatusChanged:(id)arg1;
- (id)_callStatusUserInfoForUserInfo:(id)arg1;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isHoldAndAnswerAllowed;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (BOOL)isTakingCallsPrivateAllowed;
- (BOOL)canTakeCallsPrivate;
- (int)ambiguityState;
- (BOOL)isAmbiguous;
- (BOOL)isAddCallAllowed;
- (BOOL)isHoldAllowed;
- (BOOL)isMergeable;
- (BOOL)isSwappable;
- (void)disconnectNonRelayingCalls;
- (void)disconnectRelayingCalls;
- (void)requestHandoffForAllCalls;
- (void)disconnectAllCalls;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (void)disconnectCall:(id)arg1;
- (void)resumeCall:(id)arg1;
- (void)swapCalls;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)holdActiveAndAnswerCall:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3;
- (void)answerCallWithHoldMusic:(id)arg1;
- (void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2;
- (void)answerCall:(id)arg1;
- (id)displayedCallFromCalls:(id)arg1;
- (void)sendFieldModeDigits:(id)arg1;
- (id)dialVoicemail;
- (id)dialEmergency:(id)arg1;
- (id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 isRelayCall:(BOOL)arg5;
- (id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3 sourceIdentifier:(id)arg4;
- (id)dial:(id)arg1 callID:(id)arg2 service:(int)arg3;
- (id)dial:(id)arg1 service:(int)arg2;
- (id)_dialFaceTimeCall:(id)arg1 isVideo:(BOOL)arg2 callID:(id)arg3 sourceIdentifier:(id)arg4;
- (BOOL)allCallsAreOfService:(int)arg1;
- (id)callsHostedOrAnEndpointElsewhere;
- (id)callsWithAnEndpointElsewhere;
- (id)callsHostedElsewhere;
- (BOOL)anyCallIsEndpointOnCurrentDevice;
- (BOOL)anyCallIsHostedOnCurrentDevice;
- (BOOL)canInitiateCallForService:(int)arg1;
- (BOOL)canInitiateCalls;
- (id)sourceAccount:(BOOL)arg1;
- (id)proxyCallWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(BOOL)arg5 conferenceIdentifier:(id)arg6 voicemail:(BOOL)arg7 callerNameFromNetwork:(id)arg8;
- (unsigned long long)callCountOnDefaultPairedDevice;
- (id)callGroupsOnDefaultPairedDevice;
- (id)callsOnDefaultPairedDevice;
- (id)_allCalls;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (id)callsWithStatus:(int)arg1;
- (id)currentAudioAndVideoCalls;
- (int)currentCallCount;
- (id)_currentCalls:(BOOL)arg1;
- (id)currentCalls;
- (id)currentCallGroups;
- (id)_callGroupsFromCalls:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *incomingCalls;
@property(readonly, retain, nonatomic) TUCall *incomingCall;
- (void)dealloc;
- (id)initWithDaemonDelegate:(id)arg1;
- (void)_handleCallControlFailure:(id)arg1;
- (id)conferenceCall;
- (void)forceUpdateOfCallList;
- (void)forceDisconnectOfCall:(id)arg1;
- (void)forceCallOutOfConference:(id)arg1;
- (void)forceCallIntoConference:(id)arg1;
- (void)forceCallActive:(id)arg1;
- (void)resumeCallChangeNotifications;
- (void)suspendCallChangeNotifications;
- (id)displayedCallsNotIncludingIncomingCall;
- (id)displayedCall;
- (BOOL)canMergeCalls;
- (BOOL)justAnIncomingCallExists;
- (BOOL)inOutgoingCall;
- (BOOL)inCall;
- (void)_updateCallCount:(id)arg1 force:(BOOL)arg2;
- (void)_updateActiveCalls:(id)arg1;
- (void)_setConferenceParticipants:(id)arg1;
- (void)_setActiveCalls:(id)arg1;
- (void)_removeActiveCall:(id)arg1;
- (void)_addActiveCall:(id)arg1;
- (void)_postConferenceParticipantsChanged;
- (void)_postDisplayedCallsChanged;
- (void)_setIncomingCall:(id)arg1;
- (void)_resetState;
- (unsigned long long)currentVideoCallCount;
- (id)allNonFinalVideoCalls;
- (id)currentVideoCalls;
- (id)videoCallWithStatus:(int)arg1;
- (id)currentVideoCall;
- (id)activeVideoCall;
- (id)incomingVideoCall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

