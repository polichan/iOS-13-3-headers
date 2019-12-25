/* Generated by RuntimeBrowser.
 */

@protocol IKJSNavigationDocument <JSExport>

@required

- (NSString *)OPTION_RETAIN_CONTEXT;
- (void)clear;
- (void)dismissModal;
- (NSArray *)documents;
- (void)insertBeforeDocument:(IKDOMDocument *)arg1 :(IKDOMDocument *)arg2 :(NSDictionary *)arg3;
- (void)popDocument;
- (void)popToDocument:(IKDOMDocument *)arg1;
- (void)popToRootDocument;
- (void)presentModal:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)pushDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)removeDocument:(IKDOMDocument *)arg1;
- (void)replaceDocument:(IKDOMDocument *)arg1 :(IKDOMDocument *)arg2 :(NSDictionary *)arg3;
- (void)setDocuments:(NSArray *)arg1 :(NSDictionary *)arg2;

@end
