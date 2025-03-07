/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/TextFieldEditor.h>

@class NSString, UnifiedField;

// Not exported
@interface UnifiedFieldEditor : TextFieldEditor
{
    UnifiedField *field;
    NSString *_previousMarkedText;
    BOOL _selectionWasAutocompleted;
    BOOL _isAdjustingAutocompleteSelection;
}

@property(nonatomic, getter=isAdjustingAutocompleteSelection) BOOL adjustingAutocompleteSelection; // @synthesize adjustingAutocompleteSelection=_isAdjustingAutocompleteSelection;
@property(nonatomic) BOOL selectionWasAutocompleted; // @synthesize selectionWasAutocompleted=_selectionWasAutocompleted;
- (void).cxx_destruct;
- (id)selectedTextAttributes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (BOOL)_allTextSelected;
- (id)_replacementStringforWritingToPasteboard;
- (void)smartInsertForString:(id)arg1 replacingRange:(struct _NSRange)arg2 beforeString:(id *)arg3 afterString:(id *)arg4;
- (BOOL)shouldDrawInsertionPoint;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)pasteReplacesTabsWithSpaces;
- (void)pasteAsPlainText:(id)arg1;
- (void)paste:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)didChangeText;
- (void)_notifyFieldIfMarkedTextDidChange;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)acceptableDragTypes;
- (BOOL)canSmoothFontsInLayer;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithField:(id)arg1;

@end

