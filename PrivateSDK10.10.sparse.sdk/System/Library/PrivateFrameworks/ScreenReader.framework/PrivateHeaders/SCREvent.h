/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSSet, SCRCIndexMap, SCRKeyboardKey;

// Not exported
@interface SCREvent : NSObject <NSCopying, NSCoding>
{
    unsigned long long _type;
    SCRKeyboardKey *_key;
    NSSet *_commands;
    unsigned long long _modifier;
    double _creationTime;
    SCRCIndexMap *_info;
    unsigned long long _priority;
    unsigned long long _keyRepeatCount;
    struct __flags {
        unsigned int isModalEvent:1;
        unsigned int isKeyRepeatEvent:1;
        unsigned int isEndingEvent:1;
        unsigned int reserved:29;
    } _flags;
}

+ (id)titleForTag:(int)arg1;
+ (id)_tagTitleMap;
- (id)description;
- (BOOL)isGestureEvent;
- (int)commandDirection;
- (BOOL)isInvertedTEvent;
- (BOOL)containsModifier:(unsigned long long)arg1;
- (BOOL)containsKeyIgnoringCount:(id)arg1;
- (BOOL)containsKey:(id)arg1;
- (BOOL)containsCharacters:(id)arg1;
- (long long)compareByPriorityAndDate:(id)arg1;
- (BOOL)containsCommand:(id)arg1;
- (BOOL)containsCommand:(id)arg1 isEndingEvent:(BOOL)arg2;
- (id)commands;
- (id)argumentString;
- (id)argument;
- (void)setCommands:(id)arg1;
- (BOOL)containsTag:(int)arg1;
- (int)tag;
- (void)setTag:(int)arg1;
- (id)guideAction;
- (BOOL)isGuideEventForTarget:(id)arg1;
- (id)guideTarget;
- (void)setGuideTarget:(id)arg1;
- (id)outputString;
- (double)creationTime;
- (unsigned long long)priority;
- (void)setInfoObject:(id)arg1 forIndex:(unsigned int)arg2;
- (id)info;
- (unsigned long long)modifier;
- (id)key;
- (unsigned long long)type;
- (BOOL)isQuickNavSelectionEvent;
- (BOOL)isOutputEvent;
- (BOOL)isEchoEvent;
- (BOOL)isTagEvent;
- (BOOL)isGuideEvent;
- (BOOL)isActivatorEvent;
- (BOOL)isEndingEvent;
- (void)setIsEndingEvent:(BOOL)arg1;
- (BOOL)isModalEvent;
- (void)setIsModalEvent:(BOOL)arg1;
- (BOOL)isKeyRepeatEvent;
- (void)setIsKeyRepeatEvent:(BOOL)arg1;
- (unsigned long long)keyRepeatCount;
- (void)setKeyRepeatCount:(unsigned long long)arg1;
- (void)incrementKeyRepeatCount;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initGuideEventWithTarget:(id)arg1 action:(id)arg2 tag:(int)arg3 info:(id)arg4 priority:(unsigned long long)arg5;
- (id)initOutputEventWithString:(id)arg1 info:(id)arg2 priority:(unsigned long long)arg3;
- (id)initEchoEventWithKey:(id)arg1 modifier:(unsigned long long)arg2 info:(id)arg3 priority:(unsigned long long)arg4;
- (id)initTagEventWithTag:(int)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 info:(id)arg4 priority:(unsigned long long)arg5;
- (id)initActivatorEventWithKey:(id)arg1 modifier:(unsigned long long)arg2 info:(id)arg3 priority:(unsigned long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 info:(id)arg4 priority:(unsigned long long)arg5;

@end

