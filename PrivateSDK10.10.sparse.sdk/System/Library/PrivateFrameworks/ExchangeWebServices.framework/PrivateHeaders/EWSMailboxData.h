/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSEmailAddress;

@interface EWSMailboxData : NSObject
{
    EWSEmailAddress *_Email;
    int _AttendeeType;
    BOOL _ExcludeConflicts;
}

+ (id)definition;
@property(nonatomic) BOOL ExcludeConflicts; // @synthesize ExcludeConflicts=_ExcludeConflicts;
@property(nonatomic) int AttendeeType; // @synthesize AttendeeType=_AttendeeType;
@property(retain, nonatomic) EWSEmailAddress *Email; // @synthesize Email=_Email;
- (void)dealloc;

@end

