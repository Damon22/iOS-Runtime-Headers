/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationBarBackgroundView : UIView {
    _UIBackdropView * _backdropView;
    UIView * _borderView;
    BOOL  _separatorOnTop;
    UIView * _shadowView;
    _UINavigationBarAppearanceStorage * appearanceStorage;
    int  barStyle;
    UIColor * barTintColor;
    BOOL  barWantsAdaptiveBackdrop;
    BOOL  translucent;
}

@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (nonatomic, retain) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (nonatomic) int backdropStyle;
@property (readonly) _UIBackdropView *backdropView;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) BOOL barWantsAdaptiveBackdrop;
@property (nonatomic) BOOL separatorOnTop;
@property (getter=isTranslucent, nonatomic) BOOL translucent;

- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)_setShadowView:(id)arg1;
- (id)_shadowView;
- (id)appearanceStorage;
- (int)backdropStyle;
- (id)backdropView;
- (int)barStyle;
- (id)barTintColor;
- (BOOL)barWantsAdaptiveBackdrop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTranslucent;
- (void)layoutSubviews;
- (BOOL)separatorOnTop;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBackdropStyle:(int)arg1;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setSeparatorOnTop:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)updateBackgroundImage;

@end
