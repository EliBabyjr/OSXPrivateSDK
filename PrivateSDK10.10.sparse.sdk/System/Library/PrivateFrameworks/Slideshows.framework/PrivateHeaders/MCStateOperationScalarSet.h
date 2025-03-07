/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation
{
    double _scalar;
}

+ (id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(double)arg3;
@property(nonatomic) double scalar; // @synthesize scalar=_scalar;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)arg1;

@end

