/* Generated by RuntimeBrowser.
 */

@protocol PXDisplayAssetCollection <PXDisplayCollection>

@required

- (NSDate *)endDate;
- (unsigned long long)estimatedAssetCount;
- (bool)isAggregation;
- (bool)isEnriched;
- (bool)isEnrichmentComplete;
- (bool)isRecent;
- (NSString *)localizedDateDescription;
- (NSString *)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
- (NSString *)localizedDebugDescription;
- (NSArray *)localizedLocationNames;
- (NSString *)localizedSmartDescription;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (double)promotionScore;
- (unsigned short)px_highlightEnrichmentState;
- (long long)px_highlightKind;
- (NSDate *)startDate;

@end
