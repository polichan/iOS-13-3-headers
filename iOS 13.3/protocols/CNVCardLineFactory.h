/* Generated by RuntimeBrowser.
 */

@protocol CNVCardLineFactory <NSObject>

@required

- (<CNVCardParameterLine> *)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2;
- (<CNVCardParameterLine> *)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2 itemSeparator:(NSString *)arg3;
- (<CNVCardParameterLine> *)dataLineWithName:(NSString *)arg1 value:(NSData *)arg2;
- (<CNVCardLine> *)lineWithLiteralValue:(NSData *)arg1;
- (<CNVCardParameterLine> *)stringLineWithName:(NSString *)arg1 value:(NSString *)arg2;
- (<CNVCardLine> *)versionPlaceholderLine;

@end
