/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSDictionary, NSMutableArray, NSMutableIndexSet, NSNumber, TSCH3DChartAnimationEngine, TSCH3DChartRenderer, TSCH3DChartRendererState, TSCH3DChartRepCachedTexture, TSCH3DChartRepFPSCounter, TSCH3DChartRepRenderQueue, TSCH3DGLContext, TSCH3DScene;

@interface TSCH3DChartRep : TSCHChartRep <TSCH3DChartAnimationRendering, TSCH3DGLLayerProvider> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolmAllowLowResolutionTextures;
    boolmAnimationHasEnded;
    boolmDidChangeDepth;
    boolmDocumentWillClose;
    boolmHasEverRendered;
    boolmHasInterestInSharegroup;
    boolmHasSkippedInitialTexture;
    boolmIsBackgroundLayoutAndRendering;
    boolmIsInInteractiveMode;
    boolmLayerPositionIsInvalidated;
    boolmMaybeBeginDragging;
    boolmMaybeBeginScrolling;
    boolmShouldDelayDestroyFramebuffer;
    boolmTextureForHiding;
    boolmWillBeRemoved;
    boolmWillChangeAppearance;
    int mAnimationBuildType;
    Class mAnimationClass;
    long long mAnimationFrameCount;
    TSCH3DGLContext *mAnimationGLContext;
    TSCH3DScene *mAnimationLayerScene;
    long long mAnimationStage;
    } mBeginScaleChartBodyLayoutRect;
    NSDictionary *mBuildAttributes;
    int mCGContextDrawingMode;
    TSCH3DChartRepCachedTexture *mCachedTexture;
    unsigned long long mChunkCount;
    } mCurrentVisibleBoundsInLayerRelativeSpace;
    NSNumber *mCustomAnimationContentsScale;
    TSCH3DChartAnimationEngine *mEngine;
    TSCH3DChartRepFPSCounter *mFPSCounter;
    NSMutableIndexSet *mInteractiveFlags;
    } mMinimumInteractiveSize;
    unsigned long long mNumberOfInteractiveRotations;
    float mOverrideRenderingSamples;
    int mRenderMode;
    TSCH3DChartRepRenderQueue *mRenderQueue;
    TSCH3DChartRenderer *mRenderer3D;
    TSCH3DChartRendererState *mRendererState;
    CALayer *mRootLayer;
    NSMutableArray *mSelectionKnobsLayers;
}

@property(readonly) int animationBuildType;
@property(readonly) Class animationClass;
@property(retain) TSCH3DGLContext * animationGLContext;
@property(readonly) NSDictionary * buildAttributes;
@property(retain) TSCH3DChartRepCachedTexture * cachedTexture;
@property(retain) NSNumber * customAnimationContentsScale;
@property(readonly) TSCH3DChartAnimationEngine * engine;
@property(readonly) TSCH3DScene * layoutScene;
@property(readonly) Class renderCycleClass;
@property(readonly) TSCH3DChartRenderer * renderer3D;
@property(readonly) TSCH3DScene * renderingScene;
@property bool textureForHiding;

+ (bool)canRenderUsingOpenGL;
+ (id)chartRep3DFromLayer:(id)arg1;
+ (bool)hasDelegateInLayer:(id)arg1;
+ (id)p_allFillProperties;
+ (id)sharegroupTokensOfInterest;

