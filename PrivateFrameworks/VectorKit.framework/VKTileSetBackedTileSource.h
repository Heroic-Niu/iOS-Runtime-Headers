/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTilePool, GEOActiveTileSet, NSTimer, _VKTileSetBackedTileSourceTimerTarget;

@interface VKTileSetBackedTileSource : VKTileSource  {
    GEOActiveTileSet *_tileSet;
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _downloadTemplate;
    int _minimumDownloadZoomLevel;
    int _maximumDownloadZoomLevel;
    NSTimer *_expirationTimer;
    VKTilePool *_expiredTilePool;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _zoomLevelRange;
    _VKTileSetBackedTileSourceTimerTarget *_timerTarget;
}

@property(readonly) GEOActiveTileSet * tileSet;


- (void)setClient:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)dealloc;
- (void)clearCaches;
- (int)tileSize;
- (void)_expireTiles;
- (double)_expirationInterval;
- (void)_scheduleTileExpirationTimer:(double)arg1 forceUpdate:(BOOL)arg2;
- (double)_nextTileExpirationDate;
- (BOOL)expires;
- (int)defaultMinimumZoomLevel;
- (unsigned int)mapLayerForZoomLevelRange;
- (int)defaultMaximumZoomLevel;
- (id)tileSet;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (int)maximumDownloadZoomLevel;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })sourceKeyForRenderKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (int)minimumDownloadZoomLevel;
- (id)tileSource;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (id)initWithTileSet:(id)arg1;
- (int)maximumZoomLevel;
- (int)minimumZoomLevel;

@end
