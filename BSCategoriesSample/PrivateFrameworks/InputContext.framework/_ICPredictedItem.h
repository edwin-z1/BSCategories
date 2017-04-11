/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPredictedItem : NSObject {
    NSString * _identifier;
    NSString * _renderedText;
    double  _score;
    _ICProactiveTrigger * _trigger;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *renderedText;
@property (nonatomic) double score;
@property (nonatomic, readonly) _ICProactiveTrigger *trigger;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 proactiveTrigger:(id)arg4;
- (id)renderedText;
- (double)score;
- (void)setRenderedText:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setValue:(id)arg1;
- (id)trigger;
- (id)value;

@end
