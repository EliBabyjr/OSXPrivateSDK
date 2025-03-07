/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCell.h"

@class NSString;

// Not exported
@interface AddressBookAutoFillCell : NSCell
{
    NSString *_prompt;
    NSString *_contactName;
}

+ (id)_contactNameTextAttributes:(BOOL)arg1;
+ (id)_autoFillPromptTextAttributes:(BOOL)arg1;
+ (id)_addressCardImage;
+ (double)widthWithPromptAndContactName:(id)arg1 contactName:(id)arg2;
+ (double)height;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)_getAddressCardImageFrame:(struct CGRect *)arg1 textFrame:(struct CGRect *)arg2 fromCellFrame:(struct CGRect)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

