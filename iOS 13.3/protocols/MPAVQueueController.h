/* Generated by RuntimeBrowser.
 */

@protocol MPAVQueueController <MPAVQueueCoordinatingDataSource>

@required

- (void)addPlaybackContext:(void *)arg1 afterContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MPPlaybackContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addPlaybackContext:(void *)arg1 atPosition:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MPPlaybackContext *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addPlaybackContext:(void *)arg1 atPosition:(void *)arg2 jumpToIt:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: MPPlaybackContext *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addPlaybackContext:(void *)arg1 atPosition:(void *)arg2 jumpToIt:(void *)arg3 userModification:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: MPPlaybackContext *, long long, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)allowsQueueModifications;
- (bool)canSkipItem:(MPAVItem *)arg1;
- (NSString *)contentItemIDWithCurrentItemOffset:(long long)arg1 mode:(long long)arg2 didReachEnd:(bool*)arg3;
- (MPAVItem *)currentItem;
- (<MPAVQueueControllerDelegate> *)delegate;
- (long long)displayCount;
- (long long)displayIndexForContentItemID:(NSString *)arg1;
- (void)handlePlaybackFailureForItem:(MPAVItem *)arg1;
- (bool)hasUserMutations;
- (bool)isPlaceholderItemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForContentItemID:(NSString *)arg1;
- (void)jumpToContentItemID:(NSString *)arg1;
- (void)jumpToFirstContentItem;
- (void)moveContentItemID:(void *)arg1 afterContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)player:(MPAVController *)arg1 currentItemDidChangeFromItem:(MPAVItem *)arg2 toItem:(MPAVItem *)arg3;
- (<MPAVQueueCoordinating> *)queueCoordinator;
- (void)reloadWithPlaybackContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MPPlaybackContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeContentItemID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (long long)repeatType;
- (void)reset;
- (void)reshuffle;
- (void)setAllowsQueueModifications:(bool)arg1;
- (void)setDelegate:(id <MPAVQueueControllerDelegate>)arg1;
- (void)setQueueCoordinator:(id <MPAVQueueCoordinating>)arg1;
- (void)setRepeatType:(long long)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleType;
- (unsigned long long)supportedInsertionPositions;
- (NSString *)uniqueIdentifier;
- (void)updateLocationDependentPropertiesForItem:(MPAVItem *)arg1;
- (bool)userCanChangeShuffleAndRepeatType;

@optional

- (NSArray *)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long*)arg3;

@end
