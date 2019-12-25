/* Generated by RuntimeBrowser.
 */

@protocol HKMedicalRecordCodings <NSObject>

@required

+ (NSString *)defaultDisplayString;

- (NSString *)fallbackDisplayString;
- (NSArray *)indexKeywords;
- (NSArray *)medicalRecordCodings;
- (NSArray *)medicalRecordPreferredSystems;
- (HKMedicalCodingContext *)primaryCodingContext;

@end