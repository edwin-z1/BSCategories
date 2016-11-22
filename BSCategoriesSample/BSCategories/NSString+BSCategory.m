//
//  NSString+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/22.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSString+BSCategory.h"
#import "NSData+BSCategory.h"

#import <CommonCrypto/CommonDigest.h>

@implementation NSString (BSCategory)

#pragma mark - generating

+ (instancetype)bs_characterNumString {
    return @"1234567890";
}

+ (instancetype)bs_characterCharString {
    return @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
}

+ (instancetype)bs_characterNumCharString {
    return [[self bs_characterNumString] stringByAppendingString:[self bs_characterCharString]];
}

+ (instancetype)bs_punctuationString {
    return @"`-=~!@#$%^&*()_+[]\\{}|;':\",./<>? ～！@＃¥％……&＊（）——＋－＝［］｛｝；’：“，。／《》？";
}

+ (instancetype)bs_UUIDString {
    return [[NSUUID UUID] UUIDString];
}

+ (instancetype)bs_GUString {
    return [[NSProcessInfo processInfo] globallyUniqueString];
}

#pragma mark - drawing

- (CGSize)bs_sizeForConstrainedSize:(CGSize)constrainedSize attributes:(NSDictionary *)attributes {
    NSStringDrawingOptions options = NSStringDrawingTruncatesLastVisibleLine | NSStringDrawingUsesFontLeading | NSStringDrawingUsesLineFragmentOrigin;
    CGRect bounds = [self boundingRectWithSize:constrainedSize options:options attributes:attributes context:nil];
    return bounds.size;
}

- (CGFloat)bs_heightForConstrainedWidth:(CGFloat)constrainedWidth attributes:(NSDictionary *)attributes {
    return [self bs_sizeForConstrainedSize:CGSizeMake(constrainedWidth, HUGE) attributes:attributes].height;
}

#pragma mark - validating

- (BOOL)bs_isContainsCharactersInString:(NSString *)string {
    return ![self isEqualToString:[self bs_stringByRemovingCharactersInString:string]];
}

- (BOOL)bs_isMatchesPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options {
    NSError *error = nil;
    NSRegularExpression *regularExpression = [NSRegularExpression regularExpressionWithPattern:pattern options:options error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return NO;
    }
    return ([regularExpression numberOfMatchesInString:self options:0 range:NSMakeRange(0, self.length)] > 0);
}

- (BOOL)bs_isNumbers {
    return [self evaluateWithRegex:@"^\\d+$"];
}

- (BOOL)bs_isCharacters {
    return [self evaluateWithRegex:@"^\\w+$"];
}

- (BOOL)bs_isChinese {
    return [self evaluateWithRegex:@"^[\u4e00-\u9fa5]+$"];
}

- (BOOL)bs_isEmail {
    return [self evaluateWithRegex:@"^\\b[A-Za-z0-9._%+-]+@(?:[A-Za-z0-9-]+\\.)+[A-Za-z]{2,6}\\b$"];
}

- (BOOL)bs_isIP {
    return [self evaluateWithRegex:@"^((25[0-5]|2[0-4]\\d|1?\\d{1,2})\\.){3}(25[0-5]|2[0-4]\\d|1?\\d{1,2})$"];
}

- (BOOL)bs_isIdentity {
    return [self evaluateWithRegex:@"^(\\d{14}|\\d{17})(\\d|[xX])$"];
}

- (BOOL)bs_isMobile {
    return [self evaluateWithRegex:@"^1(3[0-9]|5[0-35-9]|8[0-9])\\d{8}$"];
}

- (BOOL)bs_isTelephone {
    return [self evaluateWithRegex:@"^(0[0-9]{2,3}\\-)?([2-9][0-9]{6,7})+(\\-[0-9]{1,4})?$"];
}

- (BOOL)evaluateWithRegex:(NSString *)regex {
    return [[NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex] evaluateWithObject:self];
}

- (void)bs_enumerateRegexMatchesWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options usingBlock:(void (^)(NSRange range, NSMatchingFlags flags, BOOL *stop))block {
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:options error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
    }
    [regex enumerateMatchesInString:self options:kNilOptions range:NSMakeRange(0, self.length) usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop) {
        block(result.range, flags, stop);
    }];
}

- (nullable instancetype)bs_stringByReplacingRegexMatchesWithPattern:(NSString *)pattern options:(NSRegularExpressionOptions)options withTemplate:(NSString *)templ {
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern options:options error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return nil;
    }
    return [regex stringByReplacingMatchesInString:self options:kNilOptions range:NSMakeRange(0, [self length]) withTemplate:templ];
}

