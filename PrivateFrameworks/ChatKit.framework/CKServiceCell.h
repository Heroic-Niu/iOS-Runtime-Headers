/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMService, UILabel, CKDashedLineView;

@interface CKServiceCell : CKTranscriptCell  {
    IMService *_service;
    CKDashedLineView *_dashedLineView;
    UILabel *_label;
}

@property(retain) IMService * service;


- (void)dealloc;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)service;
- (void)setService:(id)arg1;

@end
