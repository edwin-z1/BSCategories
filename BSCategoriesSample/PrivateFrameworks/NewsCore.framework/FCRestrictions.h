/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRestrictions : NSObject {
    long long  _buildVersionNumber;
    int  _isExplicitContentAllowedOverride;
    BOOL  _testing;
}

@property (nonatomic) long long buildVersionNumber;
@property (nonatomic, readonly) BOOL isExplicitContentAllowed;
@property (nonatomic) int isExplicitContentAllowedOverride;
@property (nonatomic) BOOL testing;

+ (long long)integerRepresentationOfShortVersionString:(id)arg1;
+ (id)sharedInstance;

- (long long)buildVersionNumber;
- (id)init;
- (BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (BOOL)isExplicitContentAllowed;
- (int)isExplicitContentAllowedOverride;
- (BOOL)isNewsVersionAllowed:(long long)arg1;
- (void)setBuildVersionNumber:(long long)arg1;
- (void)setIsExplicitContentAllowedOverride:(int)arg1;
- (void)setTesting:(BOOL)arg1;
- (void)t_startForcingExplicitContentDisallowed;
- (void)t_stopForcingExplicitContentDisallowed;
- (BOOL)testing;

@end
