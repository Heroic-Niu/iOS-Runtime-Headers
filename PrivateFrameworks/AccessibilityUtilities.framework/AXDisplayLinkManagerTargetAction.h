/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDisplayLinkManagerTargetAction : NSObject  {
    id _target;
    SEL _actionSelector;
    int _frameInterval;
    int _displayDidRefreshCount;
}

@property(setter=_setTarget:,retain) id _target;
@property(setter=_setActionSelector:) SEL _actionSelector;
@property(setter=_setFrameInterval:) int _frameInterval;
@property(setter=_setDisplayDidRefreshCount:) int _displayDidRefreshCount;


- (void)_setDisplayDidRefreshCount:(int)arg1;
- (int)_frameInterval;
- (int)_displayDidRefreshCount;
- (SEL)_actionSelector;
- (void)_setFrameInterval:(int)arg1;
- (void)_setActionSelector:(SEL)arg1;
- (void)displayDidRefresh:(id)arg1;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(int)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)_setTarget:(id)arg1;
- (id)_target;

@end
