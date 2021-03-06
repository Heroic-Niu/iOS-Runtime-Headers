/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, WebView;

@interface WebInspectorWindowController : NSObject  {
    WebView *_inspectedWebView;
    struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct ExecState {} *x4; struct RefPtr<WebCore::InspectorFrontendHost> { struct InspectorFrontendHost {} *x_5_1_1; } x5; struct OwnPtr<WebCore::InspectorFrontendClientLocal::Settings> { struct Settings {} *x_6_1_1; } x6; boolx7; struct Vector<WTF::String, 0> { unsigned int x_8_1_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_2_1; unsigned int x_2_2_2; } x_8_1_2; } x8; struct OwnPtr<WebCore::InspectorBackendDispatchTask> { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; id x10; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_11_1_1; } x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; } *_frontendClient;
    struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; } *_inspectorClient;
    BOOL _destroyingInspectorView;
    WebView *_webView;
    NSString *_title;
}

@property(readonly) WebView * webView;
@property(retain) NSString * title;


- (void)dealloc;
- (id)init;
- (id)webView;
- (id)title;
- (void)setTitle:(id)arg1;
- (struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)inspectorClient;
- (void)destroyInspectorView:(bool)arg1;
- (void)setFrontendClient:(struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct ExecState {} *x4; struct RefPtr<WebCore::InspectorFrontendHost> { struct InspectorFrontendHost {} *x_5_1_1; } x5; struct OwnPtr<WebCore::InspectorFrontendClientLocal::Settings> { struct Settings {} *x_6_1_1; } x6; boolx7; struct Vector<WTF::String, 0> { unsigned int x_8_1_1; struct VectorBuffer<WTF::String, 0> { struct String {} *x_2_2_1; unsigned int x_2_2_2; } x_8_1_2; } x8; struct OwnPtr<WebCore::InspectorBackendDispatchTask> { struct InspectorBackendDispatchTask {} *x_9_1_1; } x9; id x10; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_11_1_1; } x11; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (void)setInspectorClient:(struct WebInspectorClient { int (**x1)(); int (**x2)(); id x3; struct RetainPtr<WebNodeHighlighter> { struct WebNodeHighlighter { Class x_1_2_1; id x_1_2_2; id x_1_2_3; } *x_4_1_1; } x4; struct Page {} *x5; struct RetainPtr<WebInspectorWindowController> { struct WebInspectorWindowController { Class x_1_2_1; id x_1_2_2; struct WebInspectorFrontendClient {} *x_1_2_3; struct WebInspectorClient {} *x_1_2_4; BOOL x_1_2_5; id x_1_2_6; id x_1_2_7; } *x_6_1_1; } x6; int x7; id x8; struct WebInspectorFrontendClient {} *x9; }*)arg1;
- (id)initWithInspectedWebView:(id)arg1;

@end
