/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class Stock, NSLock, NSMutableArray, SymbolValidator;

@interface YahooCompensator : NSObject <SymbolValidatorDelegate> {
    BOOL _compensatedForAllStocks;
    SymbolValidator *_validator;
    NSMutableArray *_stockQueue;
    NSLock *_stockQueueLock;
    Stock *_currentStock;
}

+ (id)fixOverEncodedXml:(id)arg1;
+ (id)sharedCompensator;
+ (BOOL)compensationRequired;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)compensateForStock:(id)arg1;
- (void)symbolValidator:(id)arg1 didFailWithError:(id)arg2;
- (void)symbolValidator:(id)arg1 didValidateSymbols:(id)arg2;
- (void)compensateForStocks:(id)arg1;
- (void)_compensateForNextStock;

@end
