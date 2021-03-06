/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem  {
    id _internal;
}

@property(readonly) int confidence;
@property(readonly) BOOL isMoving;
@property(readonly) BOOL isWalking;
@property(readonly) BOOL isRunning;
@property(readonly) BOOL isDriving;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })activity;
- (BOOL)isRunning;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDriving;
- (BOOL)isWalking;
- (BOOL)isMoving;
- (int)confidence;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })arg1 andTimestamp:(double)arg2;

@end
