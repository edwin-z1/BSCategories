//
//  NSData+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSData+BSCategory.h"

#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonHMAC.h>
@import ImageIO;

NSString * const kCommonCryptoErrorDomain = @"CommonCryptoErrorDomain";

@implementation NSData (BSCategory)

#pragma mark - generating

+ (nullable instancetype)bs_dataNamed:(NSString *)name {
    NSString *path = [[NSBundle mainBundle] pathForAuxiliaryExecutable:name];
    NSData *data = [NSData dataWithContentsOfFile:path];
    
    return data;
}

#pragma mark - validating

- (BOOL)bs_isGIFData {
    if (self.length < 16) return NO;
    UInt32 magic = *(UInt32 *)self.bytes;
    // http://www.w3.org/Graphics/GIF/spec-gif89a.txt
    if ((magic & 0xFFFFFF) != '\0FIG') return NO;
    CGImageSourceRef source = CGImageSourceCreateWithData((__bridge CFTypeRef)self, NULL);
    if (!source) return NO;
    size_t count = CGImageSourceGetCount(source);
    CFRelease(source);
    return count > 1;
}

#pragma mark - encoding & decoding

- (instancetype)bs_base64Encoded {
    return [self base64EncodedDataWithOptions:kNilOptions];
}

- (instancetype)bs_base64Decoded {
    return [[NSData alloc]initWithBase64EncodedData:self options:kNilOptions];
}

- (NSString *)bs_base64EncodedString {
    return [self base64EncodedStringWithOptions:kNilOptions];
}

- (NSString *)bs_base64DecodedString {
    return [[NSString alloc]initWithData:[self bs_base64Decoded]  encoding:NSUTF8StringEncoding];
}

#pragma mark - common digest

