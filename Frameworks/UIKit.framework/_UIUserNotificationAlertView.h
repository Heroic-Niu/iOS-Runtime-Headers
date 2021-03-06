/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUserNotificationAlertView : UIAlertView  {
    struct __CFUserNotification { } *_userNotification;
    struct __CFRunLoopSource { } *_userNotificationRunLoopSource;
    BOOL _runsModal;
    BOOL _runningModal;
}

+ (void)initialize;

- (void)dealloc;
- (void)setRemoteViewController:(id)arg1;
- (void)_cancelUserNotification;
- (void)cancelAlertView;
- (void)setHostedWindow:(id)arg1;
- (BOOL)runsModal;
- (id)textFieldAtIndex:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (BOOL)isVisible;
- (void)show;
- (int)addButtonWithTitle:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;

@end
