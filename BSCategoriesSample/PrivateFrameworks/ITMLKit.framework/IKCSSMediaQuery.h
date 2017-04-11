/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSMediaQuery : NSObject {
    BOOL  _evaluated;
    BOOL  _evaluationResult;
    IKCSSMediaQueryList * _queryList;
}

@property (readonly) BOOL evaluated;
@property (readonly) BOOL evaluationResult;
@property (nonatomic, readonly) IKCSSMediaQueryList *queryList;

+ (id)buildMediaQuery:(id)arg1 offset:(unsigned int)arg2 consumed:(unsigned int*)arg3;
+ (id)buildMediaQueryExpression:(id)arg1;
+ (id)buildMediaQueryList:(id)arg1 offset:(unsigned int)arg2 consumed:(unsigned int*)arg3;
+ (id)mediaQueryFromTokenList:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluate;
- (BOOL)evaluated;
- (BOOL)evaluationResult;
- (id)initWithQueryList:(id)arg1;
- (id)queryList;
- (void)setNeedsReEvaluation;

@end
