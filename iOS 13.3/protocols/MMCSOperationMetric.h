/* Generated by RuntimeBrowser.
 */

@protocol MMCSOperationMetric <NSObject>

@required

- (void)addRange:(id <MMCSOperationStateTimeRange>)arg1;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesUploaded;
- (NSMutableDictionary *)chunkCountByChunkProfile;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (double)duration;
- (double)executing;
- (NSMutableDictionary *)fileCountByChunkProfile;
- (<MMCSOperationStateTimeRange> *)newRangeWithOperationState:(unsigned long long)arg1 startDate:(NSDate *)arg2 duration:(double)arg3;
- (double)queueing;
- (NSArray *)rangesCopy;
- (NSMutableSet *)requestUUIDs;
- (void)setBytesDownloaded:(unsigned long long)arg1;
- (void)setBytesUploaded:(unsigned long long)arg1;
- (void)setConnections:(unsigned long long)arg1;
- (void)setConnectionsCreated:(unsigned long long)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (NSDate *)startDate;
- (NSMutableDictionary *)totalBytesByChunkProfile;

@end
