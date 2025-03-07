/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFConversationCalculator : NSObject
{
    BOOL _logConversationCalculationPerformance;
    BOOL _logConversationCalculationTrace;
    BOOL _logConversationCalculationSubjectPrefixTrace;
    BOOL _forceConversationSplits;
    BOOL _alwaysValidateConversations;
    BOOL _recordConversationCalculationPerformanceMetrics;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL recordConversationCalculationPerformanceMetrics; // @synthesize recordConversationCalculationPerformanceMetrics=_recordConversationCalculationPerformanceMetrics;
@property(nonatomic) BOOL alwaysValidateConversations; // @synthesize alwaysValidateConversations=_alwaysValidateConversations;
@property(nonatomic) BOOL forceConversationSplits; // @synthesize forceConversationSplits=_forceConversationSplits;
@property(nonatomic) BOOL logConversationCalculationSubjectPrefixTrace; // @synthesize logConversationCalculationSubjectPrefixTrace=_logConversationCalculationSubjectPrefixTrace;
@property(nonatomic) BOOL logConversationCalculationTrace; // @synthesize logConversationCalculationTrace=_logConversationCalculationTrace;
@property(nonatomic) BOOL logConversationCalculationPerformance; // @synthesize logConversationCalculationPerformance=_logConversationCalculationPerformance;
- (void)updateConversationRootsWithHandle:(id)arg1 onlyForMessagesMissingRoots:(BOOL)arg2;
- (BOOL)isRootSubjectPrefix:(id)arg1;
- (BOOL)isRootMessageSubject:(id)arg1;
- (void)_updatePrefixWithHandle:(id)arg1 withNewPrefix:(id)arg2 forMessagesWithSubject:(long long)arg3;
- (BOOL)updateSubjectPrefixesWithHandle:(id)arg1 onlyForMessagesMissingConversations:(BOOL)arg2;
- (int)_conversationPositionForMessageWithRowID:(long long)arg1 dateReceived:(int)arg2 conversationID:(long long)arg3 context:(id)arg4;
- (void)_fixupConversationPositionsForConversation:(id)arg1;
- (void)_mergeMessagesInConversations:(id)arg1 withConversation:(id)arg2;
- (void)_addMessage:(id)arg1 toConversation:(long long)arg2 withConversationPosition:(int)arg3;
- (long long)_createNewConversationFromMessage:(id)arg1;
- (void)_calculateConversationForMessage:(id)arg1;
- (void)_updateAllRowsMissingRootValueWithHandle:(id)arg1;
- (void)_updateAllRowsMissingFuzzyAncestorWithHandle:(id)arg1;
- (void)updateAllRowsMissingConversationsWithHandle:(id)arg1 conversationUserInfo:(id)arg2 conversationsWereReset:(BOOL)arg3 progressDelegate:(id)arg4;
- (id)resetConversationIDForMessages:(id)arg1 withHandle:(id)arg2;
- (void)updateConversationsIfNeededWithHandle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

