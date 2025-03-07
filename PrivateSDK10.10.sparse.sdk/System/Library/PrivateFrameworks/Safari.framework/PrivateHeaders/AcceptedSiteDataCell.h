/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class NSString;

// Not exported
@interface AcceptedSiteDataCell : NSTextFieldCell
{
    NSString *_displayName;
    NSString *_trackingTypes;
}

@property(copy, nonatomic) NSString *trackingTypes; // @synthesize trackingTypes=_trackingTypes;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityDescription;
- (id)accessibilityAttributeNames;
- (id)computeAccessibilityAttributeNames;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

