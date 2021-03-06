/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {
    CALayer * _horizontalSeparatorLayer;
    TPiOSMarginAdjustRep * _marginAdjustRep;
    CALayer * _verticalSeparatorLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TPiOSMarginAdjustRep *marginAdjustRep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bodyReps;
- (bool)childRepIsMasterDrawable:(id)arg1;
- (bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)layerClass;
- (id)marginAdjustRep;
- (bool)masksToBounds;
- (bool)p_pageRequiresHorizontalSeparator;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willBeRemoved;

@end
