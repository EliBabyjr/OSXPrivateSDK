/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate-Protocol.h"

@class CoreDAVItem, NSDictionary, NSMutableData, NSString, NSURL;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate>
{
    int _parsingState;
    SEL _parentElementSetter;
    CoreDAVItem *_element;
    CoreDAVItem *_parentElement;
    CoreDAVXMLElementGenerator *_parentGenerator;
    NSMutableData *_characters;
    NSMutableData *_cDATA;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    NSDictionary *_cachedElementParseRules;
    BOOL _checkedElementValidityIfRootElement;
    BOOL _isUnrecognized;
    NSURL *_baseURL;
}

@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) BOOL checkedElementValidityIfRootElement; // @synthesize checkedElementValidityIfRootElement=_checkedElementValidityIfRootElement;
@property(retain, nonatomic) NSDictionary *cachedElementParseRules; // @synthesize cachedElementParseRules=_cachedElementParseRules;
@property(nonatomic) CoreDAVXMLElementGenerator *parentGenerator; // @synthesize parentGenerator=_parentGenerator;
@property(retain, nonatomic) CoreDAVItem *element; // @synthesize element=_element;
@property(retain, nonatomic) CoreDAVXMLElementGenerator *currentlyParsingSubItem; // @synthesize currentlyParsingSubItem=_currentlyParsingSubItem;
@property(retain, nonatomic) NSMutableData *cDATA; // @synthesize cDATA=_cDATA;
@property(retain, nonatomic) NSMutableData *characters; // @synthesize characters=_characters;
@property(nonatomic) SEL parentElementSetter; // @synthesize parentElementSetter=_parentElementSetter;
@property(nonatomic) int parsingState; // @synthesize parsingState=_parsingState;
@property(nonatomic) BOOL isUnrecognized; // @synthesize isUnrecognized=_isUnrecognized;
- (void)resumeParsingWithParser:(id)arg1;
- (void)noteChildCascadingFailure;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (BOOL)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (BOOL)tracksRootElement;
- (void)dealloc;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

