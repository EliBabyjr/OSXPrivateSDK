/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MCAddressManager : NSObject
{
}

+ (id)myFullName;
+ (id)addAddressToAddressBook:(id)arg1;
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)arg1;
+ (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)emailAddressesFromGroup:(id)arg1;
+ (void)_addEmailsFromGroup:(id)arg1 toDictionary:(id)arg2;
+ (id)groupsMatchingString:(id)arg1;
+ (id)myEmailAddress;
+ (id)replaceGroupsWithUndisclosedRecipients:(id)arg1;
+ (id)expandGroups:(id)arg1;

@end

