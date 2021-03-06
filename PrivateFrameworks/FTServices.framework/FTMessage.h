/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSData, NSDate, NSDictionary;

@interface FTMessage : NSObject <NSCopying> {
    id _context;
    NSDictionary *_clientInfo;
    NSData *_serviceData;
    unsigned int _uniqueID;
    NSDictionary *_userInfo;
    NSDate *_creationDate;
    BOOL _forceCellular;
    NSString *_topic;
    double _timeout;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    BOOL _usingOutgoingPush;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deliveryAcknowledgementBlock;

    BOOL _wantsResponse;
    NSDictionary *_cachedBody;
    NSString *_dsAuthID;
    BOOL _wantsBinaryPush;
    BOOL _wantsIntegerUniqueIDs;
    NSDictionary *_responseAlert;
}

@property(readonly) BOOL isValidMessage;
@property(readonly) BOOL payloadCanBeLogged;
@property unsigned int uniqueID;
@property(readonly) NSString * uniqueIDString;
@property double timeout;
@property(copy) id completionBlock;
@property(copy) id deliveryAcknowledgementBlock;
@property(readonly) NSString * bagKey;
@property(retain) NSString * topic;
@property(readonly) int command;
@property(readonly) int responseCommand;
@property BOOL forceCellular;
@property(readonly) BOOL wantsSignature;
@property(readonly) BOOL wantsBodySignature;
@property(readonly) BOOL wantsCFNetworkTimeout;
@property(readonly) BOOL wantsManagedRetries;
@property(readonly) BOOL wantsHTTPHeaders;
@property(readonly) BOOL wantsCompressedBody;
@property BOOL wantsBinaryPush;
@property BOOL wantsIntegerUniqueIDs;
@property(readonly) BOOL wantsJSONBody;
@property(readonly) BOOL wantsBagKey;
@property(readonly) BOOL wantsUserAgentInHeaders;
@property(readonly) BOOL wantsHTTPGet;
@property(readonly) BOOL wantsAPSRetries;
@property BOOL wantsResponse;
@property(readonly) BOOL ignoresNetworkConnectivity;
@property(readonly) BOOL wantsCustomRetryInterval;
@property(readonly) double customRetryInterval;
@property(readonly) NSArray * requiredKeys;
@property(copy) NSDictionary * responseAlertInfo;
@property(readonly) NSDictionary * messageBody;
@property(readonly) NSDictionary * messageBodyUsingCache;
@property(readonly) NSDictionary * additionalMessageHeaders;
@property(readonly) NSDictionary * additionalQueryStringParameters;
@property(readonly) NSDictionary * additionalMessageHeadersForOutgoingPush;
@property(readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush;
@property(readonly) struct __SecKey { }* pushPrivateKey;
@property(readonly) struct __SecKey { }* pushPublicKey;
@property(readonly) NSData * pushCertificate;
@property(readonly) NSData * pushToken;
@property(readonly) struct __SecKey { }* provisionPrivateKey;
@property(readonly) struct __SecKey { }* provisionPublicKey;
@property(readonly) NSData * provisionCertificate;
@property(readonly) struct __SecKey { }* identityPrivateKey;
@property(readonly) struct __SecKey { }* identityPublicKey;
@property(readonly) NSData * IDCertificate;
@property(setter=setDSAuthID:,copy) NSString * dsAuthID;
@property(copy) NSData * serviceData;
@property(copy) NSDictionary * clientInfo;
@property(readonly) NSString * userAgentHeaderString;
@property(copy) NSDictionary * userInfo;
@property(retain) NSDate * creationDate;
@property(retain) id context;
@property(setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush;
@property(setter=_setCachedBody:,retain) NSDictionary * _cachedBody;


- (struct __SecKey { }*)identityPublicKey;
- (void)setClientInfo:(id)arg1;
- (struct __SecKey { }*)identityPrivateKey;
- (id)responseAlertInfo;
- (void)setDSAuthID:(id)arg1;
- (id)bagKey;
- (id)_cachedBody;
- (id)deliveryAcknowledgementBlock;
- (void)_setUsingOutgoingPush:(BOOL)arg1;
- (BOOL)_usingOutgoingPush;
- (void)handleResponseDictionary:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (id)nonStandardMessageHeadersForOutgoingPush;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalQueryStringParameters;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)IDCertificate;
- (id)provisionCertificate;
- (struct __SecKey { }*)provisionPublicKey;
- (struct __SecKey { }*)provisionPrivateKey;
- (id)pushCertificate;
- (struct __SecKey { }*)pushPublicKey;
- (struct __SecKey { }*)pushPrivateKey;
- (BOOL)isValidMessage;
- (BOOL)payloadCanBeLogged;
- (double)customRetryInterval;
- (BOOL)wantsCustomRetryInterval;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (BOOL)ignoresNetworkConnectivity;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsManagedRetries;
- (BOOL)wantsCFNetworkTimeout;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsJSONBody;
- (BOOL)wantsCompressedBody;
- (id)uniqueIDString;
- (id)messageBodyUsingCache;
- (id)requiredKeys;
- (void)_cacheBody;
- (void)setWantsIntegerUniqueIDs:(BOOL)arg1;
- (BOOL)wantsIntegerUniqueIDs;
- (void)setWantsBinaryPush:(BOOL)arg1;
- (BOOL)wantsBinaryPush;
- (void)setWantsResponse:(BOOL)arg1;
- (BOOL)wantsResponse;
- (id)clientInfo;
- (id)serviceData;
- (void)setForceCellular:(BOOL)arg1;
- (BOOL)forceCellular;
- (id)dsAuthID;
- (void)setResponseAlertInfo:(id)arg1;
- (void)_setCachedBody:(id)arg1;
- (void)setDeliveryAcknowledgementBlock:(id)arg1;
- (void)setServiceData:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)pushToken;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)topic;
- (void)setUserInfo:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (int)command;
- (id)messageBody;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)completionBlock;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setUniqueID:(unsigned int)arg1;
- (unsigned int)uniqueID;

@end
