/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ServerFoundation/XSAuthenticator.h>

@interface XSNegotiateAuthenticator : XSAuthenticator
{
    void *_gssContext;
}

@property void *gssContext; // @synthesize gssContext=_gssContext;
- (BOOL)validateChallenge:(id)arg1 generateResponse:(id *)arg2;
- (id)generateInitialResponse;
- (void)finalize;
- (void)dealloc;

@end

