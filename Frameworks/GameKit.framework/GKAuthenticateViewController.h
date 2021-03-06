/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, GKSignInDataSource, NSString, UIViewController, UITextField, GKGame;

@interface GKAuthenticateViewController : GKTableViewControllerV2 <GKAuthenticateViewController> {
    GKSignInDataSource *_signInDataSource;
    UIAlertView *_alert;
    UIViewController *_activeViewController;
    NSString *_lastUsername;
    int _failedSignInCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _shouldShowActiveViewController;
    BOOL _disablesSignIn;
    UITextField *_activeTextField;
    GKGame *_game;
    int _alertTag;
    float _bottomContentInsetBeforeKeyboard;
}

@property(copy) id completionHandler;
@property BOOL shouldShowActiveViewController;
@property BOOL disablesSignIn;
@property(retain) UIViewController * activeViewController;
@property(retain) GKGame * game;
@property(retain) GKSignInDataSource * signInDataSource;
@property(retain) UIAlertView * alert;
@property int alertTag;
@property(retain) NSString * lastUsername;
@property int failedSignInCount;
@property float bottomContentInsetBeforeKeyboard;
@property UITextField * activeTextField;


- (void)setBottomContentInsetBeforeKeyboard:(float)arg1;
- (float)bottomContentInsetBeforeKeyboard;
- (void)setActiveTextField:(id)arg1;
- (id)activeTextField;
- (void)setFailedSignInCount:(int)arg1;
- (int)failedSignInCount;
- (id)lastUsername;
- (void)setDisablesSignIn:(BOOL)arg1;
- (BOOL)disablesSignIn;
- (BOOL)shouldShowActiveViewController;
- (void)saveActiveTextField;
- (void)signIn;
- (void)authenticateRequestCompletedWithErrorResponse:(id)arg1;
- (BOOL)handleUnderlyingAuthenticationError:(id)arg1;
- (void)setLastUsername:(id)arg1;
- (void)showChangePasswordViewController;
- (void)showAuthorizeViewController;
- (void)showAccountViewControllerForMode:(int)arg1;
- (void)showViewController:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)setShouldShowActiveViewController:(BOOL)arg1;
- (id)signInDataSource;
- (void)cancelAuthentication;
- (void)setSignInDataSource:(id)arg1;
- (void)createNewAccount;
- (void)signInAction:(id)arg1;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)setActiveViewController:(id)arg1;
- (id)activeViewController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectToKeepVisibleAboveKeyboardWithinView:(id)arg1;
- (BOOL)shouldAdjustInsetsForKeyboard;
- (id)alert;
- (void)setAlertTag:(int)arg1;
- (int)alertTag;
- (void)setAlert:(id)arg1;
- (void)cancelAlertWithoutDelegateCallback;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (void)prepareDataSource;
- (void)setGame:(id)arg1;
- (id)game;
- (void)dealloc;
- (id)init;
- (void)setCompletionHandler:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (float)marginForTableView:(id)arg1;
- (id)completionHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
