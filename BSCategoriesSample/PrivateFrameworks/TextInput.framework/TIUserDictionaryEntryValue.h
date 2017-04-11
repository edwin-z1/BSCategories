/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {
    NSString * _phrase;
    NSString * _shortcut;
    NSNumber * _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *shortcut;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *timestamp;

+ (BOOL)supportsSecureCoding;
+ (id)valueWithEntry:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)matchesEntry:(id)arg1;
- (id)phrase;
- (void)setPhrase:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)shortcut;
- (id)shortcutForSorting;
- (id)timestamp;

@end
