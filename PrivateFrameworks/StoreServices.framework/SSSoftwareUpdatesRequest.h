/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSoftwareUpdatesContext, <SSSoftwareUpdatesRequestDelegate>;

@interface SSSoftwareUpdatesRequest : SSRequest  {
    SSSoftwareUpdatesContext *_context;
}

@property(readonly) SSSoftwareUpdatesContext * updateQueueContext;
@property <SSSoftwareUpdatesRequestDelegate> * delegate;


- (void)dealloc;
- (id)updateQueueContext;
- (id)initWithUpdateQueueContext:(id)arg1;
- (void)startWithUpdatesResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;

@end
