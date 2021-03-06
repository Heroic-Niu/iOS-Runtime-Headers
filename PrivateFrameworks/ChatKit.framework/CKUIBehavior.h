/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UIColor;

@interface CKUIBehavior : NSObject  {
}

@property(readonly) NSString * conversationListDefaultPNG;
@property(readonly) NSString * transcriptDefaultPNG;
@property(readonly) BOOL splitViewEnabled;
@property(readonly) BOOL lowClearanceInLandscape;
@property(readonly) float leftSplitPaneWidth;
@property(readonly) BOOL usesPopovers;
@property(readonly) BOOL showsDisclosureButtonForIncomingMedia;
@property(readonly) BOOL showTranscriptButtonsInNavigationBar;
@property(readonly) BOOL usesTexturedTranscriptBackground;
@property(readonly) BOOL presentsQuickLookController;
@property(readonly) float bubbleIndentationDuringEditMode;
@property(readonly) unsigned int defaultConversationViewingMessageCount;
@property(readonly) unsigned int defaultConversationSummaryMessageCount;
@property(readonly) BOOL shouldShowSendProgressIndicator;
@property(readonly) BOOL returnKeySendsMessage;
@property(readonly) BOOL usesScrollGestureToHideKeyboard;
@property(readonly) BOOL usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly) float velocityThresholdForHidingKeyboard;
@property(readonly) float escapeVelocityForHidingKeyboard;
@property(readonly) float scrollToHideKeyboardGestureThreshold;
@property(readonly) BOOL shouldSetConversationKeyboardOnSearchBeginEnd;
@property(readonly) int madridRegistrationAppearanceStyle;
@property(readonly) BOOL madridRegistrationShowsSplashScreen;
@property(readonly) BOOL madridRegistrationShowsSplashScreenOnSignin;
@property(readonly) BOOL showPendingInConversationList;
@property(readonly) BOOL selectNewConversationOnStateRestore;
@property(readonly) BOOL selectNewConversationOnDeletion;
@property(readonly) BOOL usesPersistentConversationSelection;
@property(readonly) BOOL presentForwardingUIModally;
@property(readonly) BOOL usesFullWidthMessageEntryViewWhenKeyboardIsUndocked;
@property(readonly) BOOL floatingEntryFieldEnabled;
@property(readonly) BOOL shouldRoundBottomLeftCornerOfEntryField;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputFieldCoverStretchSpecs;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } entryFieldBackgroundStretchSpecs;
@property(readonly) float entryFieldBottomMargin;
@property(readonly) float entryFieldLeftMargin;
@property(readonly) float entryFieldRightMargin;
@property(readonly) float entryFieldToPhotoButtonSpacing;
@property(readonly) float entryFieldToSendButtonSpacing;
@property(readonly) float sendButtonHorizontalPadding;
@property(readonly) BOOL shouldShowContactPhotos;
@property(readonly) struct CGSize { float x1; float x2; } contactPhotoSize;
@property(readonly) float contactPhotoBorderThickness;
@property(readonly) float contactPhotoCornerRadius;
@property(readonly) float contactPhotoOutsideMargin;
@property(readonly) float contactPhotoInsideMargin;
@property(readonly) UIColor * toolbarLabelsTextColor;
@property(readonly) UIColor * toolbarLabelsShadowColor;
@property(readonly) struct CGSize { float x1; float x2; } toolbarLabelsShadowOffset;

+ (id)sharedBehaviors;

