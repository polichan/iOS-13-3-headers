/* Generated by RuntimeBrowser.
 */

@protocol _UITextItemInteracting <UITextInput, _UITextContent>

@required

- (bool)_allowInteraction:(long long)arg1 forTextInteractableItem:(_UITextInteractableItem *)arg2;
- (bool)_mightHaveInteractableItems;
- (UITargetedPreview *)_targetedPreviewForTextInteractableItem:(_UITextInteractableItem *)arg1 dismissing:(bool)arg2;
- (_UITextInteractableItem *)_textInteractableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@optional

- (bool)_allowHighlightForTextInteractableItem:(_UITextInteractableItem *)arg1;

@end
