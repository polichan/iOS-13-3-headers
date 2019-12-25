/* Generated by RuntimeBrowser.
 */

@protocol SFTableRowCardSection <SFCardSection>

@required

- (bool)alignRowsToHeader;
- (SFTableAlignmentSchema *)alignmentSchema;
- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSArray *)data;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)isSubHeader;
- (NSData *)jsonData;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (bool)reducedRowHeight;
- (NSArray *)richData;
- (int)separatorStyle;
- (void)setAlignRowsToHeader:(bool)arg1;
- (void)setAlignmentSchema:(SFTableAlignmentSchema *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setData:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSubHeader:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setReducedRowHeight:(bool)arg1;
- (void)setRichData:(NSArray *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTabGroupIdentifier:(NSString *)arg1;
- (void)setTableIdentifier:(NSString *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setVerticalAlign:(int)arg1;
- (NSString *)tabGroupIdentifier;
- (NSString *)tableIdentifier;
- (NSString *)type;
- (int)verticalAlign;

@end
