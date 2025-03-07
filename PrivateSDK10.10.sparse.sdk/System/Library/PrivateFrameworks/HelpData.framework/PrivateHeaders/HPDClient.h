/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface HPDClient : NSObject
{
    struct __CFMessagePort *_serverPortRef;
}

- (void)abort;
- (BOOL)stop;
- (BOOL)collect;
- (BOOL)cancelQuery:(id)arg1;
- (BOOL)performQuery:(id)arg1 withDelegate:(id)arg2;
- (id)preferredLocalizations;
- (id)bookList;
- (id)bookWithIdentifier:(id)arg1;
- (id)sendMessage:(int)arg1 withData:(void *)arg2 withReply:(BOOL)arg3;
- (struct __CFMessagePort *)createLocalPortWithDelegate:(id)arg1;
- (BOOL)createServerPortIfNeeded;
- (void)finalize;
- (void)dealloc;

@end

