/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableSet, WebScriptObject, NSLock, SUScriptObject;



@interface SUScriptFunction : NSObject 
{
    NSMutableSet *_delegates;
    WebScriptObject *_function;
    NSLock *_lock;
    SUScriptObject *_thisObject;
}

@property(retain) WebScriptObject *scriptObject;
@property SUScriptObject *thisObject;


- (id)thisObject;
- (id)initWithScriptObject:(id)arg1;
- (void)_callFunction:(id)arg1 withArguments:(id)arg2 delegate:(id)arg3;
- (id)_copyAdjustedArgumentsForArguments:(id)arg1;
- (void)_sendResult:(id)arg1 toDelegate:(id)arg2;
- (BOOL)callWithArguments:(id)arg1;
- (BOOL)callWithArguments:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (void)setScriptObject:(id)arg1;
- (id)scriptObject;
- (void)setThisObject:(id)arg1;
- (id)callSynchronouslyWithArguments:(id)arg1;
- (void)lock;
- (void)unlock;
- (id)init;
- (void)dealloc;

@end