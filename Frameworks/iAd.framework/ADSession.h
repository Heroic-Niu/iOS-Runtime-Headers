/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSMutableSet, NSString, NSTimer, NSMutableDictionary;

@interface ADSession : NSObject  {
    NSMutableDictionary *_recipientsByAdType;
    NSMutableDictionary *_bannerControllersByAdType;
    NSMutableDictionary *_bannerControllers;
    NSMutableSet *_pendingOpenControllers;
    double _lastControllerCreationTime;
    NSMutableSet *_reassignmentScheduledAdTypes;
    id _remoteSession;
    NSString *_serverURL;
    BOOL _isInBackground;
    BOOL _creatingControllers;
    unsigned int _recentlyCreatedControllers;
    NSTimer *_visibilityTimer;
    double _visibilitySlowCheckTime;
}

@property(retain) NSString * serverURL;
@property(retain) NSTimer * visibilityTimer;
@property double visibilitySlowCheckTime;
@property BOOL isInBackground;
@property BOOL creatingControllers;
@property unsigned int recentlyCreatedControllers;
@property(retain) id remoteSession;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)init;
- (id)autorelease;
- (id)serverURL;
- (void)setVisibilitySlowCheckTime:(double)arg1;
- (double)visibilitySlowCheckTime;
- (void)setVisibilityTimer:(id)arg1;
- (id)visibilityTimer;
- (void)setRecentlyCreatedControllers:(unsigned int)arg1;
- (unsigned int)recentlyCreatedControllers;
- (void)setCreatingControllers:(BOOL)arg1;
- (BOOL)creatingControllers;
- (void)setIsInBackground:(BOOL)arg1;
- (void)forwardShakeEventToAdSheet;
- (void)_handleAdSheetMessage:(id)arg1 userInfo:(id)arg2;
- (void)adRecipientPriorityChanged:(id)arg1;
- (void)unregisterAdRecipient:(id)arg1;
- (void)registerAdRecipient:(id)arg1;
- (BOOL)_createBannerControllerForRecipient:(id)arg1;
- (id)_unassignedBannerControllerForAdType:(id)arg1;
- (void)_reassignBannerControllersForAdType:(id)arg1 pool:(id)arg2;
- (void)_reassignAllBannerControllers;
- (void)_adSheetConnectionBootstrapped;
- (void)_appWillResignActive;
- (void)_appDidBecomeActive;
- (void)_orientationChanged;
- (void)setServerURL:(id)arg1;
- (id)remoteSession;
- (void)bannerControllerDidOpen:(id)arg1;
- (void)bannerControllerDidClose:(id)arg1;
- (void)_adSheetConnectionLost;
- (void)setRemoteSession:(id)arg1;
- (BOOL)isInBackground;

@end
