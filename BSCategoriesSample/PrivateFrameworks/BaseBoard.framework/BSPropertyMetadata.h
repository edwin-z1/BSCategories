/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPropertyMetadata : NSObject {
    Class  _classType;
    NSString * _defaultKey;
    id  _defaultValue;
    NSString * _getterName;
    NSString * _name;
    unsigned int  _options;
    NSString * _setterName;
    BOOL  _type;
    NSString * _typeString;
}

@property (nonatomic, retain) Class classType;
@property (nonatomic, copy) NSString *defaultKey;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) NSString *getterName;
@property (nonatomic, copy) NSString *name;
@property (getter=isNumber, nonatomic, readonly) BOOL number;
@property (nonatomic) unsigned int options;
@property (nonatomic, readonly) BOOL removeIfCollectionSetEmpty;
@property (nonatomic, readonly) BOOL removeIfSettingDefaultValue;
@property (nonatomic, copy) NSString *setterName;
@property (nonatomic, readonly) BOOL synchronizeOnSet;
@property (nonatomic) BOOL type;
@property (nonatomic, copy) NSString *typeString;

- (Class)classType;
- (void)dealloc;
- (id)defaultKey;
- (id)defaultValue;
- (id)description;
- (id)getterName;
- (BOOL)isNumber;
- (id)name;
- (unsigned int)options;
- (BOOL)removeIfCollectionSetEmpty;
- (BOOL)removeIfSettingDefaultValue;
- (void)setClassType:(Class)arg1;
- (void)setDefaultKey:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setGetterName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setSetterName:(id)arg1;
- (void)setType:(BOOL)arg1;
- (void)setTypeString:(id)arg1;
- (id)setterName;
- (BOOL)synchronizeOnSet;
- (BOOL)type;
- (id)typeString;

@end
