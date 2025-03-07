/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class CNAutocompleteFetchRequest, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface CNAutocompleteSearchExecutionOperation : NSOperation
{
    CNAutocompleteFetchRequest *_request;
    id <CNAutocompleteSearchExecutor> _executor;
    id _reportingBlock;
    id _errorBlock;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (id)operationWithExecutor:(id)arg1 request:(id)arg2;
@property(copy) id errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy) id reportingBlock; // @synthesize reportingBlock=_reportingBlock;
- (void).cxx_destruct;
- (void)clearHandlerBlocks;
- (void)reportError:(id)arg1;
- (void)reportResults:(id)arg1;
- (void)doAsynchronousExecution;
- (void)doSynchronousExecution;
- (void)cancel;
- (void)main;
- (id)initWithExecutor:(id)arg1 request:(id)arg2;

@end

