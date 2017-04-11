/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKController : NSObject {
    AKActionController * _actionController;
    BOOL  _annotationEditingEnabled;
    AKAttributeController * _attributeController;
    unsigned int  _creationCascadingMultiplier;
    unsigned int  _currentPageIndex;
    <AKControllerDelegateProtocol> * _delegate;
    AKFormFeatureDetectorController * _formDetectionController;
    AKIntelligentSketchController * _intelligentSketchController;
    BOOL  _isTestingInstance;
    BOOL  _isTornDown;
    AKPageController * _lastCreationCascadingPageController;
    int  _lastPasteboardChangeCount;
    AKMainEventHandler * _mainEventHandler;
    AKModelController * _modelController;
    NSMutableArray * _pageControllers;
    NSMapTable * _pageModelControllersToPageControllers;
    unsigned int  _pasteCascadingMultiplier;
    BOOL  _pencilAlwaysDraws;
    AKPeripheralAvailabilityManager_iOS * _peripheralAvailabilityManager;
    BOOL  _showingMenu;
    AKSignatureModelController * _signatureModelController;
    AKTextEditorController * _textEditorController;
    AKToolController * _toolController;
    UIView * _toolbarView;
    AKToolbarViewController * _toolbarViewController;
    AKUndoController * _undoController;
    BOOL  overlayShouldPixelate;
}

@property (retain) AKActionController *actionController;
@property (nonatomic) BOOL annotationEditingEnabled;
@property (retain) AKAttributeController *attributeController;
@property unsigned int creationCascadingMultiplier;
@property unsigned int currentPageIndex;
@property <AKControllerDelegateProtocol> *delegate;
@property (retain) AKFormFeatureDetectorController *formDetectionController;
@property (retain) AKIntelligentSketchController *intelligentSketchController;
@property BOOL isTestingInstance;
@property BOOL isTornDown;
@property AKPageController *lastCreationCascadingPageController;
@property int lastPasteboardChangeCount;
@property (retain) AKMainEventHandler *mainEventHandler;
@property (retain) AKModelController *modelController;
@property (nonatomic) BOOL overlayShouldPixelate;
@property (retain) NSMutableArray *pageControllers;
@property (retain) NSMapTable *pageModelControllersToPageControllers;
@property unsigned int pasteCascadingMultiplier;
@property (nonatomic) BOOL pencilAlwaysDraws;
@property (retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager;
@property (getter=isShowingMenu) BOOL showingMenu;
@property (retain) AKSignatureModelController *signatureModelController;
@property (retain) AKTextEditorController *textEditorController;
@property (retain) AKToolController *toolController;
@property (retain) UIView *toolbarView;
@property (retain) AKToolbarViewController *toolbarViewController;
@property (retain) AKUndoController *undoController;

+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (id)akBundle;
+ (id)akBundleIdentifier;
+ (BOOL)canConnectToStylus;
+ (id)controllerWithDelegate:(id)arg1;
+ (BOOL)hasPressureCapableHardware;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (BOOL)_validateCutCopyDelete;
- (id)actionController;
- (BOOL)annotationEditingEnabled;
- (id)attributeController;
- (void)commitEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentAlignedRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 onPageAtIndex:(unsigned int)arg2;
- (void)copy:(id)arg1;
- (unsigned int)creationCascadingMultiplier;
- (int)currentExifOrientationForPageAtIndex:(unsigned int)arg1;
- (float)currentModelBaseScaleFactorForPageAtIndex:(unsigned int)arg1;
- (id)currentPageController;
- (unsigned int)currentPageIndex;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (id)formDetectionController;
- (BOOL)handleEvent:(id)arg1;
- (void)hideSelectionMenu:(id)arg1;
- (void)highlightableSelectionChanged;
- (id)imageForToolbarButtonItemOfType:(unsigned int)arg1;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;
- (id)intelligentSketchController;
- (BOOL)isOverlayViewLoadedAtIndex:(unsigned int)arg1;
- (BOOL)isShowingMenu;
- (BOOL)isTestingInstance;
- (BOOL)isTornDown;
- (id)lastCreationCascadingPageController;
- (int)lastPasteboardChangeCount;
- (id)mainEventHandler;
- (id)modelController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)overlayShouldPixelate;
- (id)overlayViewAtIndex:(unsigned int)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)pageControllers;
- (id)pageModelControllersToPageControllers;
- (id)panGestureRecognizer;
- (void)paste:(id)arg1;
- (unsigned int)pasteCascadingMultiplier;
- (BOOL)pencilAlwaysDraws;
- (void)performActionForSender:(id)arg1;
- (id)peripheralAvailabilityManager;
- (void)prepareOverlayAtIndex:(unsigned int)arg1;
- (id)pressGestureRecognizer;
- (void)redo:(id)arg1;
- (void)relinquishOverlayAtIndex:(unsigned int)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)resetToDefaultToolMode;
- (id)rotationGestureRecognizer;
- (void)selectAll:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)setAnnotationEditingEnabled:(BOOL)arg1;
- (void)setAttributeController:(id)arg1;
- (void)setCreationCascadingMultiplier:(unsigned int)arg1;
- (void)setCurrentPageIndex:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormDetectionController:(id)arg1;
- (void)setIntelligentSketchController:(id)arg1;
- (void)setIsTestingInstance:(BOOL)arg1;
- (void)setIsTornDown:(BOOL)arg1;
- (void)setLastCreationCascadingPageController:(id)arg1;
- (void)setLastPasteboardChangeCount:(int)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setModelController:(id)arg1;
- (void)setOverlayShouldPixelate:(BOOL)arg1;
- (void)setPageControllers:(id)arg1;
- (void)setPageModelControllersToPageControllers:(id)arg1;
- (void)setPasteCascadingMultiplier:(unsigned int)arg1;
- (void)setPencilAlwaysDraws:(BOOL)arg1;
- (void)setPeripheralAvailabilityManager:(id)arg1;
- (void)setShowingMenu:(BOOL)arg1;
- (void)setSignatureModelController:(id)arg1;
- (void)setTextEditorController:(id)arg1;
- (void)setToolController:(id)arg1;
- (void)setToolbarView:(id)arg1;
- (void)setToolbarViewController:(id)arg1;
- (void)setUndoController:(id)arg1;
- (BOOL)shouldDrawVariableStrokeDoodles;
- (void)showAttributeInspector:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (id)signatureModelController;
- (id)tapGestureRecognizer;
- (void)teardown;
- (id)textEditorController;
- (id)toolController;
- (id)toolbarButtonItemOfType:(unsigned int)arg1;
- (id)toolbarView;
- (id)toolbarViewController;
- (void)undo:(id)arg1;
- (id)undoController;
- (void)updateOverlayViewAtIndex:(unsigned int)arg1;
- (BOOL)validateCopy:(id)arg1;
- (BOOL)validateCut:(id)arg1;
- (BOOL)validateDelete:(id)arg1;
- (BOOL)validateDuplicate:(id)arg1;
- (BOOL)validateEditTextAnnotation:(id)arg1;
- (BOOL)validatePaste:(id)arg1;
- (BOOL)validateRedo:(id)arg1;
- (BOOL)validateSelectAll:(id)arg1;
- (BOOL)validateSender:(id)arg1;
- (BOOL)validateShowAttributeInspector:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end
