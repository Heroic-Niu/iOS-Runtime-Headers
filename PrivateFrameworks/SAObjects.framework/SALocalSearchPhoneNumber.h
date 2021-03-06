/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable> {
}

@property(copy) NSString * type;
@property(copy) NSString * value;

+ (id)phoneNumber;
+ (id)phoneNumberWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)type;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setType:(id)arg1;
- (id)encodedClassName;

@end