- (id)transcriptDefaultPNG;
- (id)conversationListDefaultPNG;
- (unsigned int)conversationCacheSize;
- (BOOL)dimsTranscriptWhileEditingConversations;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })balloonImageCapInsets;
- (id)highlightedBalloonTextShadowColor;
- (id)blueBalloonTextShadowColor;
- (id)greenBalloonTextShadowColor;
- (id)grayBalloonTextShadowColor;
- (id)serviceTextShadowColor;
- (id)serviceTextColor;
- (id)messageStatusSecondaryTextColor;
- (float)serviceTextSize;
- (float)messageStatusTextSize;
- (float)typingIndicatorMargin;
- (BOOL)shouldRefreshAlternateAddressesSheet;
- (BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (BOOL)shouldHomogenizeAtomsForPreferredService;
- (BOOL)presentForwardingUIModally;
- (BOOL)selectNewConversationOnStateRestore;
- (float)scrollInNewMessageAnimationDuration;
- (BOOL)madridRegistrationShowsSplashScreenOnSignin;
- (int)madridRegistrationAppearanceStyle;
- (unsigned int)defaultConversationSummaryMessageCount;
- (float)balloonTextFontSize;
- (id)messageStatusTextShadowColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_mysteryPreviewImagePadding;
- (float)_transcriptAnimationScaleFactor;
- (BOOL)madridRegistrationShowsSplashScreen;
- (BOOL)shouldShowDisclosureChevronInRecipientAtoms;
- (id)balloonTextFont;
- (BOOL)returnKeySendsMessage;
- (float)balloonTextLineHeight;
- (float)senderMarginLeftWithContactImage;
- (float)senderMarginLeft;
- (struct CGSize { float x1; float x2; })toolbarLabelsShadowOffset;
- (id)toolbarLabelsShadowColor;
- (id)toolbarLabelsTextColor;
- (struct CGSize { float x1; float x2; })balloonTextShadowOffset;
- (float)attachmentBalloonHeight;
- (BOOL)presentsQuickLookController;
- (float)bubbleIndentationDuringEditMode;
- (struct CGSize { float x1; float x2; })videoPreviewBalloonImageMaxSize;
- (struct CGSize { float x1; float x2; })previewBalloonImageMaxSize;
- (struct CGSize { float x1; float x2; })previewThumbnailMaxSize;
- (float)contactPhotoCornerRadius;
- (BOOL)shouldSetConversationKeyboardOnSearchBeginEnd;
- (BOOL)shouldDimTranscript;
- (BOOL)showPendingInConversationList;
- (BOOL)selectNewConversationOnDeletion;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)usesPersistentConversationSelection;
- (float)conversationListRowHeight;
- (float)collapsedRecipientListLeftPadding;
- (float)timestampTextSize;
- (id)timestampTextShadowColor;
- (id)timestampTextColor;
- (id)etchedSeparatorHighlightColor;
- (id)etchedSeparatorShadowColor;
- (float)paddingBeforeFirstTranscriptRow;
- (float)escapeVelocityForHidingKeyboard;
- (BOOL)usesVelocityDirectionToDetermineWhetherToHideKeyboard;
- (float)velocityThresholdForHidingKeyboard;
- (BOOL)usesDistanceToDetermineWhetherToHideKeyboard;
- (float)scrollToHideKeyboardGestureThreshold;
- (BOOL)usesScrollGestureToHideKeyboard;
- (float)updateTranscriptInsetsAnimationDuration;
- (float)spaceBetweenEditToolbarButtons;
- (BOOL)centersEditToolbarButtons;
- (BOOL)shouldShowSendProgressIndicator;
- (float)messageStatusHeight;
- (float)messageStatusHeightFollowingMessageWithContactImage;
- (float)serviceNameHeight;
- (float)senderMarginTop;
- (float)timestampHeight;
- (float)messageStatusTextOutsideMargin;
- (float)messageStatusTextOutsideMarginFollowingMessageWithContactImage;
- (BOOL)showsDisclosureButtonForIncomingMedia;
- (id)messageStatusPrimaryTextColor;
- (float)senderMarginBottom;
- (float)senderMarginBottomPrecedingMessageOfContactImageHeight;
- (float)resizeMessageEntryViewAnimationDuration;
- (BOOL)usesFullWidthMessageEntryViewWhenKeyboardIsUndocked;
- (unsigned int)defaultConversationViewingMessageCount;
- (float)contactPhotoInsideMargin;
- (float)contactPhotoOutsideMargin;
- (float)bubbleMarginOutside;
- (float)throwMessageAnimationDuration;
- (float)fadeInBubbleAnimationDuration;
- (float)contactPhotoBorderThickness;
- (struct CGSize { float x1; float x2; })contactPhotoSize;
- (float)bubbleMarginBottom;
- (float)bubbleMarginTop;
- (float)editingTransitionAnimationDuration;
- (BOOL)showTranscriptButtonsInNavigationBar;
- (float)recipientOverlaySingleLineContentHeight;
- (BOOL)usesTexturedTranscriptBackground;
- (BOOL)shouldShowContactPhotos;
- (BOOL)usesPopovers;
- (float)paddingAfterLastTranscriptRow;
- (BOOL)lowClearanceInLandscape;
- (BOOL)splitViewEnabled;
- (struct CGSize { float x1; float x2; })balloonImageSize;
- (id)dimmingViewBackgroundColor;
- (BOOL)shouldRoundBottomLeftCornerOfEntryField;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputFieldCoverStretchSpecs;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryFieldBackgroundStretchSpecs;
- (BOOL)floatingEntryFieldEnabled;
- (float)leftSplitPaneWidth;
- (float)entryFieldToPhotoButtonSpacing;
- (float)entryFieldToSendButtonSpacing;
- (float)entryFieldLeftMargin;
- (float)entryFieldRightMargin;
- (float)sendButtonHorizontalPadding;
- (float)entryFieldBottomMargin;

@end
