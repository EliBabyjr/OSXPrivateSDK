/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AnnotationKit/AKShapeAnnotation.h>

#import "AKRectangularAnnotationProtocol-Protocol.h"
#import "AKTextAnnotationProtocol-Protocol.h"

@class NSDictionary, NSString, NSTextStorage;

@interface AKRectangularShapeAnnotation : AKShapeAnnotation <AKRectangularAnnotationProtocol, AKTextAnnotationProtocol>
{
    NSTextStorage *_annotationText;
    NSDictionary *_typingAttributes;
    struct CGRect _rectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(retain) NSTextStorage *annotationText; // @synthesize annotationText=_annotationText;
@property struct CGRect rectangle; // @synthesize rectangle=_rectangle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(struct CGPoint)arg1;
- (void)adjustModelToCompensateForOriginalExif;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)displayName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property BOOL isEditingText;
@property(readonly) Class superclass;
@property BOOL textIsClipped;
@property BOOL textIsFixedHeight;
@property BOOL textIsFixedWidth;

@end

