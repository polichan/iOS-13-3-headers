/* Generated by RuntimeBrowser.
 */

@protocol HMDStreamingManagerDelegate <NSObject>

@required

- (void)streamingManager:(HMDStreamingManager *)arg1 didStartStream:(NSError *)arg2 slotIdentifier:(NSNumber *)arg3;
- (void)streamingManagerDidNetworkDeteriorate:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkImprove:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(HMDStreamingManager *)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamingManagerDidStopStream:(HMDStreamingManager *)arg1 error:(NSError *)arg2;
- (void)streamingManagerDidUpdateConfiguration:(HMDStreamingManager *)arg1;

@optional

- (void)streamingManager:(HMDStreamingManager *)arg1 didStartRelay:(NSError *)arg2;

@end
