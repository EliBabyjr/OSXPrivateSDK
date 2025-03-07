/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet *_searchStrings;
    BOOL _findAttendees;
    BOOL _findUsers;
    BOOL _findResources;
    BOOL _findGroups;
    BOOL _findLocations;
    unsigned long long _resultLimit;
}

+ (BOOL)tokensAreLegal:(id)arg1;
@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property(nonatomic) BOOL findLocations; // @synthesize findLocations=_findLocations;
@property BOOL findResources; // @synthesize findResources=_findResources;
@property BOOL findGroups; // @synthesize findGroups=_findGroups;
@property BOOL findUsers; // @synthesize findUsers=_findUsers;
@property(nonatomic) BOOL findAttendees; // @synthesize findAttendees=_findAttendees;
@property(retain, nonatomic) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)searchItems;
- (id)extraAttributes;
- (id)httpMethod;
- (id)initWithSearchStrings:(id)arg1 atURL:(id)arg2;
- (void)dealloc;

@end

