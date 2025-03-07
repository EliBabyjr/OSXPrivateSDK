/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface Converter : NSObject
{
    NSString *_inputString;
    NSString *_inputUnit;
    NSString *_outputUnit;
    NSNumber *_outputValue;
    NSNumber *_inputValue;
    NSString *_localizedInputValueAndUnit;
    NSString *_localizedOutputValueAndUnit;
    NSString *_localizedOutputValue;
    NSString *_localizedOutputUnit;
    BOOL _isCurrency;
    float _currencyUpdateTimeOut;
    NSArray *_additionalResults;
    NSString *_conversionType;
}

+ (BOOL)refreshCurrencyCache;
+ (id)currencyCacheLastRefreshDate;
@property(retain) NSString *localizedOutputValueAndUnit; // @synthesize localizedOutputValueAndUnit=_localizedOutputValueAndUnit;
@property(retain) NSString *conversionType; // @synthesize conversionType=_conversionType;
@property(retain) NSArray *additionalResults; // @synthesize additionalResults=_additionalResults;
@property float currencyUpdateTimeOut; // @synthesize currencyUpdateTimeOut=_currencyUpdateTimeOut;
@property(readonly) BOOL isCurrency; // @synthesize isCurrency=_isCurrency;
@property(retain) NSString *localizedOutputUnit; // @synthesize localizedOutputUnit=_localizedOutputUnit;
@property(retain) NSString *localizedOutputValue; // @synthesize localizedOutputValue=_localizedOutputValue;
@property(retain) NSString *localizedInputValueAndUnit; // @synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit;
@property(retain) NSNumber *outputValue; // @synthesize outputValue=_outputValue;
@property(retain) NSString *outputUnit; // @synthesize outputUnit=_outputUnit;
@property(retain) NSNumber *inputValue; // @synthesize inputValue=_inputValue;
@property(retain) NSString *inputUnit; // @synthesize inputUnit=_inputUnit;
@property(retain) NSString *inputString; // @synthesize inputString=_inputString;
- (id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2;
- (double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1;
- (id)_operateConversionForOutputUnit:(id)arg1;
- (void)_performUnitPluralization;
- (id)similarUnitsForNormalizedName:(id)arg1;
- (id)_unitInfoForNormalizedName:(id)arg1;
- (void)_standardizeInputAndOutputUnits;
- (id)_normalizedUnitNamesForName:(id)arg1;
- (id)_unitsInfo;
- (void)_updateInputValueFromMatch:(id)arg1;
- (BOOL)_parseInputQuery;
- (void)processConversionWithCompletion:(id)arg1;
- (void)dealloc;
- (id)initWithInput:(id)arg1;

@end

