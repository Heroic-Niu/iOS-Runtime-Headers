/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString, <DASearchQueryConsumer>;

@interface DASearchQuery : NSObject  {
    int _state;
    NSString *_searchString;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    int _timeLimit;
    NSString *_searchID;
    <DASearchQueryConsumer> *_consumer;
}

@property(readonly) NSString * searchString;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property unsigned int maxResults;
@property int timeLimit;
@property <DASearchQueryConsumer> * consumer;
@property(copy) NSString * searchID;
@property int state;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (int)state;
- (id)description;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)searchString;
- (id)dictionaryRepresentation;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setState:(int)arg1;
- (int)timeLimit;
- (void)setTimeLimit:(int)arg1;
- (BOOL)isQueryRunning;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)setConsumer:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)consumer;
- (unsigned int)maxResults;
- (void)setMaxResults:(unsigned int)arg1;

@end
