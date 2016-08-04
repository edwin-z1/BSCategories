//
//  NSData+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - generating

+ (nullable instancetype)bs_dataNamed:(NSString *)name;

#pragma mark - validating

- (BOOL)bs_isGIFData;

#pragma mark - encoding & decoding

- (instancetype)bs_base64Encoded;
- (instancetype)bs_base64Decoded;

- (NSString *)bs_base64EncodedString;
- (NSString *)bs_base64DecodedString;

#pragma mark - common digest

- (instancetype)bs_MD2;
- (instancetype)bs_MD4;
- (instancetype)bs_MD5;

- (instancetype)bs_SHA1;
- (instancetype)bs_SHA224;
- (instancetype)bs_SHA256;
- (instancetype)bs_SHA384;
- (instancetype)bs_SHA512;

- (NSString *)bs_MD2String;
- (NSString *)bs_MD4String;
- (NSString *)bs_MD5String;

- (NSString *)bs_SHA1String;
- (NSString *)bs_SHA224String;
- (NSString *)bs_SHA256String;
- (NSString *)bs_SHA384String;
- (NSString *)bs_SHA512String;

#pragma mark - common cryptor

/*
 something wrong
 
/// key iv(initializationVector): NSData or NSString
- (nullable instancetype)bs_AES256EncodedWithKey:(id)key iv:(_Nullable id)iv;
- (nullable instancetype)bs_AES256DecodedWithKey:(id)key iv:(_Nullable id)iv;

- (nullable instancetype)bs_DESEncodedWithKey:(id)key iv:(_Nullable id)iv;
- (nullable instancetype)bs_DESDecodedWithKey:(id)key iv:(_Nullable id)iv;

- (nullable instancetype)bs_CASTEncodedWithKey:(id)key iv:(_Nullable id)iv;
- (nullable instancetype)bs_CASTDecodedWithKey:(id)key iv:(_Nullable id)iv;

 */
#pragma mark - HMAC

- (instancetype)bs_hmacMD5WithKey:(NSData *)key;
- (instancetype)bs_hmacSHA1WithKey:(NSData *)key;
- (instancetype)bs_hmacSHA224WithKey:(NSData *)key;
- (instancetype)bs_hmacSHA256WithKey:(NSData *)key;
- (instancetype)bs_hmacSHA384WithKey:(NSData *)key;
- (instancetype)bs_hmacSHA512WithKey:(NSData *)key;

- (NSString *)bs_hmacMD5StringWithKey:(NSString *)key;
- (NSString *)bs_hmacSHA1StringWithKey:(NSString *)key;
- (NSString *)bs_hmacSHA224StringWithKey:(NSString *)key;
- (NSString *)bs_hmacSHA256StringWithKey:(NSString *)key;
- (NSString *)bs_hmacSHA384StringWithKey:(NSString *)key;
- (NSString *)bs_hmacSHA512StringWithKey:(NSString *)key;

NS_ASSUME_NONNULL_END

@end
