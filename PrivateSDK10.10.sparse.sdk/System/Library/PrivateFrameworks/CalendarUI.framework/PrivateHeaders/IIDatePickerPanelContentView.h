/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class IIDatePicker, NSDatePicker;

@interface IIDatePickerPanelContentView : NSView
{
    IIDatePicker *__textDatePicker;
    NSDatePicker *__calendarDatePicker;
}

@property(retain) NSDatePicker *_calendarDatePicker; // @synthesize _calendarDatePicker=__calendarDatePicker;
@property(retain) IIDatePicker *_textDatePicker; // @synthesize _textDatePicker=__textDatePicker;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFitAndArrange;
- (void)setCalendarDatePicker:(id)arg1;
- (void)setTextDatePicker:(id)arg1;

@end