#pragma mark - converting

- (instancetype)bs_stringByTrimmingCharactersInString:(NSString *)string {
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:string]];
}

- (instancetype)bs_stringByRemovingCharactersInString:(NSString *)string {
    NSCharacterSet *set = [NSCharacterSet characterSetWithCharactersInString:string];
    NSString *filtered = [[self componentsSeparatedByCharactersInSet:set] componentsJoinedByString:@""];
    return filtered;
}

- (nullable id)bs_JSONObject {
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSError *error = nil;
    id object = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableLeaves error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return nil;
    }
    return object;
}

- (instancetype)bs_pinyin {
    CFStringRef cfstr = (__bridge CFStringRef)self;
    CFMutableStringRef str = CFStringCreateMutableCopy(NULL, 0, cfstr);
    CFStringTransform(str, NULL, kCFStringTransformMandarinLatin, NO);
    CFStringTransform(str, NULL, kCFStringTransformStripDiacritics, NO);
    NSString *string = (__bridge_transfer NSString *)str;
    return [string stringByReplacingOccurrencesOfString:@" " withString:@""];
}

#pragma mark - handle format

- (NSDate *)bs_dateWithDateFormat:(NSString *)dateFormat {
    static NSDateFormatter *formatter;
    static dispatch_once_t once_token;
    dispatch_once(&once_token, ^{
        formatter = [NSDateFormatter new];
    });
    formatter.dateFormat = dateFormat;
    return [formatter dateFromString:self];
}

- (NSNumber *)bs_numberWithNumberFormat:(NSString *)numberFormat {
    static NSNumberFormatter *formatter;
    static dispatch_once_t once_token;
    dispatch_once(&once_token, ^{
        formatter = [NSNumberFormatter new];
    });
    formatter.positiveFormat = numberFormat;
    return [formatter numberFromString:self];
}

#pragma mark - hash

- (instancetype)bs_MD2 {
    return [self usingHashFunc:CC_MD2 length:CC_MD2_DIGEST_LENGTH];
}

- (instancetype)bs_MD4 {
    return [self usingHashFunc:CC_MD4 length:CC_MD2_DIGEST_LENGTH];
}

- (instancetype)bs_MD5 {
    return [self usingHashFunc:CC_MD5 length:CC_MD5_DIGEST_LENGTH];
}

- (instancetype)bs_SHA1 {
    return [self usingHashFunc:CC_SHA1 length:CC_SHA1_DIGEST_LENGTH];
}

- (instancetype)bs_SHA224 {
    return [self usingHashFunc:CC_SHA224 length:CC_SHA224_DIGEST_LENGTH];
}

- (instancetype)bs_SHA256 {
    return [self usingHashFunc:CC_SHA256 length:CC_SHA256_DIGEST_LENGTH];
}

- (instancetype)bs_SHA384 {
    return [self usingHashFunc:CC_SHA384 length:CC_SHA384_DIGEST_LENGTH];
}

- (instancetype)bs_SHA512 {
    return [self usingHashFunc:CC_SHA512 length:CC_SHA512_DIGEST_LENGTH];
}

- (instancetype)usingHashFunc:(unsigned char * (*)(const void *data, CC_LONG len, unsigned char *md))hashFunc length:(CC_LONG)length {
    const char *value = self.UTF8String;
    unsigned char hash[length];
    hashFunc(value, (CC_LONG)strlen(value), hash);
    NSMutableString *hashString = @"".mutableCopy;
    for(int count = 0; count < length; count++) {
        [hashString appendFormat:@"%02x", hash[count]];
    }
    return hashString;
}

#pragma mark - encoding & decoding

- (instancetype)bs_base64Encoded {
    return [[self dataUsingEncoding:NSUTF8StringEncoding] base64EncodedStringWithOptions:kNilOptions];
}

