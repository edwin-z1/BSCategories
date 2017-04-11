/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlight : NSObject {
    id  _delegate;
    WebHighlightLayer * _highlightLayer;
    WebNodeHighlightView * _highlightView;
    struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; int x_8_1_4; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 1; unsigned int x_8_1_8 : 1; unsigned int x_8_1_9 : 1; unsigned int x_8_1_10 : 1; int x_8_1_11; struct JSValue { union EncodedValueDescriptor { long long x_1_3_1; double x_1_3_2; struct { int x_3_4_1; int x_3_4_2; } x_1_3_3; } x_12_2_1; } x_8_1_12; struct ExecState {} *x_8_1_13; struct ExecState {} *x_8_1_14; unsigned int x_8_1_15; unsigned int x_8_1_16; unsigned int x_8_1_17; unsigned int x_8_1_18; struct HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::Breakpoint *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::Breakpoint *> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::Breakpoint *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_19_2_1; } x_8_1_19; } x8; } * _inspectorController;
    WAKView * _targetView;
}

- (void)attach;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)highlightView;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; int x_8_1_4; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 1; unsigned int x_8_1_8 : 1; unsigned int x_8_1_9 : 1; unsigned int x_8_1_10 : 1; int x_8_1_11; struct JSValue { union EncodedValueDescriptor { long long x_1_3_1; double x_1_3_2; struct { int x_3_4_1; int x_3_4_2; } x_1_3_3; } x_12_2_1; } x_8_1_12; struct ExecState {} *x_8_1_13; struct ExecState {} *x_8_1_14; unsigned int x_8_1_15; unsigned int x_8_1_16; unsigned int x_8_1_17; unsigned int x_8_1_18; struct HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::Breakpoint *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::Breakpoint *> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::Breakpoint *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_19_2_1; } x_8_1_19; } x8; }*)arg2;
- (struct InspectorController { int (**x1)(); struct Ref<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_2_1_1; } x2; struct unique_ptr<WebCore::WebInjectedScriptManager, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct __compressed_pair<WebCore::WebInjectedScriptManager *, std::__1::default_delete<WebCore::WebInjectedScriptManager> > { struct WebInjectedScriptManager {} *x_1_2_1; } x_3_1_1; } x3; struct Ref<Inspector::FrontendRouter> { struct FrontendRouter {} *x_4_1_1; } x4; struct Ref<Inspector::BackendDispatcher> { struct BackendDispatcher {} *x_5_1_1; } x5; struct unique_ptr<WebCore::InspectorOverlay, std::__1::default_delete<WebCore::InspectorOverlay> > { struct __compressed_pair<WebCore::InspectorOverlay *, std::__1::default_delete<WebCore::InspectorOverlay> > { struct InspectorOverlay {} *x_1_2_1; } x_6_1_1; } x6; struct Ref<WTF::Stopwatch> { struct Stopwatch {} *x_7_1_1; } x7; struct PageScriptDebugServer { int (**x_8_1_1)(); struct VM {} *x_8_1_2; struct HashSet<JSC::JSGlobalObject *, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct HashTable<JSC::JSGlobalObject *, JSC::JSGlobalObject *, WTF::IdentityExtractor, WTF::PtrHash<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *>, WTF::HashTraits<JSC::JSGlobalObject *> > { struct JSGlobalObject {} **x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_3_2_1; } x_8_1_3; int x_8_1_4; unsigned int x_8_1_5 : 1; unsigned int x_8_1_6 : 1; unsigned int x_8_1_7 : 1; unsigned int x_8_1_8 : 1; unsigned int x_8_1_9 : 1; unsigned int x_8_1_10 : 1; int x_8_1_11; struct JSValue { union EncodedValueDescriptor { long long x_1_3_1; double x_1_3_2; struct { int x_3_4_1; int x_3_4_2; } x_1_3_3; } x_12_2_1; } x_8_1_12; struct ExecState {} *x_8_1_13; struct ExecState {} *x_8_1_14; unsigned int x_8_1_15; unsigned int x_8_1_16; unsigned int x_8_1_17; unsigned int x_8_1_18; struct HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, JSC::Breakpoint *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, JSC::Breakpoint *> >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, JSC::Breakpoint *, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<JSC::Breakpoint *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, JSC::Breakpoint *> {} *x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; unsigned int x_1_3_5; } x_19_2_1; } x_8_1_19; } x8; }*)inspectorController;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (id)targetView;

@end
