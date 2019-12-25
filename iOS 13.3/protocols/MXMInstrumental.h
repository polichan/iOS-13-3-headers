/* Generated by RuntimeBrowser.
 */

@protocol MXMInstrumental <NSCopying>

@required

- (bool)harvestData:(id*)arg1 error:(id*)arg2;

@optional

- (void)didStartAtTime:(unsigned long long)arg1 startDate:(NSDate *)arg2;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(NSDate *)arg2;
- (bool)prepareWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (void)willStop;

@end
