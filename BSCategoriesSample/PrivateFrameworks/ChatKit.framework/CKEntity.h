/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEntity : NSObject {
    CNContact * _cnContact;
    IMHandle * _handle;
    UIImage * _transcriptContactImage;
    UIImage * _transcriptDrawerContactImage;
}

@property (nonatomic, readonly, copy) NSString *IDSCanonicalAddress;
@property (nonatomic, readonly) void*abRecord;
@property (nonatomic, readonly, copy) NSString *abbreviatedDisplayName;
@property (nonatomic, retain) CNContact *cnContact;
@property (nonatomic, readonly) IMHandle *defaultIMHandle;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, retain) IMHandle *handle;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) BOOL isMe;
@property (nonatomic, readonly) UIImage *locationMapViewContactImage;
@property (nonatomic, readonly) UIImage *locationShareBalloonContactImage;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originalAddress;
@property (nonatomic, readonly) int propertyType;
@property (nonatomic, readonly, copy) NSString *rawAddress;
@property (nonatomic, readonly, copy) NSString *textToneIdentifier;
@property (nonatomic, readonly, copy) NSString *textVibrationIdentifier;
@property (nonatomic, readonly) UIImage *transcriptContactImage;
@property (nonatomic, readonly) UIImage *transcriptDrawerContactImage;

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;

- (void).cxx_destruct;
- (id)IDSCanonicalAddress;
- (void*)abRecord;
- (id)abbreviatedDisplayName;
- (id)cnContact;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)defaultIMHandle;
- (id)description;
- (id)fullName;
- (id)handle;
- (unsigned int)hash;
- (int)identifier;
- (id)initWithIMHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMe;
- (id)locationMapViewContactImage;
- (id)locationShareBalloonContactImage;
- (id)name;
- (id)originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1;
- (int)propertyType;
- (id)rawAddress;
- (void)setCnContact:(id)arg1;
- (void)setHandle:(id)arg1;
- (id)textToneIdentifier;
- (id)textVibrationIdentifier;
- (id)transcriptContactImage;
- (id)transcriptDrawerContactImage;

@end
