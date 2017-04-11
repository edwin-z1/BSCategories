/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredicateValidator : NSObject <NSPredicateVisitor> {
    NSSet * _allowedKeys;
    NSError * _error;
    NSPredicate * _predicate;
    BOOL  _validated;
}

@property (nonatomic, retain) NSSet *allowedKeys;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) BOOL validated;

+ (BOOL)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)allowedKeys;
- (id)error;
- (id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2;
- (id)predicate;
- (void)setAllowedKeys:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setValidated:(BOOL)arg1;
- (BOOL)validateWithError:(id*)arg1;
- (BOOL)validated;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
