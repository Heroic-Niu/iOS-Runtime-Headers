/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject  {
    _MFMailAccountProxySource *_proxySource;
    BOOL _allowsRestrictedAccounts;
}


- (void)dealloc;
- (id)init;
- (id)allAccountProxies;
- (id)activeAccountProxies;
- (id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2;
- (id)defaultMailAccountProxyForDelivery;
- (id)initWithAllowsRestrictedAccounts:(BOOL)arg1;

@end
