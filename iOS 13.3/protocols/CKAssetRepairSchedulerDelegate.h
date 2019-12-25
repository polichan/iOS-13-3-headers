/* Generated by RuntimeBrowser.
 */

@protocol CKAssetRepairSchedulerDelegate

@required

- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 completedRepairWithMetadata:(CKUploadRequestMetadata *)arg2 error:(NSError *)arg3;
- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 completedRequestWithMetadata:(CKUploadRequestMetadata *)arg2 result:(long long)arg3;
- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 preparingRepairWithOperation:(CKRepairAssetsOperation *)arg2;
- (void)assetRepairSchedulerAllRequestsComplete:(CKAssetRepairScheduler *)arg1;

@end
