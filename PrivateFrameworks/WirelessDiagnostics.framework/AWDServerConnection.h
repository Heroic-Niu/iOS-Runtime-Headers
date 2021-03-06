/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDServerConnection : NSObject  {
}


- (BOOL)registerQueriableMetricCallbackForLogging:(id)arg1;
- (BOOL)registerQueriableMetricCallback:(id)arg1 forIdentifier:(unsigned long)arg2;
- (id)initWithComponentId:(unsigned long)arg1;
- (void)dealloc;
- (id)initWithComponentId:(unsigned long)arg1 andBlockOnConfiguration:(BOOL)arg2;
- (BOOL)submitMetric:(id)arg1;
- (unsigned long long)getAWDTimestamp;
- (id)newMetricContainerWithIdentifier:(unsigned long)arg1;

@end
