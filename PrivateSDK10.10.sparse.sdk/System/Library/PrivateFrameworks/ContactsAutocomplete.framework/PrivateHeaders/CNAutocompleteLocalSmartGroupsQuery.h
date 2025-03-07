/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABAddressBook, CNAutocompleteFetchRequest;

@interface CNAutocompleteLocalSmartGroupsQuery : NSObject
{
    CNAutocompleteFetchRequest *_request;
    ABAddressBook *_addressBook;
}

- (void).cxx_destruct;
- (id)autocompleteResultWithGroup:(id)arg1 resultFactory:(id)arg2;
- (id)makeResultFactory;
- (id)smartGroupsMatchingString:(id)arg1;
- (id)run;
- (id)initWithRequest:(id)arg1 addressBook:(id)arg2;

@end

