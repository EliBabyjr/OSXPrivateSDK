/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "WBSFormAutoFillNode-Protocol.h"

@class NSString;

// Not exported
@interface BundleAutoFillNode : NSObject <WBSFormAutoFillNode>
{
    struct BundleNodeHandle _node;
}

+ (id)autoFillNodeWithBundleNodeHandle:(const struct BundleNodeHandle *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct BundleNodeHandle *)wkBundleNodeHandle;
- (id)htmlTableCellElementCellAbove;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(BOOL)arg1;
- (BOOL)isHTMLInputElementAutofilled;
- (struct CGRect)elementBounds;
- (id)initWithWKBundleNodeHandle:(const struct BundleNodeHandle *)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

