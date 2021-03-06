/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, ACAccountStore, NSSet, NSURL;

@interface ACAccountType : NSObject  {
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    int _credentialAvailability;
    NSURL *_objectID;
    int _visibility;
    id _credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    int _maximumSavedAllowed;
    BOOL _supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
}

@property(readonly) NSString * accountTypeDescription;
@property(readonly) NSString * identifier;
@property(readonly) BOOL accessGranted;
@property(retain) NSURL * objectID;
@property int visibility;
@property int credentialAvailability;
@property(copy) id credentialProtectionPolicy;
@property(readonly) NSString * credentialType;
@property ACAccountStore * accountStore;
@property int supportsAuthentication;
@property(readonly) BOOL supportsMultipleAccounts;
@property(readonly) NSSet * supportedDataclasses;
@property(readonly) NSSet * syncableDataclasses;
@property(readonly) NSSet * accessKeys;


- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialAvailability:(int)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (int)credentialAvailability;
- (void)setSupportsAuthentication:(int)arg1;
- (id)syncableDataclasses;
- (id)accessKeys;
- (int)supportsAuthentication;
- (id)accountTypeDescription;
- (BOOL)accessGranted;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (void)setObjectID:(id)arg1;
- (id)objectID;
- (void)setIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)credentialType;
- (BOOL)supportsMultipleAccounts;
- (void)setCredentialType:(id)arg1;
- (void)setVisibility:(int)arg1;
- (int)visibility;
- (id)accountStore;
- (void)setAccountStore:(id)arg1;
- (id)supportedDataclasses;
- (id)credentialProtectionPolicy;

@end
