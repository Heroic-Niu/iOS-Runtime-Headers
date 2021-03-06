/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBlip, NSString, NSMutableArray;

@interface OADBlipRef : NSObject <NSCopying> {
    long mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (int)blipTypeForContentType:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (id)blipRefWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3;
+ (id)blipRefWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;

- (void)setName:(id)arg1;
- (id)name;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setIndex:(long)arg1;
- (long)index;
- (BOOL)isNull;
- (void)removeEffectAtIndex:(unsigned int)arg1;
- (id)initWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (void)addEffect:(id)arg1;
- (id)effectAtIndex:(unsigned int)arg1;
- (unsigned int)effectCount;
- (id)initWithIndex:(long)arg1 name:(id)arg2 blip:(id)arg3;
- (void)setBlip:(id)arg1;
- (void)setEffects:(id)arg1;
- (id)effects;
- (id)blip;

@end
