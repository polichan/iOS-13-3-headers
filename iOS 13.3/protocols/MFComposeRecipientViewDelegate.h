/* Generated by RuntimeBrowser.
 */

@protocol MFComposeRecipientViewDelegate <MFComposeHeaderViewDelegate>

@optional

- (bool)chooseSelectedSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForAddress:(NSString *)arg2;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didAddRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didAddRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didRemoveRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didReplaceRecipients:(NSArray *)arg2 withRecipients:(NSArray *)arg3;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showCorecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showPersonCardForAtom:(MFModernComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showPersonCardForRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewReturnPressed:(MFComposeRecipientView *)arg1;
- (bool)composeRecipientViewShowingSearchResults:(MFComposeRecipientView *)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (bool)presentSearchResultsForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (void)recipientViewDidBecomeFirstResponder:(MFComposeRecipientView *)arg1;
- (void)recipientViewDidResignFirstResponder:(MFComposeRecipientView *)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(MFComposeRecipientView *)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;

@end
