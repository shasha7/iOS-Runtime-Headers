/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell;

@interface CalendarEventNotesInlineEditItem : CalendarEventEditItem <UITextViewDelegate> {
    CalendarNotesCell *_cell;
}

- (id)cellForSubitemAtIndex:(NSInteger)arg1 givenEditModel:(id)arg2;
- (void)completeCancelled;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(NSInteger)arg1 forWidth:(float)arg2;
- (id)detailViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitefgdfgdmAtIndex:(NSInteger)arg2;
- (BOOL)editItemViewDirty:(id)arg1;
- (id)identifier;
- (void)saveIntoEvent:(void*)arg1;
- (id)serializedValue;
- (BOOL)shouldCancelEditingForModel:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;

@end