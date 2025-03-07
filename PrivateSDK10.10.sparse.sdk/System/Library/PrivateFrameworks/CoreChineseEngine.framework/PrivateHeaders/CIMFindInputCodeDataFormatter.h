/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, PrettyPinyin;

@interface CIMFindInputCodeDataFormatter : NSObject
{
    NSArray *_originalArray;
    NSMutableArray *_formattedData;
    unsigned long long _numberOfColumns;
    PrettyPinyin *_pinyinFormatter;
    BOOL isSimplifiedChinese;
    BOOL zhuyinChaibaiMode;
}

@property BOOL isSimplifiedChinese; // @synthesize isSimplifiedChinese;
- (double)heightOfRow:(unsigned long long)arg1;
- (id)stringForRow:(unsigned long long)arg1 column:(id)arg2;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (void)setFormattedDictionaryForData:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_formatInWubiHua:(id)arg1;
- (id)_pinyinWithTones:(id)arg1;
- (id)_pinyinWithTone:(id)arg1;
- (id)_stringFromArray:(id)arg1 colorString:(BOOL)arg2;
- (void)_setHeightForRow:(id)arg1;

@end

