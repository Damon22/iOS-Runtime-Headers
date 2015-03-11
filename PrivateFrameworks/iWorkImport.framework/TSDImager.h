/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <TSDCanvasDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
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
    struct CGSize { 
        double width; 
        double height; 
    boolmDistortedToMatch;
    boolmDrawingIntoPDF;
    boolmImageMustHaveEvenDimensions;
    boolmIsPrinting;
    boolmReusableShouldUseSRGBColorSpace;
    boolmShouldReuseBitmapContext;
    boolmShouldUseSRGBColorSpace;
    boolmUseScaledImageSize;
    } mActualScaledClipRect;
    struct CGColor { } *mBackgroundColor;
    TSDCanvas *mCanvas;
    } mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    NSArray *mInfos;
    } mMaximumScaledImageSize;
    id mPostRenderAction;
    } mReusableActualScaledClipRect;
    struct CGContext { } *mReusableBitmapContext;
    } mReusableBounds;
    } mReusableIntegralBounds;
    } mReusableScaledImageSize;
    } mScaledImageSize;
    } mUnscaledClipRect;
    double mViewScale;
}

@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } actualScaledClipRect;
@property struct CGColor { }* backgroundColor;
@property(retain,readonly) TSDCanvas * canvas;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool distortedToMatch;
@property(readonly) unsigned long long hash;
@property bool imageMustHaveEvenDimensions;
@property(retain) NSArray * infos;
@property bool isPrinting;
@property struct CGSize { double x1; double x2; } maximumScaledImageSize;
@property struct CGSize { double x1; double x2; } scaledImageSize;
@property bool shouldReuseBitmapContext;
@property(readonly) Class superclass;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledClipRect;
@property double viewScale;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actualScaledClipRect;
- (struct CGColor { }*)backgroundColor;
- (id)canvas;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (bool)distortedToMatch;
- (id)documentRoot;
- (bool)drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (bool)imageMustHaveEvenDimensions;
- (id)infos;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrinting;
- (bool)isPrintingCanvas;
- (struct CGSize { double x1; double x2; })maximumScaledImageSize;
- (struct CGImage { }*)newImage;
- (bool)p_configureCanvas;
- (void)p_drawPageInContext:(struct CGContext { }*)arg1 createPage:(bool)arg2;
- (struct CGImage { }*)p_newImageInReusableContext;
- (id)pdfData;
- (struct CGSize { double x1; double x2; })scaledImageSize;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDistortedToMatch:(bool)arg1;
- (void)setImageMustHaveEvenDimensions:(bool)arg1;
- (void)setInfos:(id)arg1;
- (void)setIsPrinting:(bool)arg1;
- (void)setMaximumScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPostRenderAction:(id)arg1;
- (void)setScaledImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldReuseBitmapContext:(bool)arg1;
- (void)setUnscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewScale:(double)arg1;
- (bool)shouldReuseBitmapContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;
- (double)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end