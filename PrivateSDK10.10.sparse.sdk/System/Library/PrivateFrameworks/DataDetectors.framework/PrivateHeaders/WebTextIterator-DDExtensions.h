/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WebTextIterator.h"

@interface WebTextIterator (DDExtensions)
+ (id)dd_iteratorForDocument:(id)arg1;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(char *)arg5 relevantResults:(id *)arg6 knownHighlights:(id)arg7 URLificationBlock:(id)arg8;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2;
- (struct __DDScanQuery *)dd_newQueryStopRange:(id *)arg1;
@end

