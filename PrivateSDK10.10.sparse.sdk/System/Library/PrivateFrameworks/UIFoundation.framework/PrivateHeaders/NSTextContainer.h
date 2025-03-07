/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSTextLayoutOrientationProvider-Protocol.h"

@class NSArray, NSDictionary, NSLayoutManager, NSTextView;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    NSTextView *_textView;
    struct CGSize _size;
    double _lineFragmentPadding;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int _reserved:9;
    } _tcFlags;
    unsigned long long _maximumLines;
    _Bool oldAPI;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
}

+ (void)initialize;
@property unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumLines;
- (id)description;
- (long long)layoutOrientation;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;
- (void)setExclusionPaths:(id)arg1;
- (id)exclusionPaths;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (id)attributesForExtraLineFragment;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (unsigned long long)lineBreakMode;
@property double lineFragmentPadding;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
@property struct CGSize containerSize;
@property BOOL heightTracksTextView;
@property BOOL widthTracksTextView;
@property(retain) NSTextView *textView;
- (struct CGPoint)textContainerOrigin;
- (void)replaceLayoutManager:(id)arg1;
@property NSLayoutManager *layoutManager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)_commonInit;
- (double)minimumLineFragmentWidth;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)coordinateAccess:(id)arg1;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (BOOL)_containerObservesTextViewFrameChanges;
- (void)_setContainerObservesTextViewFrameChanges:(BOOL)arg1;

@end

