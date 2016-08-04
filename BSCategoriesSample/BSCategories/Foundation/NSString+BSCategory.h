//
//  NSString+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/22.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - generating

+ (instancetype)bs_characterNumString;

+ (instancetype)bs_characterCharString;

+ (instancetype)bs_characterNumCharString;

+ (instancetype)bs_punctuationString;

/// Returns a unique string different every time.
+ (instancetype)bs_UUIDString;

/// Returns a global unique string.
+ (instancetype)bs_GUString;

#pragma mark - drawing

- (CGSize)bs_sizeForConstrainedSize:(CGSize)constrainedSize attributes:(NSDictionary *)attributes;

- (CGFloat)bs_heightForConstrainedWidth:(CGFloat)constrainedWidth attributes:(NSDictionary *)attributes;

#pragma mark - validating

/// Check if string contains characters in target string
- (BOOL)bs_isContainsCharactersInString:(NSString *)string;

/// Note: contains assert inner error
- (BOOL)bs_isMatchesPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options;

/// String regex check
- (BOOL)bs_isNumbers;
- (BOOL)bs_isCharacters;
- (BOOL)bs_isChinese;
- (BOOL)bs_isEmail;
- (BOOL)bs_isIP;
- (BOOL)bs_isIdentity;
- (BOOL)bs_isMobile;
- (BOOL)bs_isTelephone;

/// Note: contains inner error
- (void)bs_enumerateRegexMatchesWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options usingBlock:(void (^)(NSRange range, NSMatchingFlags flags, BOOL *stop))block;

/// Note: contains inner error
- (nullable instancetype)bs_stringByReplacingRegexMatchesWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options withTemplate:(NSString *)templ;

#pragma mark - converting

/// Remove the characters in begin and end only
- (instancetype)bs_stringByTrimmingCharactersInString:(NSString *)string;

- (instancetype)bs_stringByRemovingCharactersInString:(NSString *)string;

/// Return NSDictionary/NSArray
- (nullable id)bs_JSONObject;

- (instancetype)bs_pinyin;

#pragma mark - handing format

- (NSDate *)bs_dateWithDateFormat:(NSString *)dateFormat;

- (NSNumber *)bs_numberWithNumberFormat:(NSString *)numberFormat;

#pragma mark - hash

- (instancetype)bs_MD2;
- (instancetype)bs_MD4;
- (instancetype)bs_MD5;

- (instancetype)bs_SHA1;
- (instancetype)bs_SHA224;
- (instancetype)bs_SHA256;
- (instancetype)bs_SHA384;
- (instancetype)bs_SHA512;

#pragma mark - encoding & decoding

- (instancetype)bs_base64Encoded;
- (instancetype)bs_base64Decoded;

- (instancetype)bs_URLEncoded;
- (instancetype)bs_URLDecoded;

/*
 something wrong
- (instancetype)bs_AES256EncodedForKey:(NSString *)key;
- (instancetype)bs_AES256DecodedForKey:(NSString *)key;

- (instancetype)bs_DESEncodedForKey:(NSString *)key;
- (instancetype)bs_DESDecodedForKey:(NSString *)key;
 */

NS_ASSUME_NONNULL_END

@end
