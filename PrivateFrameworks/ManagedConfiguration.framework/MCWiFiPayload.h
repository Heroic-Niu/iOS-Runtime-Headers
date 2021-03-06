/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface MCWiFiPayload : MCPayload  {
    NSString *_ssid;
    BOOL _hidden;
    NSString *_encryptionType;
    BOOL _isWEP;
    BOOL _isWPA;
    BOOL _autoJoin;
    NSDictionary *_eapClientConfig;
    BOOL _passwordRequired;
    BOOL _usernameRequired;
    NSString *_password;
    NSString *_username;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
    int _proxyType;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSString *_proxyUsername;
}

@property(readonly) NSString * ssid;
@property(readonly) BOOL isHidden;
@property(readonly) NSString * encryptionType;
@property(readonly) BOOL isWEP;
@property(readonly) BOOL isWPA;
@property(readonly) NSDictionary * eapClientConfig;
@property(readonly) BOOL passwordRequired;
@property(retain) NSString * password;
@property(readonly) BOOL usernameRequired;
@property(retain) NSString * username;
@property(readonly) BOOL autoJoin;
@property(readonly) NSString * certificateUUID;
@property(readonly) NSArray * payloadCertificateAnchorUUID;
@property(readonly) int proxyType;
@property(readonly) NSString * proxyServer;
@property(readonly) NSNumber * proxyServerPort;
@property(readonly) NSString * proxyUsername;
@property(readonly) NSString * proxyPassword;
@property(readonly) NSString * proxyPACURLString;
@property(retain) NSString * credentialUUID;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)description;
- (void).cxx_destruct;
- (void)setCredentialUUID:(id)arg1;
- (id)credentialUUID;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyUsername;
- (id)proxyServerPort;
- (id)proxyServer;
- (id)payloadCertificateAnchorUUID;
- (id)certificateUUID;
- (BOOL)passwordRequired;
- (BOOL)usernameRequired;
- (id)eapClientConfig;
- (BOOL)autoJoin;
- (BOOL)isWPA;
- (BOOL)isWEP;
- (id)encryptionType;
- (id)ssid;
- (BOOL)_isEAPSIMConfig:(id)arg1;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (BOOL)_configIsValid:(id)arg1 error:(id*)arg2;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (int)proxyType;
- (id)password;
- (BOOL)isHidden;

@end
