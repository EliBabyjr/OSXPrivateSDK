/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (ISAdditions)
+ (id)_userVisibleWebKitVersionString;
+ (id)_preferredLanguageCode;
+ (id)_macOSXBuildString;
+ (id)_macOSXVersionString;
+ (BOOL)openURL:(id)arg1;
+ (id)macOSXVersionString;
+ (id)storeUserAgentStringForClient:(id)arg1;
+ (id)unescapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(BOOL)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(BOOL)arg2;
- (id)stripPassword;
- (id)urlByConvertingToStoreURLForClient:(id)arg1;
- (id)schemeSwizzledURL;
- (BOOL)isSafeExternalURL;
- (id)urlBySettingQueryStringDictionary:(id)arg1;
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)arg1;
- (id)urlByAddingStringToQueryString:(id)arg1;
@end

