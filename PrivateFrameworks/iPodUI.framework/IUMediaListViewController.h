/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUCoverFlowTransitionController, NSOperationQueue, IUMediaListAggregateView, IUCoverFlowViewController;

@interface IUMediaListViewController : IUTableViewController <IUCoverFlowOwner> {
    IUCoverFlowTransitionController *_coverFlowTransition;
    IUCoverFlowViewController *_coverFlowViewController;
    IUMediaListAggregateView *_aggregateHeaderView;
    double _nowPlayingAutoScrollEnableTime;
    unsigned long long _lastAttemptedAutoscrollPersistentID;
    NSOperationQueue *_downloadableEntitiesOperationQueue;
    unsigned int _searchEnabled : 1;
    unsigned int _hasPendingDynamicChanges : 1;
    unsigned int _hasPendingNowPlayingItemChanges : 1;
}

@property(retain) IUCoverFlowViewController * coverFlowViewController;
@property(readonly) BOOL isShowingCoverFlow;

+ (Class)tableViewClass;

- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)dealloc;
- (id)init;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)query;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (BOOL)isShowingCoverFlow;
- (void)setCoverFlowViewController:(id)arg1;
- (void)_coverFlowTransitionInDidStop:(id)arg1 finished:(id)arg2;
- (void)_coverFlowDidTransitionOut:(id)arg1;
- (void)_autoscrollNowPlayingItemToVisibleWithIndexPath:(id)arg1 persistentID:(unsigned long long)arg2;
- (id)coverFlowViewController;
- (id)_baseViewController;
- (void)_downloadAllAction:(id)arg1;
- (BOOL)_handleControllerContext:(id)arg1;
- (void)_delayedPushContext:(id)arg1;
- (void)_transitionToCoverFlowWithInterfaceOrientation:(int)arg1;
- (void)_transitionFromCoverFlow;
- (BOOL)_canShowCoverFlow;
- (void)_handleNowPlayingItemChangedAndScrollToVisible;
- (void)_nowPlayingItemChanged:(id)arg1;
- (void)_localizedDateFormatsDidChange:(id)arg1;
- (void)_dataSourceCountStringFormatDidChange:(id)arg1;
- (void)_trackDynamicPropertiesChangedNotification:(id)arg1;
- (void)_accessorySplashViewWillAppearNotification:(id)arg1;
- (void)deviceOrientationChanged:(int)arg1;
- (void)viewControllerDidFinishReloadForDataSourceInvalidation;
- (void)updateFooterView;
- (BOOL)handlePlaybackDataSource:(id)arg1;
- (void)_handleTrackDynamicPropertiesChanged;
- (void)viewWillAppearForRemoteEvent;
- (void)remoteEventMoveDown;
- (void)remoteEventMoveUp;
- (void)remoteEventSelectItem;
- (BOOL)hasSearchBar;
- (void)performDefaultActionForRow:(int)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;

@end
