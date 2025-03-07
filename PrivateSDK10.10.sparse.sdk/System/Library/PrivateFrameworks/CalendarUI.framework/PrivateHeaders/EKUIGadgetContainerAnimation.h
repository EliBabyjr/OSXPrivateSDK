/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKUIGadgetContainer;

@interface EKUIGadgetContainerAnimation : NSObject
{
    BOOL _expanding;
    EKUIGadgetContainer *_targetContainer;
    double _startConstant;
    double _endConstant;
}

@property double endConstant; // @synthesize endConstant=_endConstant;
@property double startConstant; // @synthesize startConstant=_startConstant;
@property BOOL expanding; // @synthesize expanding=_expanding;
@property __weak EKUIGadgetContainer *targetContainer; // @synthesize targetContainer=_targetContainer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTargetContainer:(id)arg1 startingConstant:(double)arg2 endingConstant:(double)arg3 isExpanding:(BOOL)arg4;

@end

