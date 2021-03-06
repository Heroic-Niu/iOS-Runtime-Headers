/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AASigningSession, NSDictionary;

@interface AASetupAssistantDelegateTokenFetchRequest : AARequest  {
    NSDictionary *accountParameters;
    AASigningSession *signingSession;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithAccountParameters:(id)arg1 signingSession:(id)arg2;

@end
