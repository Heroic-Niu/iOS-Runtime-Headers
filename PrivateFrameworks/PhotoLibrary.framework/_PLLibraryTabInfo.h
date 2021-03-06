/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface _PLLibraryTabInfo : NSObject  {
    NSString *labelKey;
    NSString *iconName;
    int contentMode;
}

@property(retain) NSString * labelKey;
@property(retain) NSString * iconName;
@property int contentMode;

+ (id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

- (int)contentMode;
- (void)setContentMode:(int)arg1;
- (id)iconName;
- (id)labelKey;
- (void)setIconName:(id)arg1;
- (void)setLabelKey:(id)arg1;

@end
