/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TAccessibilityUIElement.h>

// Not exported
@interface FI_ImageListUIElement : FI_TAccessibilityUIElement
{
}

- (id)description;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)axSelectedChildren;
- (id)axVisibleChildren;
- (id)axChildren;
- (struct CGRect)axFrame;
- (id)axRole;
- (_Bool)containsIndexSet:(id)arg1;
- (BOOL)accessibilityShouldUseUniqueId;
- (void)dealloc;

@end

