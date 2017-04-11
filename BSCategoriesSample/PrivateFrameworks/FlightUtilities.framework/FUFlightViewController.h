/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightViewController : UIViewController <FUFlightViewDelegate, MKMapViewDelegate> {
    NSString * _airlineCode;
    NSNumber * _flightCode;
    FUFlightView * _flightView;
    NSArray * _flights;
    BOOL  _highlightCurrentFlightLeg;
    BOOL  _loadingFlight;
    BOOL  _showInfoPanel;
    NSDate * _startLoadingDate;
}

@property (retain) NSString *airlineCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *flightCode;
@property (nonatomic, retain) FUFlightView *flightView;
@property (nonatomic, retain) NSArray *flights;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL highlightCurrentFlightLeg;
@property (nonatomic) BOOL showInfoPanel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFittingView:(id)arg1;
- (id)airlineCode;
- (void)commonInit;
- (void)fadeLayer:(id)arg1 visible:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)flightCode;
- (id)flightView;
- (void)flightView:(id)arg1 willShowingFlightWithIndex:(unsigned int)arg2;
- (id)flights;
- (void)hideView:(id)arg1;
- (BOOL)highlightCurrentFlightLeg;
- (id)init;
- (id)initWithFlightCode:(unsigned int)arg1 airlineCode:(id)arg2;
- (id)initWithFlights:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setAirlineCode:(id)arg1;
- (void)setFlightCode:(id)arg1;
- (void)setFlightView:(id)arg1;
- (void)setFlights:(id)arg1;
- (void)setHighlightCurrentFlightLeg:(BOOL)arg1;
- (void)setShowInfoPanel:(BOOL)arg1;
- (void)showErrorView;
- (void)showFlightView;
- (BOOL)showInfoPanel;
- (void)showLoadingView;
- (void)showView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
