/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRElement.h>

@class NSString;

// Not exported
@interface SCRImage : SCRElement
{
    NSString *_localizedPhotoEvaluationString;
}

- (id)helpDescription;
- (void)dealloc;
- (BOOL)shouldMapElement:(id)arg1;
- (id)typeDescription;
- (id)persistentUserLabel;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)persistentElementLabelData;
- (id)persistentUserLabelIDForData:(id)arg1;
- (BOOL)isImage;

@end

