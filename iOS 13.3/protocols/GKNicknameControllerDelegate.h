/* Generated by RuntimeBrowser.
 */

@protocol GKNicknameControllerDelegate <NSObject>

@optional

- (void)keyboardWillHide:(NSNotification *)arg1;
- (void)keyboardWillShow:(NSNotification *)arg1;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (void)nicknameTextDidChangeWithMessage:(NSString *)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(NSString *)arg1 error:(NSError *)arg2;

@end
