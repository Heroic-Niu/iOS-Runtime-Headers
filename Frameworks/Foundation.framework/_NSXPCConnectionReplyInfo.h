/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSBlock, NSString, NSXPCInterface;

@interface _NSXPCConnectionReplyInfo : NSObject  {
    NSBlock *_replyBlock;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cleanupBlock;

    NSString *_selector;
    NSXPCInterface *_interface;
}

@property(copy) NSString * selector;
@property(copy) NSBlock * replyBlock;
@property(copy) id errorBlock;
@property(copy) id cleanupBlock;
@property(retain) NSXPCInterface * interface;


- (id)interface;
- (void)dealloc;
- (id)selector;
- (void)setSelector:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setCleanupBlock:(id)arg1;
- (void)setErrorBlock:(id)arg1;
- (void)setReplyBlock:(id)arg1;
- (id)errorBlock;
- (id)cleanupBlock;
- (id)replyBlock;

@end
