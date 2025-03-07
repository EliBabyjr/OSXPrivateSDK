/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSTimer, UIRAccessibilityElement, UIRAccessibilityProcess, UIRRecord, UIRTDrawFocus;

@interface UIRLocalRecorder : NSObject
{
    struct CGPoint _lastMousePoint;
    UIRAccessibilityElement *_systemWideElement;
    UIRAccessibilityProcess *_targetApplicationElement;
    UIRAccessibilityElement *_currentUIElement;
    struct __CFMachPort *_eventTapPort;
    UIRTDrawFocus *_drawFocus;
    UIRRecord *_currentRecord;
    NSTimer *_uiElementUpdateTimer;
    unsigned long long _eventMask;
    struct ProcessSerialNumber _processSerialNumber;
    id _delegate;
    NSArray *_excludedProccesses;
    NSMutableDictionary *_processesByPSN;
    BOOL _isRecording;
    BOOL _doDrawFocus;
    struct __UIRLocalRecorderDelegateRespondsTo _delegateRespondsTo;
}

@property unsigned long long eventMask; // @synthesize eventMask=_eventMask;
- (struct __CGEvent *)_eventTapProxyCallback:(struct __CGEventTapProxy *)arg1 withEventType:(unsigned int)arg2 withEvent:(struct __CGEvent *)arg3;
- (id)_uiElementForPoint:(struct CGPoint)arg1;
- (id)_processWithPSN:(long long)arg1;
- (void)performTimerBasedUIElementUpdate;
- (void)updateCurrentUIElementWithEvent:(struct __CGEvent *)arg1;
- (void)updateCurrentUIElement;
- (void)stopRecording;
- (void)_recordEventsOnPrivateThread;
- (void)startRecordingEvents:(unsigned long long)arg1 excludingProcesses:(id)arg2;
- (void)startRecordingEvents:(unsigned long long)arg1 forPSN:(struct ProcessSerialNumber)arg2;
- (void)startRecordingEvents:(unsigned long long)arg1;
- (void)setExcludedProccesses:(id)arg1;
- (id)excludedProccesses;
@property BOOL isRecording; // @synthesize isRecording=_isRecording;
- (void)setDrawFocus:(id)arg1;
- (id)drawFocus;
- (void)setSystemWideElement:(id)arg1;
- (id)systemWideElement;
- (void)setProcessesByPSN:(id)arg1;
- (id)processesByPSN;
- (void)setUIElementUpdateTimer:(id)arg1;
- (id)uiElementUpdateTimer;
- (void)setEventTapPort:(struct __CFMachPort *)arg1;
- (struct __CFMachPort *)eventTapPort;
@property(retain) UIRRecord *currentRecord;
@property(readonly) UIRAccessibilityElement *currentUIElement;
- (void)setCurrentUIElement:(id)arg1;
@property id delegate;
- (struct __UIRLocalRecorderDelegateRespondsTo)delegateRespondsTo;
- (void)setTargetApplicationElement:(id)arg1;
- (id)targetApplicationElement;
- (void)dealloc;
- (id)init;

@end

