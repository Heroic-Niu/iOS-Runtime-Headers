/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASetApplicationContext : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * orderedContext;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setApplicationContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setApplicationContext;

- (id)groupIdentifier;
- (void)setOrderedContext:(id)arg1;
- (id)orderedContext;
- (id)encodedClassName;

@end
