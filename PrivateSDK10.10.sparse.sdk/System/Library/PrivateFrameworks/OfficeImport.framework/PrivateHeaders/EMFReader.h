/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFReader-Protocol.h"

@class EMFPlayer, NSString;

// Not exported
@interface EMFReader : NSObject <MFReader>
{
    EMFPlayer *m_player;
}

- (int)play:(id)arg1;
- (oneway void)release;
- (void)dealloc;
- (id)initWithEMFPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

