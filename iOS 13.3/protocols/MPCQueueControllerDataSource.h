/* Generated by RuntimeBrowser.
 */

@protocol MPCQueueControllerDataSource <MPShuffleableSectionedIdentifierListDataSource>

@required

- (bool)containsLiveStream;
- (bool)containsTransportableContent;
- (MPAVItem *)itemForItem:(NSString *)arg1 inSection:(NSString *)arg2;
- (void)loadPlaybackContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MPPlaybackContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@optional

- (bool)canSkipItem:(NSString *)arg1;
- (NSString *)firstItemIntersectingIdentifierSet:(MPIdentifierSet *)arg1;
- (void)itemDidBeginPlayback:(MPAVItem *)arg1;
- (void)loadAdditionalItemsForSection:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (MPPlaceholderAVItem *)placeholderItemForLoadingAdditionalItemsInSection:(NSString *)arg1;
- (bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(NSString *)arg1;
- (bool)shouldUsePlaceholderForItem:(NSString *)arg1 inSection:(NSString *)arg2;

@end
