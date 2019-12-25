/* Generated by RuntimeBrowser.
 */

@protocol SFDetailedRowCardSection <SFCardSection>

@required

- (SFActionItem *)action;
- (SFColor *)backgroundColor;
- (SFButton *)button;
- (bool)canBeHidden;
- (NSArray *)descriptions;
- (NSDictionary *)dictionaryRepresentation;
- (SFRichText *)footnote;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)isSecondaryTitleDetached;
- (NSData *)jsonData;
- (bool)preventThumbnailImageScaling;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (SFFormattedText *)secondaryTitle;
- (SFImage *)secondaryTitleImage;
- (int)separatorStyle;
- (void)setAction:(SFActionItem *)arg1;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setButton:(SFButton *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptions:(NSArray *)arg1;
- (void)setFootnote:(SFRichText *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsSecondaryTitleDetached:(bool)arg1;
- (void)setPreventThumbnailImageScaling:(bool)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSecondaryTitle:(SFFormattedText *)arg1;
- (void)setSecondaryTitleImage:(SFImage *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setThumbnail:(SFImage *)arg1;
- (void)setTitle:(SFRichText *)arg1;
- (void)setTrailingBottomText:(SFFormattedText *)arg1;
- (void)setTrailingMiddleText:(SFFormattedText *)arg1;
- (void)setTrailingTopText:(SFFormattedText *)arg1;
- (void)setType:(NSString *)arg1;
- (SFImage *)thumbnail;
- (SFRichText *)title;
- (SFFormattedText *)trailingBottomText;
- (SFFormattedText *)trailingMiddleText;
- (SFFormattedText *)trailingTopText;
- (NSString *)type;

@end
