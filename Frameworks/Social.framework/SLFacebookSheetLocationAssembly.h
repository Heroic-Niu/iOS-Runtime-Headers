/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UIImageView, UIButton, UIView, NSDictionary;

@interface SLFacebookSheetLocationAssembly : NSObject  {
    int _geotagStatus;
    UIView *_assemblyView;
    UIButton *_locationButton;
    UIImageView *_locationImageView;
    UIButton *_locationLabel;
    UIButton *_cancelLocationButton;
    NSDictionary *_locationInfo;
    id _locationAssemblyDelegate;
    BOOL _usingLocationOverride;
    BOOL _locationLabelHidden;
}

@property int geotagStatus;
@property(retain) NSDictionary * locationInfo;
@property(readonly) UIView * assemblyView;
@property(readonly) struct CGSize { float x1; float x2; } locationImageSize;
@property id locationAssemblyDelegate;
@property BOOL usingLocationOverride;


- (void).cxx_destruct;
- (id)init;
- (void)updateAssembly;
- (void)updateAssemblyView;
- (void)setLocationLabelText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })locationButtonRect;
- (void)setLocationLabelHidden:(BOOL)arg1;
- (BOOL)usingLocationOverride;
- (id)locationAssemblyDelegate;
- (void)cancelLocationButtonTapped:(id)arg1;
- (void)locationButtonTapped:(id)arg1;
- (void)setUsingLocationOverride:(BOOL)arg1;
- (void)setLocationAssemblyDelegate:(id)arg1;
- (id)locationInfo;
- (struct CGSize { float x1; float x2; })locationImageSize;
- (void)setLocationInfo:(id)arg1;
- (id)assemblyView;
- (int)geotagStatus;
- (void)setGeotagStatus:(int)arg1;

@end
