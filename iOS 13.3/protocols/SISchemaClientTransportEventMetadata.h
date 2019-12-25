/* Generated by RuntimeBrowser.
 */

@protocol SISchemaClientTransportEventMetadata <NSObject>

@required

- (long long)eventTransmittedRelativeToBootTimeTimestampNs;
- (NSString *)eventTransmittedTimestampRefId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (long long)serverArrivedTimestampNs;
- (void)setEventTransmittedRelativeToBootTimeTimestampNs:(long long)arg1;
- (void)setEventTransmittedTimestampRefId:(NSString *)arg1;
- (void)setServerArrivedTimestampNs:(long long)arg1;

@end