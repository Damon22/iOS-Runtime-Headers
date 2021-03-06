/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRMonogram : NSObject {
    UIColor * _color;
    unsigned int  _fontIndex;
    NSString * _text;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) unsigned int fontIndex;
@property (nonatomic, copy) NSString *text;

+ (id)_defaultMonogramColor;
+ (id)_fontSpecs;
+ (unsigned int)countOfFonts;
+ (id)fontForIndex:(unsigned int)arg1 plateDiameter:(float)arg2;
+ (float)kerningForFontIndex:(unsigned int)arg1 fontSize:(float)arg2;
+ (id)monogram;
+ (id)monogramColors;
+ (id)monogramWithData:(id)arg1;
+ (id)plateFlatColor;
+ (id)plateOverlayLayer;

- (void).cxx_destruct;
- (id)_initWithData:(id)arg1;
- (void)_takeValuesFromDataRepresentation:(id)arg1;
- (id)color;
- (id)dataRepresentation;
- (id)description;
- (unsigned int)fontIndex;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (void)setFontIndexToUnsupportedValue;
- (void)setText:(id)arg1;
- (id)snapshotWithOptions:(id)arg1;
- (id)snapshotWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 options:(id)arg3;
- (id)text;

@end