- (instancetype)bs_base64Decoded {
    NSData *data = [[NSData alloc]initWithBase64EncodedString:self options:kNilOptions];
    return [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
}

- (instancetype)bs_URLEncoded {
    if ([self respondsToSelector:@selector(stringByAddingPercentEncodingWithAllowedCharacters:)]) {
        /**
         AFNetworking/AFURLRequestSerialization.m
         
         Returns a percent-escaped string following RFC 3986 for a query string key or value.
         RFC 3986 states that the following characters are "reserved" characters.
         - General Delimiters: ":", "#", "[", "]", "@", "?", "/"
         - Sub-Delimiters: "!", "$", "&", "'", "(", ")", "*", "+", ",", ";", "="
         In RFC 3986 - Section 3.4, it states that the "?" and "/" characters should not be escaped to allow
         query strings to include a URL. Therefore, all "reserved" characters with the exception of "?" and "/"
         should be percent-escaped in the query string.
         - parameter string: The string to be percent-escaped.
         - returns: The percent-escaped string.
         */
        static NSString * const kAFCharactersGeneralDelimitersToEncode = @":#[]@"; // does not include "?" or "/" due to RFC 3986 - Section 3.4
        static NSString * const kAFCharactersSubDelimitersToEncode = @"!$&'()*+,;=";
        
        NSMutableCharacterSet * allowedCharacterSet = [[NSCharacterSet URLQueryAllowedCharacterSet] mutableCopy];
        [allowedCharacterSet removeCharactersInString:[kAFCharactersGeneralDelimitersToEncode stringByAppendingString:kAFCharactersSubDelimitersToEncode]];
        static NSUInteger const batchSize = 50;
        
        NSUInteger index = 0;
        NSMutableString *escaped = @"".mutableCopy;
        
        while (index < self.length) {
            NSUInteger length = MIN(self.length - index, batchSize);
            NSRange range = NSMakeRange(index, length);
            // To avoid breaking up character sequences such as 👴🏻👮🏽
            range = [self rangeOfComposedCharacterSequencesForRange:range];
            NSString *substring = [self substringWithRange:range];
            NSString *encoded = [substring stringByAddingPercentEncodingWithAllowedCharacters:allowedCharacterSet];
            [escaped appendString:encoded];
            
            index += range.length;
        }
        return escaped;
    } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        CFStringEncoding cfEncoding = CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding);
        NSString *encoded = (__bridge_transfer NSString *)
        CFURLCreateStringByAddingPercentEscapes(
                                                kCFAllocatorDefault,
                                                (__bridge CFStringRef)self,
                                                NULL,
                                                CFSTR("!#$&'()*+,/:;=?@[]"),
                                                cfEncoding);
        return encoded;
#pragma clang diagnostic pop
    }
}

- (instancetype)bs_URLDecoded {
    if ([self respondsToSelector:@selector(stringByRemovingPercentEncoding)]) {
        return [self stringByRemovingPercentEncoding];
    } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        CFStringEncoding en = CFStringConvertNSStringEncodingToEncoding(NSUTF8StringEncoding);
        NSString *decoded = [self stringByReplacingOccurrencesOfString:@"+"
                                                            withString:@" "];
        decoded = (__bridge_transfer NSString *)
        CFURLCreateStringByReplacingPercentEscapesUsingEncoding(
                                                                NULL,
                                                                (__bridge CFStringRef)decoded,
                                                                CFSTR(""),
                                                                en);
        return decoded;
#pragma clang diagnostic pop
    }
}

/*
 something wrong
 
- (NSString *)bs_AES256EncodedForKey:(NSString *)key {
    
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSData *hashKey = [[key dataUsingEncoding:NSUTF8StringEncoding] bs_SHA256];
    NSData *AESEncryptedData = [data bs_AES256EncodedWithKey:hashKey iv:nil];
    return [AESEncryptedData base64EncodedStringWithOptions:0];
}

- (NSString *)bs_AES256DecodedForKey:(NSString *)key {
    
    NSData *base64DecodedData = [[NSData alloc] initWithBase64EncodedString:self options:0];
    NSData *hashKey = [[key dataUsingEncoding:NSUTF8StringEncoding] bs_SHA256];
    NSData *AESDecryptedData = [base64DecodedData bs_AES256DecodedWithKey:hashKey iv:nil ];
    return [[NSString alloc] initWithData:AESDecryptedData encoding:NSUTF8StringEncoding];
}

- (NSString *)bs_DESEncodedForKey:(NSString *)key {
    
    NSData *data = [self dataUsingEncoding:NSUTF8StringEncoding];
    NSData *hashKey = [[key dataUsingEncoding:NSUTF8StringEncoding] bs_SHA256];
    NSData *DESEncryptedData = [data bs_DESEncodedWithKey:hashKey iv:nil];
    return [DESEncryptedData base64EncodedStringWithOptions:0];
}

- (NSString *)bs_DESDecodedForKey:(NSString *)key {
    
    NSData *base64DecodedData = [[NSData alloc] initWithBase64EncodedString:self options:0];
    NSData *hashKey = [[key dataUsingEncoding:NSUTF8StringEncoding] bs_SHA256];
    NSData *DESDecryptedData = [base64DecodedData bs_DESDecodedWithKey:hashKey iv:nil];
    return [[NSString alloc] initWithData:DESDecryptedData encoding:NSUTF8StringEncoding];
}
 */

@end
