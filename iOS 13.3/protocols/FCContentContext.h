/* Generated by RuntimeBrowser.
 */

@protocol FCContentContext <NSObject, FCCacheFlushing>

@required

- (<FCNewsAppConfigurationManager> *)appConfigurationManager;
- (FCArticleController *)articleController;
- (NSURL *)assetCacheDirectoryURL;
- (FCAssetManager *)assetManager;
- (<FCBackgroundTaskable> *)backgroundTaskable;
- (<FCCoreConfigurationManager> *)configurationManager;
- (NSString *)contentDirectory;
- (NSString *)contentEnvironmentToken;
- (NSString *)contentStoreFrontID;
- (FCFlintResourceManager *)flintResourceManager;
- (<FCMagazinesConfigurationManager> *)magazinesConfigurationManager;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (<FCCoreConfigurationManager><FCNewsAppConfigurationManager> *)news_core_ConfigurationManager;
- (<FCPPTContext> *)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (long long)preferredMediaQuality;
- (<FCJSONRecordSourceType> *)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
- (<FCJSONRecordSourceType> *)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
- (<FCJSONRecordTreeSourceType> *)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (<FCJSONRecordTreeSourceType> *)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (void)setWebArchiveSource:(id <FCWebArchiveSource>)arg1;
- (NSString *)supportedContentStoreFrontID;
- (FCTagController *)tagController;
- (NSURL *)webArchiveCacheDirectoryURL;
- (<FCWebArchiveSource> *)webArchiveSource;

@end
