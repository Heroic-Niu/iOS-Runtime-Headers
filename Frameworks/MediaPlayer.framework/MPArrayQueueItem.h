/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject  {
    MPAVItem *_item;
    NSString *_path;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(readonly) MPAVItem * item;
@property(copy) NSString * path;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;


- (void)setStopTime:(double)arg1;
- (id)initWithMPAVItem:(id)arg1;
- (id)videoID;
- (double)stopTime;
- (void)setVideoID:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)init;
- (void)setPath:(id)arg1;
- (double)startTime;
- (id)item;
- (void)setStartTime:(double)arg1;

@end
