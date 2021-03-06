/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOTileUsageInfo, NSError, NSLock, GEOTileKeyList;

@interface _GEOTileLoadListener : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progress;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finished;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _error;

    GEOTileKeyList *_originalList;
    GEOTileKeyList *_networkLoadList;
    GEOTileKeyList *_satisfiedList;
    struct __CFRunLoop { } *_runloop;
    BOOL _finishWhenDecoded;
    int _tilesDecoding;
    NSError *_finishError;
    NSLock *_callbacksLock;
    BOOL _checkDiskAllowed;
    BOOL _preload;
    GEOTileUsageInfo *_usageInfo;
}

@property(copy) id progress;
@property(copy) id finished;
@property(copy) id error;
@property(retain) GEOTileKeyList * originalList;
@property(retain) GEOTileKeyList * networkLoadList;
@property(retain) GEOTileKeyList * satisfiedList;
@property BOOL checkDiskAllowed;
@property(getter=isPreload) BOOL preload;


- (void)setError:(id)arg1;
- (void)setFinished:(id)arg1;
- (id)finished;
- (void)dealloc;
- (id)init;
- (id)progress;
- (void)setProgress:(id)arg1;
- (void)_tryFinish;
- (id)satisfiedList;
- (BOOL)checkDiskAllowed;
- (void)endDecode;
- (void)finishDecodingAndSendError:(id)arg1;
- (void)beginDecode;
- (void)unlockCallbacks;
- (void)lockCallbacks;
- (void)addSatisfiedKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 fromDisk:(BOOL)arg2 dataLength:(unsigned int)arg3;
- (struct __CFRunLoop { }*)runloop;
- (void)setPreload:(BOOL)arg1;
- (void)finishWhenDecoded;
- (void)setSatisfiedList:(id)arg1;
- (void)setNetworkLoadList:(id)arg1;
- (void)setOriginalList:(id)arg1;
- (BOOL)isPreload;
- (void)setCheckDiskAllowed:(BOOL)arg1;
- (id)networkLoadList;
- (id)originalList;
- (id)error;

@end
