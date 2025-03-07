/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AEContents, NSMutableArray, NSMutableDictionary, NSString;

@interface AEClass : NSObject
{
    unsigned int _code;
    NSString *_inherits;
    NSString *_plural;
    AEContents *_contents;
    NSMutableArray *_respondsTo;
    NSMutableDictionary *_propertiesForNames;
    NSMutableDictionary *_elementsForNames;
}

+ (id)classWithCode:(unsigned int)arg1 inherits:(id)arg2;
@property(retain) NSMutableDictionary *elementsForNames; // @synthesize elementsForNames=_elementsForNames;
@property(retain) NSMutableDictionary *propertiesForNames; // @synthesize propertiesForNames=_propertiesForNames;
@property(retain) NSMutableArray *respondsTo; // @synthesize respondsTo=_respondsTo;
@property(retain) AEContents *contents; // @synthesize contents=_contents;
@property(retain) NSString *plural; // @synthesize plural=_plural;
@property(retain) NSString *inherits; // @synthesize inherits=_inherits;
@property unsigned int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)addRespondsTo:(id)arg1;
- (id)allElementNames;
- (id)allPropertyNames;
- (void)setElement:(id)arg1 forName:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (id)propertyNameForCode:(unsigned int)arg1;
- (id)elementNameForCode:(unsigned int)arg1;
- (id)element:(id)arg1;
- (id)property:(id)arg1;
- (id)initWithCode:(unsigned int)arg1 inherits:(id)arg2;

@end

