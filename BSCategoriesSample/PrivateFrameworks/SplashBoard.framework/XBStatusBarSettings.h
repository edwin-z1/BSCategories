/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCoding, NSCopying, NSMutableCopying> {
    BSMutableSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;

- (id)_initWithBSSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isHidden;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)style;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

@end
