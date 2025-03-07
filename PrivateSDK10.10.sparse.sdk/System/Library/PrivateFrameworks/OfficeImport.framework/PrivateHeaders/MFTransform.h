/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSObject<MFDeviceDriver>;

// Not exported
@interface MFTransform : NSObject <NSCopying>
{
    struct CGAffineTransform m_world;
    struct CGPoint m_windowOrg;
    struct CGPoint m_windowExt;
    struct CGPoint m_viewportOrg;
    struct CGPoint m_viewportExt;
    struct CGAffineTransform m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)LPtoDP:(struct CGPoint)arg1;
- (struct CGPoint)DPtoLP:(struct CGPoint)arg1;
- (int)updateTransform;
- (void)setTransformMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)getTransformMatrix;
- (int)offsetViewportOrg:(int)arg1:(int)arg2;
- (int)offsetWindowOrg:(int)arg1:(int)arg2;
- (void)setViewportExt:(struct CGPoint)arg1;
- (void)setWindowExt:(struct CGPoint)arg1;
- (void)setViewportOrg:(struct CGPoint)arg1;
- (void)setWindowOrg:(struct CGPoint)arg1;
- (int)setViewportOrg:(int)arg1:(int)arg2;
- (int)setWindowOrg:(int)arg1:(int)arg2;
- (int)getMapMode;
- (int)setMapMode:(int)arg1;
- (struct CGPoint)getViewportOrg;
- (struct CGPoint)getWindowOrg;
- (struct CGPoint)getViewportExtent;
- (struct CGPoint)getWindowExtent;
- (int)scaleViewportExt:(int)arg1:(int)arg2:(int)arg3:(int)arg4;
- (int)scaleWindowExt:(int)arg1:(int)arg2:(int)arg3:(int)arg4;
- (int)setViewportExt:(int)arg1:(int)arg2;
- (int)setWindowExt:(int)arg1:(int)arg2;
- (BOOL)isUpsideDown;
- (void)setWorldMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)getWorldMatrix;
- (int)modifyWorldTransform:(const struct CGAffineTransform *)arg1:(int)arg2;
- (int)setWorldTransform:(const struct CGAffineTransform *)arg1;
- (id)initWithDriver:(id)arg1;

@end

