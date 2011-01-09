/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIRemoveControlMinusButton : UIControl 
{
    unsigned int _rotated : 1;
    unsigned int _rotating : 1;
    unsigned int _hiding : 1;
    unsigned int _showAsPlus : 1;
    unsigned int _reserved : 28;
    float _verticalOffset;
}

+ (float)defaultWidth;
+ (id)minusImage;
+ (id)plusImage;

- (id)initWithRemoveControl:(id)arg1;
- (void)dealloc;
- (void)setHiding:(BOOL)arg1;
- (BOOL)isHiding;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)toggleRotate:(BOOL)arg1;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;

@end