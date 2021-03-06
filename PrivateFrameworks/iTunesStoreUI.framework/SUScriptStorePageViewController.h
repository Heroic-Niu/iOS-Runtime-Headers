/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, SUScriptSegmentedControl, NSNumber;

@interface SUScriptStorePageViewController : SUScriptViewController  {
    NSArray *_initialURLStrings;
}

@property(readonly) NSArray * URLStrings;
@property id alwaysDispatchesScrollEvents;
@property BOOL doubleTapEnabled;
@property BOOL flashesScrollIndicators;
@property id inputViewObeysDOMFocus;
@property int loadingIndicatorStyle;
@property id loadsWhenHidden;
@property(retain) id loadingTextColor;
@property(retain) id loadingTextShadowColor;
@property(retain) id placeholderBackgroundStyle;
@property(readonly) id rootObject;
@property BOOL scrollingEnabled;
@property(retain) SUScriptSegmentedControl * segmentedControl;
@property BOOL shouldInvalidateForLowMemory;
@property BOOL shouldLoadProgressively;
@property id shouldShowFormAccessory;
@property BOOL showsBackgroundShadow;
@property id showsHorizontalScrollIndicator;
@property id showsVerticalScrollIndicator;
@property(retain) NSNumber * timeoutInterval;
@property(retain) id URLs;
@property(retain) NSString * userInfo;
@property(readonly) int indicatorStyleWhite;
@property(readonly) int indicatorStyleGray;

+ (BOOL)copyURLStrings:(id*)arg1 forValue:(id)arg2;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)setSegmentedControl:(id)arg1;
- (void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2;
- (int)indicatorStyleWhite;
- (int)indicatorStyleGray;
- (BOOL)shouldInvalidateForLowMemory;
- (void)setShouldInvalidateForLowMemory:(BOOL)arg1;
- (void)setPlaceholderBackgroundStyle:(id)arg1;
- (id)rootObject;
- (id)placeholderBackgroundStyle;
- (BOOL)doubleTapEnabled;
- (id)URLStrings;
- (void)setScrollEdgeInsetsWithTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;
- (id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2;
- (void)reloadWithCallback:(id)arg1;
- (id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2;
- (void)_setURLs:(id)arg1;
- (BOOL)_isSegmentedControlValid:(id)arg1;
- (id)_storePageViewController;
- (id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2;
- (void)applyURLStrings:(id)arg1 toViewController:(id)arg2;
- (id)_copyURLsFromURLStrings:(id)arg1;
- (id)newNativeViewController;
- (id)initWithURLStrings:(id)arg1;
- (id)shouldShowFormAccessory;
- (BOOL)flashesScrollIndicators;
- (BOOL)shouldLoadProgressively;
- (void)setShouldLoadProgressively:(BOOL)arg1;
- (void)setShouldShowFormAccessory:(id)arg1;
- (void)setFlashesScrollIndicators:(BOOL)arg1;
- (BOOL)showsBackgroundShadow;
- (void)setShowsBackgroundShadow:(BOOL)arg1;
- (void)setLoadsWhenHidden:(id)arg1;
- (id)loadsWhenHidden;
- (int)loadingIndicatorStyle;
- (void)setNativeViewController:(id)arg1;
- (void)setLoadingTextShadowColor:(id)arg1;
- (void)setLoadingTextColor:(id)arg1;
- (void)setLoadingIndicatorStyle:(int)arg1;
- (id)loadingTextShadowColor;
- (id)loadingTextColor;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)userInfo;
- (void)dealloc;
- (id)init;
- (void)setUserInfo:(id)arg1;
- (id)segmentedControl;
- (id)URLs;
- (void)setURLs:(id)arg1;
- (id)alwaysDispatchesScrollEvents;
- (void)setAlwaysDispatchesScrollEvents:(id)arg1;
- (void)setInputViewObeysDOMFocus:(id)arg1;
- (id)inputViewObeysDOMFocus;
- (void)setDoubleTapEnabled:(BOOL)arg1;
- (BOOL)scrollingEnabled;
- (void)setScrollingEnabled:(BOOL)arg1;
- (id)showsVerticalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(id)arg1;
- (id)showsHorizontalScrollIndicator;
- (void)setShowsVerticalScrollIndicator:(id)arg1;
- (id)attributeKeys;
- (void)setTimeoutInterval:(id)arg1;
- (id)timeoutInterval;

@end
