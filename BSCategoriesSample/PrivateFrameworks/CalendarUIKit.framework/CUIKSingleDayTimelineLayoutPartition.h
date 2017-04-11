/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineLayoutPartition : NSObject {
    float  _endBoundary;
    float  _initialStartBoundary;
    NSMutableArray * _stackOfOccurrences;
    double  _topBoundaryTime;
}

@property (nonatomic) float endBoundary;
@property (nonatomic, readonly) float freeSpaceStartBoundary;
@property (nonatomic, readonly) float freeSpaceWidth;
@property (nonatomic) float initialStartBoundary;
@property (nonatomic, readonly) NSArray *stackedOccurrences;
@property (nonatomic) double topBoundaryTime;
@property (nonatomic, readonly) float totalWidth;

- (void).cxx_destruct;
- (id)description;
- (float)endBoundary;
- (float)freeSpaceStartBoundary;
- (float)freeSpaceWidth;
- (id)init;
- (float)initialStartBoundary;
- (id)peekOccurrence;
- (void)popOccurrence;
- (void)pushOccurrence:(id)arg1;
- (void)setEndBoundary:(float)arg1;
- (void)setInitialStartBoundary:(float)arg1;
- (void)setTopBoundaryTime:(double)arg1;
- (id)stackedOccurrences;
- (double)topBoundaryTime;
- (float)totalWidth;

@end
