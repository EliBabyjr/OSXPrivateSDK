/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDString;

// Not exported
@interface EDComment : NSObject
{
    BOOL _visible;
    int _rowIndex;
    int _columnIndex;
    EDString *_author;
}

@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) EDString *author; // @synthesize author=_author;
@property(nonatomic) int columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (void)dealloc;

@end

