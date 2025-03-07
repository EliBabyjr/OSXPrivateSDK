/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ILMediaObjectsProvider
- (unsigned long long)mediaObjectCount;
- (id)mediaObjectsAsync;
- (id)mediaObjects;

@optional
- (void)cancelEvaluation;
- (BOOL)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1;
- (void)removeMediaObject:(id)arg1;
- (void)addMediaObjects:(id)arg1;
- (void)setMediaObjectsArray:(id)arg1;
@end

