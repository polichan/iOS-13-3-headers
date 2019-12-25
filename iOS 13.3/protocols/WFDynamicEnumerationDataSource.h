/* Generated by RuntimeBrowser.
 */

@protocol WFDynamicEnumerationDataSource <NSObject>

@required

- (NSString *)enumeration:(WFEnumerationParameter *)arg1 localizedLabelForPossibleState:(WFVariableSubstitutableParameterState *)arg2;

@optional

- (id)defaultSerializedRepresentationForEnumeration:(WFEnumerationParameter *)arg1;
- (WFColor *)enumeration:(WFEnumerationParameter *)arg1 accessoryColorForPossibleState:(WFVariableSubstitutableParameterState *)arg2;
- (bool)enumerationAllowsMultipleValues:(WFEnumerationParameter *)arg1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFEnumerationParameter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)loadPossibleStatesForEnumeration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFEnumerationParameter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)possibleStatesForEnumeration:(WFEnumerationParameter *)arg1;

@end
