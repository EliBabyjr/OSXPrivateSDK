/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

// Not exported
@interface ODIState : NSObject
{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    double mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (id).cxx_construct;
- (id)drawingTheme;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)setPointIndex:(int)arg1;
- (int)pointIndex;
- (void)setPointCount:(int)arg1;
- (int)pointCount;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (id)presentationNameForPointType:(int)arg1;
- (void)setGroup:(id)arg1;
- (id)group;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (double)scale;
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(BOOL)arg2;
- (struct CGRect)logicalBounds;
- (id)diagramOrientedBounds;
- (id)diagram;
- (void)dealloc;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;

@end

