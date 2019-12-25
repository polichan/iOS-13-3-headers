/* Generated by RuntimeBrowser.
 */

@protocol SISchemaInvocation <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (int)invocationAction;
- (int)invocationSource;
- (NSData *)jsonData;
- (void)setInvocationAction:(int)arg1;
- (void)setInvocationSource:(int)arg1;
- (void)setViewContainer:(SISchemaViewContainer *)arg1;
- (SISchemaViewContainer *)viewContainer;

@end