- (id).cxx_construct;
- (id)GLLayer;
- (id)GLLayerNoCreate;
- (id)GLLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)addChartKnobsToArray:(id)arg1;
- (void)addRepToRenderQueueInFront:(bool)arg1;
- (int)animationBuildType;
- (Class)animationClass;
- (void)animationDidEndForChunkStage:(long long)arg1;
- (id)animationFilter;
- (void)animationFrameDidEndForGLLayer;
- (id)animationGLContext;
- (id)animationLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 untransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4 returningDrawingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 TSDGLLayer:(id*)arg6;
- (void)animationWillBeginForChunkStage:(long long)arg1;
- (void)becameNotSelected;
- (void)becameSelected;
- (void)beginDragInsertFromPalette;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyCanvasBoundsFromCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (id)buildAttributes;
- (id)cachedTexture;
- (bool)canDrawInParallel;
- (bool)canRenderIntoGLLayer;
- (void)cancelMultipassRendering;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })canvasBoundsFromBodyCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)chartDidChangeAppearance;
- (void)chartWillChangeAppearance;
- (void)clearDragHighlightAndPreviewState;
- (void)clearRenderers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (id)customAnimationContentsScale;
- (void)dealloc;
- (id)deliveryTimeSlice;
- (void)didAnimateFromCDE;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)didEndZooming;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)dynamicChange3DDepthDidBegin;
- (id)dynamicChange3DDepthDidEndOutInfoGeometryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)dynamicDragDidBegin;
- (void)dynamicDragDidEnd;
- (id)dynamicResizeDidBegin;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamically3DRotatingWithTracker:(id)arg1;
- (void)dynamically3DSetNewDepth:(double)arg1;
- (void)dynamicallyUpdatingLegendFrameWithTracker:(id)arg1;
- (void)editor:(id)arg1 isDeselectingInfos:(id)arg2;
- (void)editor:(id)arg1 isSelectingInfos:(id)arg2;
- (void)endDragInsertFromPalette;
- (id)engine;
- (bool)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)hitChartElements:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateLayerCache;
- (void)invalidateLayoutCache;
- (void)invalidateSubselectionKnobs;
- (bool)isLastAbsoluteChunkStageForFinalElements:(bool)arg1 chunkStage:(long long)arg2;
- (bool)isLastAbsoluteChunkStageForFinalElements:(bool)arg1;
- (bool)isLastChunkStageForFinalElements:(bool)arg1 chunkStage:(long long)arg2;
- (bool)isLastChunkStageForFinalElements:(bool)arg1;
- (bool)isOpaque;
- (id)knobForDynamicStyleChangeKey:(id)arg1;
- (void)knobTrackingDidBegin:(id)arg1;
- (void)knobTrackingDidEnd:(id)arg1;
- (Class)layerClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (id)layoutItem;
- (id)layoutScene;
- (void)markTextureDirty;
- (bool)mustDrawOnMainThreadForInteractiveCanvas;
- (id)newTrackerForKnob:(id)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })normalizedPointFromNaturalPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })normalizedPointFromTouchPoint:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })normalizedPointFromUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offsetFromLayerRelativeToBodyCanvas;
- (long long)p_absoluteStageFromTextureStage:(long long)arg1 isFinalElements:(bool)arg2;
- (void)p_addInterestForSharegroups;
- (void)p_addLegendLayerToAnimationLayer:(id)arg1;
- (void)p_addSeparateRenderedLayersToAnimationLayer:(id)arg1 intersectedBodyCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_adjustedAnimationDrawableFrameWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 untransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_animationFlushResources;
- (id)p_animationLayoutScene;
- (id)p_animationScene;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)p_beginInteractiveMode;
- (void)p_cacheRenderAnimationTextureForFinalElements:(bool)arg1;
- (void)p_calculateGLLayerFrame;
- (void)p_calculateOverrideRenderingSamplesForPrintingOrPdfRendering;
- (void)p_calculateSelectionKnobsLayersForSelectionPaths:(id)arg1;
- (bool)p_canEndInteractiveMode;
- (bool)p_canRender;
- (void)p_cancelEndInteractiveModeCallback;
- (id)p_chart3DLayout;
- (struct ChartProjectedBoundsConverter { struct ChartProjectedBoundsSpaces {} *x1; float x2; boolx3; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_4_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_4_1_2; } x4; })p_chart3DLayoutBoundsConverterUpdatingLayoutIfNecessary:(bool)arg1;
- (void)p_checkPresenterDisplayForAnimationSession:(id)arg1;
- (void)p_clearCachedTexture;
- (void)p_clearInteractiveFlag:(unsigned long long)arg1;
- (void)p_clearInteractiveFlagsBeforeRemoval;
- (void)p_createBackgroundLayoutLayer;
- (void)p_documentWillClose:(id)arg1;
- (long long)p_effectiveStageFromTextureStage:(long long)arg1 isFinalElements:(bool)arg2;
- (void)p_endInteractiveMode;
- (void)p_endInteractiveModeAfterDelay:(double)arg1;
- (id)p_generateCachedAnimationTextureForFinalElements:(bool)arg1 includesChart:(bool)arg2;
- (bool)p_hasCachedTextureForFinalElements:(bool)arg1;
- (bool)p_hasInteractiveFlag:(unsigned long long)arg1;
- (void)p_invalidateLayoutLabelsBoundsClass:(Class)arg1;
- (void)p_invalidateSubselectinoKnobsLayers;
- (bool)p_isBackgroundLayoutThread;
- (bool)p_isDrawingInCGContext;
- (bool)p_isThumbnailOrInsertionIconCanvas:(id)arg1;
- (bool)p_isValidTextureStageForFinalElements:(bool)arg1;
- (long long)p_lastTextureStage;
- (double)p_layerContentsScale;
- (id)p_lazyRenderer3D;
- (void)p_lowQualityRenderWithGLContext:(id)arg1 bodyCanvasVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderer:(id)arg3;
- (bool)p_needInteractiveMode;
- (void)p_pixelAlignLegendLayer:(id)arg1 basedOnUnalignedParentLayer:(id)arg2;
- (id)p_pixelAlignmentLayer;
- (void)p_recreateGLLayer;
- (void)p_removeInterestForSharegroupsIfNecessary;
- (void)p_removeRepFromRenderQueue;
- (id)p_renderLegendTextureWithBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 returningBodyCanvasBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)p_renderQueue;
- (id)p_renderSeparateAnimationLayers:(id)arg1 intersectedBodyCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)p_renderTextureWithBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 finalTexture:(bool)arg2 enumerationBlock:(id)arg3;
- (id)p_repSharegroupToken;
- (struct CGPoint { double x1; double x2; })p_scaledIntegralOffsetFromFractionInFrame:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)p_set3DRotateKnobVisible:(bool)arg1;
- (void)p_setAnimationLevelOfDetailGeometryForScene:(id)arg1;
- (void)p_setChartChunkStage:(long long)arg1;
- (void)p_setInteractiveFlag:(unsigned long long)arg1;
- (void)p_setupForAnimationRendering;
- (void)p_setupForRendering;
- (id)p_sharegroupTokensOfInterest;
- (bool)p_shouldDelayDestroyFramebuffer;
- (bool)p_shouldRender;
- (bool)p_shouldRenderAnimationTextureAsSingleImage;
- (bool)p_shouldShowRotate3DKnobWithInfoCount:(unsigned long long)arg1;
- (bool)p_shouldSkipInitialTextureRequestForFinalElements:(bool)arg1;
- (bool)p_shouldUpdateRendererLayoutForCurrentLayer;
- (bool)p_threadSafeExitInteractiveMode;
- (void)p_updateChunkCount;
- (void)p_updateChunkCountIfNecessary;
- (void)p_updateElementSceneObjectPropertiesForScene:(id)arg1;
- (void)p_updateGLLayerPixelAlignment;
- (void)p_updateLayerTree;
- (void)p_updateRendererLayoutForCurrentLayer;
- (void)p_updateVisibleBoundsRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_validateVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_visibleRectInRepLayer;
- (id)p_wedgeExplosionTracker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelAlignBodyCanvasBounds:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)processChanges:(id)arg1;
- (bool)processMultipassRendering;
- (void)protected_dynamicStyleChangeDidEnd:(id)arg1;
- (void)protected_dynamicStyleChangeWillBegin:(id)arg1;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (void)renderAnimationFrame:(float)arg1 drawingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 chunkStage:(long long)arg3;
- (Class)renderCycleClass;
- (void)renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)renderIntoGLLayerWithGLContext:(id)arg1;
- (bool)renderLegendIntoSeparateLayer;
- (id)renderer3D;
- (id)rendererState;
- (float)renderingSamples;
- (id)renderingScene;
- (bool)rotationKnobHitByNaturalPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledVisibleCanvasBounds;
- (void)setAnimationGLContext:(id)arg1;
- (void)setAnimationType:(int)arg1 chunkStage:(long long)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned long long)arg4 attributes:(id)arg5;
- (void)setCachedTexture:(id)arg1;
- (void)setCustomAnimationContentsScale:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayIfNecessaryUpdateGLLayerPixelAlignment:(bool)arg1;
- (void)setTextureAnimationInfo:(id)arg1;
- (void)setTextureForHiding:(bool)arg1;
- (void)setTextureStage:(unsigned long long)arg1;
- (bool)shouldApplyFractionalTranslationInRootForLegendLayer;
- (bool)shouldShowDragHUD;
- (bool)shouldShowKnobs;
- (bool)shouldShowLegendHighlight;
- (bool)shouldShowSelectionHighlight;
- (bool)shouldShowSizesInRulers;
- (bool)shouldUseLegendLayerForLayerBasedRep;
- (void)showHitFeedbackForSelectionPath:(id)arg1;
- (id)textureForContext:(id)arg1;
- (bool)textureForHiding;
- (int)tilingMode;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (id)update3DRendererWithSceneAreaLayoutItem:(id)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)viewScaleDidChange;
- (void)viewScrollDidChange;
- (void)viewScrollingEnded;
- (void)willAnimateIntoCDE;
- (void)willBeRemoved;
- (void)willBeginZooming;
- (void)willLayoutAndRenderInBackground;
- (void)willUpdateLayer:(id)arg1;

@end