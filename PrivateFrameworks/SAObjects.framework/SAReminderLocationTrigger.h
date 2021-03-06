/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger  {
}

@property(copy) NSURL * contactIdentifier;
@property(retain) SALocation * location;
@property(copy) NSString * timing;

+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationTrigger;

- (id)groupIdentifier;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setTiming:(id)arg1;
- (id)timing;
- (void)setContactIdentifier:(id)arg1;
- (id)contactIdentifier;
- (id)encodedClassName;

@end
