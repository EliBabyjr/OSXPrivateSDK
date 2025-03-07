/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFDeviceDriver-Protocol.h"

// Not exported
@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver>
{
    struct CGRect m_canvas;
    struct CGRect m_viewBox;
    struct CGAffineTransform m_viewBoxTransform;
    struct CGAffineTransform m_worldToDeviceTransform;
    struct CGAffineTransform m_combinedTransform;
}

+ (int)getROP:(id)arg1;
- (id).cxx_construct;
- (id)createBitmap:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(const char *)arg6:(unsigned int)arg7;
- (id)createDIBitmap:(id)arg1:(const char *)arg2:(unsigned int)arg3:(const char *)arg4:(unsigned int)arg5:(int)arg6;
- (id)createDIBitmap:(id)arg1:(const char *)arg2:(unsigned int)arg3:(int)arg4;
- (id)createRegionWithPath:(id)arg1;
- (id)createRegionWithRects:(id)arg1:(id)arg2;
- (id)createPath;
- (id)createFontIndirectW:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15:(id)arg16:(id)arg17:(unsigned int)arg18:(unsigned int)arg19:(unsigned int)arg20:(unsigned int)arg21:(unsigned int)arg22;
- (id)createFont:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15;
- (id)createFont:(int)arg1;
- (id)createPen:(int)arg1:(int)arg2:(id)arg3:(double *)arg4;
- (id)createPen;
- (id)createNullBrush;
- (id)createSolidBrush:(id)arg1;
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (id)createHatchBrush:(id)arg1:(int)arg2;
- (int)plgBlt:(id)arg1:(struct CGPoint *)arg2:(id)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(id)arg8:(int)arg9:(int)arg10:(struct CGAffineTransform *)arg11:(unsigned int)arg12;
- (int)maskBlt:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(id)arg6:(int)arg7:(int)arg8:(id)arg9:(int)arg10:(int)arg11:(unsigned int)arg12:(struct CGAffineTransform *)arg13:(unsigned int)arg14;
- (int)stretchBlt:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(id)arg6:(int)arg7:(int)arg8:(int)arg9:(int)arg10:(unsigned int)arg11:(struct CGAffineTransform *)arg12:(unsigned int)arg13;
- (int)bitBlt:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(id)arg6:(int)arg7:(int)arg8:(unsigned int)arg9:(struct CGAffineTransform *)arg10:(unsigned int)arg11;
- (int)patBlt:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(unsigned int)arg6;
- (int)setMetaRgn;
- (int)removeClip;
- (int)intersectClipRect:(struct CGRect)arg1;
- (int)excludeClipRect:(struct CGRect)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (int)activateTransform:(struct CGAffineTransform)arg1;
- (int)setViewBox:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (void)updateViewBoxTransform;
- (void)concatTransforms;
- (int)bezier:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9;
- (int)bezierTo:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7;
- (int)ellipse:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5;
- (int)roundRect:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(double)arg6:(double)arg7;
- (int)rectangle:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5;
- (int)lineTo:(id)arg1:(double)arg2:(double)arg3;
- (int)polyPolygon:(id)arg1:(struct CGPoint *)arg2:(int *)arg3:(int)arg4;
- (int)polygon:(id)arg1:(struct CGPoint *)arg2:(int)arg3;
- (int)polyPolyline:(id)arg1:(struct CGPoint *)arg2:(int *)arg3:(int)arg4;
- (int)polyline:(id)arg1:(struct CGPoint *)arg2:(int)arg3;
- (int)chord:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9;
- (int)pie:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9;
- (int)angleArc:(id)arg1:(int)arg2:(int)arg3:(unsigned int)arg4:(double)arg5:(double)arg6;
- (int)arcTo:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9;
- (int)arc:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9;
- (int)extTextOut:(id)arg1:(int *)arg2:(int *)arg3:(id)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9:(int *)arg10:(int)arg11;
- (int)textOut:(id)arg1:(int *)arg2:(int *)arg3:(id)arg4;
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(BOOL)arg3 stroke:(BOOL)arg4;
- (struct CGRect)getCanvas;
- (void)dealloc;
- (id)initWithCanvas:(struct CGRect)arg1;

@end