- (instancetype)bs_MD2 {
    return [self usingHashFunc:CC_MD2 length:CC_MD2_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_MD4 {
    return [self usingHashFunc:CC_MD4 length:CC_MD4_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_MD5 {
    return [self usingHashFunc:CC_MD5 length:CC_MD5_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_SHA1 {
    return [self usingHashFunc:CC_SHA1 length:CC_SHA1_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_SHA224 {
    return [self usingHashFunc:CC_SHA224 length:CC_SHA224_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_SHA256 {
    return [self usingHashFunc:CC_SHA256 length:CC_SHA256_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_SHA384 {
    return [self usingHashFunc:CC_SHA384 length:CC_SHA384_DIGEST_LENGTH returnClass:[NSData class]];
}

- (instancetype)bs_SHA512 {
    return [self usingHashFunc:CC_SHA512 length:CC_SHA512_DIGEST_LENGTH returnClass:[NSData class]];
}

- (NSString *)bs_MD2String {
    return [self usingHashFunc:CC_MD2 length:CC_MD2_DIGEST_LENGTH returnClass:[NSString class]];
}
- (NSString *)bs_MD4String {
    return [self usingHashFunc:CC_MD4 length:CC_MD4_DIGEST_LENGTH returnClass:[NSString class]];
}
- (NSString *)bs_MD5String {
    return [self usingHashFunc:CC_MD5 length:CC_MD5_DIGEST_LENGTH returnClass:[NSString class]];
}

- (NSString *)bs_SHA1String {
    return [self usingHashFunc:CC_SHA1 length:CC_SHA1_DIGEST_LENGTH returnClass:[NSString class]];
}

- (NSString *)bs_SHA224String {
    return [self usingHashFunc:CC_SHA224 length:CC_SHA224_DIGEST_LENGTH returnClass:[NSString class]];
}

- (NSString *)bs_SHA256String {
    return [self usingHashFunc:CC_SHA256 length:CC_SHA256_DIGEST_LENGTH returnClass:[NSString class]];
}

- (NSString *)bs_SHA384String {
    return [self usingHashFunc:CC_SHA384 length:CC_SHA384_DIGEST_LENGTH returnClass:[NSString class]];
}

- (NSString *)bs_SHA512String {
    return [self usingHashFunc:CC_SHA512 length:CC_SHA512_DIGEST_LENGTH returnClass:[NSString class]];
}

- (id)usingHashFunc:(unsigned char * (*)(const void *data, CC_LONG len, unsigned char *md))hashFunc length:(CC_LONG)length returnClass:(id)class {
    unsigned char hash[length];
    hashFunc(self.bytes, (CC_LONG)self.length, hash);
    
    if ([class isKindOfClass:[NSData class]]) {
        return [NSData dataWithBytes:hash length:length];
    } else {
        NSMutableString *hashString = @"".mutableCopy;
        for(int count = 0; count < length; count++) {
            [hashString appendFormat:@"%02x", hash[count]];
        }
        return hashString;
    }
}

#pragma mark - CommonCryptor

/*
 something wrong

- (nullable instancetype)bs_AES256EncodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCEncrypt algorithm:kCCAlgorithmAES128 options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)bs_AES256DecodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCDecrypt algorithm:kCCAlgorithmAES128 options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)bs_DESEncodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCEncrypt algorithm:kCCAlgorithmDES options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)bs_DESDecodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCDecrypt algorithm:kCCAlgorithmDES options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)bs_CASTEncodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCEncrypt algorithm:kCCAlgorithmCAST options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)bs_CASTDecodedWithKey:(id)key iv:(id)iv {
    return [self cryptingUsingOperation:kCCDecrypt algorithm:kCCAlgorithmCAST options:kCCOptionPKCS7Padding key:key iv:iv];
}

- (nullable instancetype)cryptingUsingOperation:(CCOperation)opeation algorithm:(CCAlgorithm)algorithm options:(CCOptions)options key:(id)key iv:(_Nullable id)iv {
    NSParameterAssert([key isKindOfClass: [NSData class]] || [key isKindOfClass: [NSString class]]);
    NSParameterAssert(iv == nil || [iv isKindOfClass: [NSData class]] || [iv isKindOfClass: [NSString class]]);
    
    NSMutableData *keyData, *ivData;
    if ( [key isKindOfClass: [NSData class]] )
        keyData = (NSMutableData *)[key mutableCopy];
    else
        keyData = [[key dataUsingEncoding: NSUTF8StringEncoding] mutableCopy];
    
    if ( [iv isKindOfClass: [NSString class]] )
        ivData = [[iv dataUsingEncoding: NSUTF8StringEncoding] mutableCopy];
    else
        ivData = (NSMutableData *) [iv mutableCopy];	// data or nil
    
    // ensure correct lengths for key and iv data, based on algorithms
    FixKeyLengths(algorithm, keyData, ivData);
    
    CCCryptorRef cryptor = NULL;
    CCCryptorStatus status = CCCryptorCreate(kCCDecrypt, algorithm, options, [keyData bytes], [keyData length], [ivData bytes], &cryptor);
    NSError *error = CreateErrorWithCCCryptorStatus(status);
    if ([error bs_printErrorDescriptionWithSelector:_cmd]) {
        return nil;
    }

    size_t bufSize = CCCryptorGetOutputLength(cryptor, (size_t)[self length], true );
    void * buf = malloc(bufSize);
    size_t bufUsed = 0;
    size_t bytesTotal = 0;
    status = CCCryptorUpdate(cryptor, [self bytes], (size_t)[self length], buf, bufSize, &bufUsed);
    error = CreateErrorWithCCCryptorStatus(status);
    if ([error bs_printErrorDescriptionWithSelector:_cmd]) {
        free(buf);
        return nil;
    }
    
    bytesTotal += bufUsed;
    
    // From Brent Royal-Gordon (Twitter: architechies):
    //  Need to update buf ptr past used bytes when calling CCCryptorFinal()
    status = CCCryptorFinal(cryptor, buf + bufUsed, bufSize - bufUsed, &bufUsed );
    error = CreateErrorWithCCCryptorStatus(status);
    if ([error bs_printErrorDescriptionWithSelector:_cmd]) {
        free(buf);
        return nil;
    }
    
    bytesTotal += bufUsed;
    
    NSData *result = [NSData dataWithBytesNoCopy:buf length:bytesTotal];

    CCCryptorRelease(cryptor);
    return result;
}

static NSError *CreateErrorWithCCCryptorStatus(CCCryptorStatus status) {
    if (status == kCCSuccess) {
        return nil;
    }
    
    NSString *description = nil, *reason = nil;
    
    switch (status) {
        case kCCParamError:
            description = NSLocalizedString(@"Parameter Error", @"Error description");
            reason = NSLocalizedString(@"Illegal parameter supplied to encryption/decryption algorithm", @"Error reason");
            break;
            
        case kCCBufferTooSmall:
            description = NSLocalizedString(@"Buffer Too Small", @"Error description");
            reason = NSLocalizedString(@"Insufficient buffer provided for specified operation", @"Error reason");
            break;
            
        case kCCMemoryFailure:
            description = NSLocalizedString(@"Memory Failure", @"Error description");
            reason = NSLocalizedString(@"Failed to allocate memory", @"Error reason");
            break;
            
        case kCCAlignmentError:
            description = NSLocalizedString(@"Alignment Error", @"Error description");
            reason = NSLocalizedString(@"Input size to encryption algorithm was not aligned correctly", @"Error reason");
            break;
            
        case kCCDecodeError:
            description = NSLocalizedString(@"Decode Error", @"Error description");
            reason = NSLocalizedString(@"Input data did not decode or decrypt correctly", @"Error reason");
            break;
            
        case kCCUnimplemented:
            description = NSLocalizedString(@"Unimplemented Function", @"Error description");
            reason = NSLocalizedString(@"Function not implemented for the current algorithm", @"Error reason");
            break;
            
        default:
            description = NSLocalizedString(@"Unknown Error", @"Error description");
            break;
    }
    
    NSMutableDictionary *userInfo = [[NSMutableDictionary alloc] init];
    [userInfo setObject:description forKey: NSLocalizedDescriptionKey];
    
    if ( reason != nil )
        [userInfo setObject:reason forKey: NSLocalizedFailureReasonErrorKey];
    
    NSError *error = [NSError errorWithDomain:kCommonCryptoErrorDomain code:status userInfo:userInfo];
    
    return error;
}

static void FixKeyLengths(CCAlgorithm algorithm, NSMutableData * keyData, NSMutableData * ivData )
{
    NSUInteger keyLength = [keyData length];
    switch ( algorithm )
    {
        case kCCAlgorithmAES128:
        {
            if ( keyLength < 16 )
            {
                [keyData setLength: 16];
            }
            else if ( keyLength < 24 )
            {
                [keyData setLength: 24];
            }
            else
            {
                [keyData setLength: 32];
            }
            
            break;
        }
            
        case kCCAlgorithmDES:
        {
            [keyData setLength: 8];
            break;
        }
            
        case kCCAlgorithm3DES:
        {
            [keyData setLength: 24];
            break;
        }
            
        case kCCAlgorithmCAST:
        {
            if ( keyLength < 5 )
            {
                [keyData setLength: 5];
            }
            else if ( keyLength > 16 )
            {
                [keyData setLength: 16];
            }
            
            break;
        }
            
        case kCCAlgorithmRC4:
        {
            if ( keyLength > 512 )
                [keyData setLength: 512];
            break;
        }
            
        default:
            break;
    }
    
    [ivData setLength: [keyData length]];
}

 */
#pragma mark - HMAC

- (instancetype)bs_hmacMD5WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgMD5 key:key];
}
- (instancetype)bs_hmacSHA1WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA1 key:key];
}
- (instancetype)bs_hmacSHA224WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA224 key:key];
}
- (instancetype)bs_hmacSHA256WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA256 key:key];
}
- (instancetype)bs_hmacSHA384WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA384 key:key];
}
- (instancetype)bs_hmacSHA512WithKey:(NSData *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA512 key:key];
}

- (NSString *)bs_hmacMD5StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgMD5 key:key];
}
- (NSString *)bs_hmacSHA1StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA1 key:key];
}
- (NSString *)bs_hmacSHA224StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA224 key:key];
}
- (NSString *)bs_hmacSHA256StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA256 key:key];
}
- (NSString *)bs_hmacSHA384StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA384 key:key];
}
- (NSString *)bs_hmacSHA512StringWithKey:(NSString *)key {
    return [self usingHMACAlgorithm:kCCHmacAlgSHA512 key:key];
}

- (id)usingHMACAlgorithm:(CCHmacAlgorithm)algorithm key:(id)key {
    size_t size;
    switch (algorithm) {
        case kCCHmacAlgMD5: size = CC_MD5_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA1: size = CC_SHA1_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA224: size = CC_SHA224_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA256: size = CC_SHA256_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA384: size = CC_SHA384_DIGEST_LENGTH; break;
        case kCCHmacAlgSHA512: size = CC_SHA512_DIGEST_LENGTH; break;
        default: return nil;
    }
    unsigned char result[size];
    const char *cKey = [key cStringUsingEncoding:NSUTF8StringEncoding];
    CCHmac(algorithm, cKey, strlen(cKey), self.bytes, self.length, result);
    
    if ([key isKindOfClass:[NSData class]]) {
        return [NSData dataWithBytes:result length:size];
    } else {
        NSMutableString *hashString = [NSMutableString stringWithCapacity:size * 2];
        for (int i = 0; i < size; i++) {
            [hashString appendFormat:@"%02x", result[i]];
        }
        return hashString;
    }
}

@end
