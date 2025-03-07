/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CNCancelable-Protocol.h"

@class NSString;

// Not exported
@interface CNDispatchSource : NSObject <CNCancelable>
{
    struct dispatch_source_s *_source;
}

- (void)cancel;
- (struct dispatch_source_s *)source;
- (void)finalize;
- (void)dealloc;
- (id)initWithSource:(struct dispatch_source_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

