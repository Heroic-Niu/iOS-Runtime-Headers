/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSXPCEncoderDelegate>, NSXPCConnection, NSObject<OS_xpc_object>, NSMutableArray;

@interface NSXPCEncoder : NSXPCCoder  {
    NSMutableArray *_containers;
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary { } *_replacedObjects;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    <NSXPCEncoderDelegate> *_delegate;
    BOOL _askForReplacement;
}

@property NSXPCConnection * _connection;
@property <NSXPCEncoderDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned int)arg2 forKey:(id)arg3;
- (void)encodeInteger:(int)arg1 forKey:(id)arg2;
- (BOOL)allowsKeyedCoding;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (id)_encodeXPCObject:(id)arg1;
- (void)_popContainer;
- (void)encodeInvocation:(id)arg1;
- (void)_pushContainerForKey:(id)arg1;
- (id)_topContainer;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (void)_pushContainer:(id)arg1;
- (id)_createRootXPCObject;
- (void)set_connection:(id)arg1;
- (id)_connection;
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeObject:(id)arg1;

@end
