/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBButton : NSObject <NSCopying, NSSecureCoding> {
    BBAction * _action;
    NSString * _identifier;
    BBImage * _image;
    NSString * _title;
}

@property (nonatomic, copy) BBAction *action;
@property (nonatomic, readonly, copy) NSData *glyphData;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) BBImage *image;
@property (nonatomic, copy) NSString *title;

+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphData;
- (unsigned int)hash;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
