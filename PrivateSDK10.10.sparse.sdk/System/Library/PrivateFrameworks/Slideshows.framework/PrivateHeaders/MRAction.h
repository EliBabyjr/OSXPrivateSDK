/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCAction, MRLayer, MRRenderer, NSInvocation, NSMutableDictionary, NSString;

@interface MRAction : NSObject
{
    NSInvocation *_invocation;
    id _block;
    MRRenderer *_renderer;
    MCAction *_mcAction;
    id _sender;
    MRLayer *_resolvedTarget;
    NSMutableDictionary *_states;
    double _time;
    id _specificObject;
    NSString *_targetPath;
}

@property(copy, nonatomic) NSString *targetPath; // @synthesize targetPath=_targetPath;
@property(retain) id specificObject; // @synthesize specificObject=_specificObject;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSMutableDictionary *states; // @synthesize states=_states;
@property(retain, nonatomic) MRLayer *resolvedTarget; // @synthesize resolvedTarget=_resolvedTarget;
@property(retain, nonatomic) id sender; // @synthesize sender=_sender;
@property(readonly) MCAction *mcAction; // @synthesize mcAction=_mcAction;
- (void)_resolveTargetPath:(id)arg1;
- (void)check;
- (double)invoke;
- (id)description;
- (void)dealloc;
- (id)initWithBlock:(id)arg1 andSender:(void)arg2;
- (id)initWithSelector:(SEL)arg1 sender:(id)arg2 andTargetPath:(id)arg3 inRenderer:(id)arg4;
- (id)initWithAction:(id)arg1 andTarget:(id)arg2;
- (id)initWithAction:(id)arg1 inRenderer:(id)arg2;

@end

