/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

// Not exported
@interface WDHyperlinkFieldMarker : WDFieldMarker
{
    NSString *mLink;
    NSString *mFragment;
    unsigned int mInternalLink:1;
}

@property(retain, nonatomic) NSString *fragment; // @synthesize fragment=mFragment;
@property(retain, nonatomic) NSString *link; // @synthesize link=mLink;
@property(nonatomic) BOOL internalLink; // @synthesize internalLink=mInternalLink;
- (void)dealloc;
- (int)runType;

@end

