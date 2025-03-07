/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADDrawableProperties.h>

#import "OADEffectsParent-Protocol.h"
#import "OADProperties3DParent-Protocol.h"

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D, OADStroke;

// Not exported
@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText:1;
    unsigned int mIsBehindText:1;
}

- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)removeUnnecessaryOverrides;
- (BOOL)hasIsBehindText;
- (void)setIsBehindText:(BOOL)arg1;
- (BOOL)isBehindText;
- (BOOL)hasStroke;
- (void)setStroke:(id)arg1;
- (id)stroke;
- (BOOL)hasShape3D;
- (void)setShape3D:(id)arg1;
- (id)shape3D;
- (BOOL)hasScene3D;
- (void)setScene3D:(id)arg1;
- (id)scene3D;
- (BOOL)hasExts;
- (BOOL)hasEffects;
- (void)setExts:(id)arg1;
- (id)exts;
- (void)setEffects:(id)arg1;
- (id)effects;
- (BOOL)hasFill;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setParent:(id)arg1;
- (void)dealloc;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

