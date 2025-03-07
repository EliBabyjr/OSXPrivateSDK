/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreUI/CUIPSDImageRef.h>

@interface CUIMutablePSDImageRef : CUIPSDImageRef
{
}

- (BOOL)saveToURL:(id)arg1 completionHandler:(id)arg2;
- (BOOL)saveWithCompletionHandler:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)updateSliceName:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addOrUpdateSlicesWithXCutPositions:(id)arg1 yCutPositions:(id)arg2;
- (void)addOrUpdateSlicesWithSliceRects:(id)arg1;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)arg1 withXCutPositions:(id)arg2 yCutPositions:(id)arg3;
- (unsigned int)newSliceRectsArray:(struct PSDRect **)arg1 withSliceRects:(id)arg2;
- (unsigned int)newUInt32CArray:(unsigned int **)arg1 withNSArray:(id)arg2 prependNumber:(id)arg3 appendNumber:(id)arg4;
- (void)deleteLayerAtIndex:(unsigned int)arg1;
- (void)insertLayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addLayer:(id)arg1;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg1;
- (struct PSDGradient *)newPSDGradientFromCUIPSDGradient:(id)arg1;
- (void)insertLayoutMetricsChannel:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addLayoutMetricsChannel:(id)arg1;
- (id)initWithPixelWidth:(unsigned long long)arg1 pixelHeight:(unsigned long long)arg2;
- (struct __CFData *)copyDefaultICCProfileData;

@end

