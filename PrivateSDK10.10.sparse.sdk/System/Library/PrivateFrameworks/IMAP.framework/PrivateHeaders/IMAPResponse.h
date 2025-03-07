/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCError, NSString;

@interface IMAPResponse : NSObject
{
    BOOL _wasHandled;
    NSString *_tag;
    MCError *_error;
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;
+ (id)newIMAPResponseWithConnection:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) MCError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(nonatomic) BOOL wasHandled; // @synthesize wasHandled=_wasHandled;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BOOL isUntagged;

@end

