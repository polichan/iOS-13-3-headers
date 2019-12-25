/* Generated by RuntimeBrowser.
 */

@protocol PXGAccessibilityRendererDelegate <NSObject>

@required

- (PXGHitTestResult *)accessibilityHitTestResultAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (PXGLayout *)accessibilityRootLayout;
- (NSObject<PXAccessibilityView> *)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (<PXDisplayAsset> *)assetClosestToAsset:(id <PXDisplayAsset>)arg1 inDirection:(unsigned long long)arg2;
- (void)axScrollToAsset:(id <PXDisplayAsset>)arg1;
- (bool)canSelectAccessibilityGroupElements;
- (bool)canSelectAccessibilityGroupElementsChildren;
- (bool)itemDidShowAlternateUIAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)itemDidShowDefaultUIAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)itemWasDoubleClickedWithHitTestResult:(PXGHitTestResult *)arg1;
- (bool)itemWasRightClickedWithHitTestResult:(PXGHitTestResult *)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)selectAssets:(NSArray *)arg1;

@end
