/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildFireworksSystem : TSDGLParticleSystem {
    struct { 
        float x; 
        float y; 
        float z; 
    struct { 
        float start; 
        float duration; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    double _colorRandomness;
    double _fireworkStartingPositionX;
    } _lifeSpan;
    double _lifeSpanMinDuration;
    double _maxDistance;
    } _randomParticleSizeMinMax;
    } _randomParticleSpeedMinMax;
    } _startingColorRGB;
    } _startingPoint;
    bool_didDrawCenterBurst;
}

@property double colorRandomness;
@property bool didDrawCenterBurst;
@property double fireworkStartingPositionX;
@property struct { float x1; float x2; } lifeSpan;
@property double lifeSpanMinDuration;
@property double maxDistance;
@property struct CGSize { double x1; double x2; } randomParticleSizeMinMax;
@property struct CGPoint { double x1; double x2; } randomParticleSpeedMinMax;
@property(readonly) struct CGPoint { double x1; double x2; } startingPoint;

+ (bool)willOverrideColors;
+ (bool)willOverrideStartingPoints;

- (struct { float x1; float x2; float x3; float x4; })colorAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)colorRandomness;
- (bool)didDrawCenterBurst;
- (double)fireworkStartingPositionX;
- (struct { float x1; float x2; })lifeSpan;
- (struct { float x1; float x2; })lifeSpanAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)lifeSpanMinDuration;
- (double)maxDistance;
- (struct CGSize { double x1; double x2; })randomParticleSizeMinMax;
- (struct CGPoint { double x1; double x2; })randomParticleSpeedMinMax;
- (double)scaleAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setColorRandomness:(double)arg1;
- (void)setDidDrawCenterBurst:(bool)arg1;
- (void)setFireworkStartingPositionX:(double)arg1;
- (void)setLifeSpan:(struct { float x1; float x2; })arg1;
- (void)setLifeSpanMinDuration:(double)arg1;
- (void)setMaxDistance:(double)arg1;
- (void)setRandomParticleSizeMinMax:(struct CGSize { double x1; double x2; })arg1;
- (void)setRandomParticleSpeedMinMax:(struct CGPoint { double x1; double x2; })arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize { double x1; double x2; })arg2 reverseDrawOrder:(bool)arg3;
- (struct { float x1; float x2; float x3; })speedAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)speedMax;
- (struct CGPoint { double x1; double x2; })startingPoint;
- (struct CGPoint { double x1; double x2; })startingPointAtIndexPoint:(struct CGPoint { double x1; double x2; })arg1;

@end