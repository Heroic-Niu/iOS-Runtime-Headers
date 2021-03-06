/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, VKPolylineTile;

@interface VKPolylinePath : NSObject  {
    VKPolylineTile *_tile;
    struct { float x1; float x2; } *_points;
    unsigned int _pointCount;
    struct { 
        unsigned int index; 
        float offset; 
    } _routeStart;
    struct { 
        unsigned int index; 
        float offset; 
    } _routeEnd;
    BOOL _pathEntersTile;
    BOOL _pathExitsTile;
    BOOL _isMapMatched;
    float _totalCost;
    NSArray *_edges;
    unsigned int *_simplifiedIndices;
    unsigned int _simplifiedIndexCount;
    double _simplifiedEpsilon;
    BOOL _trafficSpeed;
}

@property(readonly) struct { float x1; float x2; }* points;
@property(readonly) unsigned int pointCount;
@property struct { unsigned int x1; float x2; } routeStart;
@property struct { unsigned int x1; float x2; } routeEnd;
@property(readonly) BOOL isMapMatched;
@property(readonly) NSArray * edges;
@property(readonly) VKPolylineTile * tile;
@property(readonly) BOOL pathEntersTile;
@property(readonly) BOOL pathExitsTile;
@property(readonly) const unsigned int* simplifiedIndices;
@property(readonly) unsigned int simplifiedIndexCount;
@property(readonly) double simplifiedEpsilon;
@property BOOL trafficSpeed;


- (id).cxx_construct;
- (void)dealloc;
- (double)simplifiedEpsilon;
- (unsigned int)simplifiedIndexCount;
- (const unsigned int*)simplifiedIndices;
- (BOOL)pathExitsTile;
- (BOOL)pathEntersTile;
- (void)_printPointsOnRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (void)assignPoints:(struct { float x1; float x2; }*)arg1 count:(unsigned int)arg2;
- (struct { float x1; float x2; })interpolateAt:(const struct { unsigned int x1; float x2; }*)arg1;
- (struct { unsigned int x1; float x2; })pathIndexFromRouteIndex:(struct { unsigned int x1; float x2; })arg1;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; BOOL x2; }*)arg2;
- (void)checkEdgeList:(id)arg1;
- (void)followEdge:(id)arg1 edgeList:(id)arg2;
- (void)sortCandidates:(id)arg1;
- (BOOL)addRoadEdge:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 prevEdge:(id)arg2 toList:(id)arg3 maxCost:(float)arg4;
- (float)_maxDistanceToEdgeOfTile;
- (void)postUpdate;
- (void)simplifyWithEpsilon:(double)arg1;
- (void)clearSimplification;
- (id)edges;
- (struct { unsigned int x1; float x2; })routeStart;
- (BOOL)isMapMatched;
- (void)findEdges;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2;
- (struct { unsigned int x1; float x2; })routeEnd;
- (void)setRouteEnd:(struct { unsigned int x1; float x2; })arg1;
- (void)addPoints:(const struct { float x1; float x2; }*)arg1 count:(unsigned int)arg2;
- (void)setRouteStart:(struct { unsigned int x1; float x2; })arg1;
- (id)initWithTile:(id)arg1;
- (void)setTrafficSpeed:(BOOL)arg1;
- (BOOL)trafficSpeed;
- (id)tile;
- (struct { float x1; float x2; }*)points;
- (unsigned int)pointCount;

@end
