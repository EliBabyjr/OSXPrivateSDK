/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CKDMMCSPackageSignatureGenerator : NSObject
{
    BOOL _valid;
    void *_generator;
}

@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) void *generator; // @synthesize generator=_generator;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)arg1;
- (char *)_finishGenerator;
- (void)dealloc;
- (id)init;

@end

