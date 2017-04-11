/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRLanguageOptionGroup : NSObject <NSSecureCoding> {
    BOOL  _allowEmptySelection;
    MRLanguageOption * _defaultLanguageOption;
    NSArray * _languageOptions;
}

@property (nonatomic, readonly) BOOL allowEmptySelection;
@property (nonatomic, readonly) MRLanguageOption *defaultLanguageOption;
@property (nonatomic, readonly) NSArray *languageOptions;

+ (BOOL)supportsSecureCoding;

- (BOOL)allowEmptySelection;
- (void)dealloc;
- (id)defaultLanguageOption;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(void*)arg2 allowEmptySelection:(BOOL)arg3;
- (id)languageOptions;

@end
