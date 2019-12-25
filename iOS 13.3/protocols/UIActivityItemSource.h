/* Generated by RuntimeBrowser.
 */

@protocol UIActivityItemSource <NSObject>

@required

- (id)activityViewController:(UIActivityViewController *)arg1 itemForActivityType:(NSString *)arg2;
- (id)activityViewControllerPlaceholderItem:(UIActivityViewController *)arg1;

@optional

- (NSString *)activityViewController:(UIActivityViewController *)arg1 dataTypeIdentifierForActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(UIActivityViewController *)arg1 subjectForActivityType:(NSString *)arg2;
- (UIImage *)activityViewController:(UIActivityViewController *)arg1 thumbnailImageForActivityType:(NSString *)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (LPLinkMetadata *)activityViewControllerLinkMetadata:(UIActivityViewController *)arg1;

@end
