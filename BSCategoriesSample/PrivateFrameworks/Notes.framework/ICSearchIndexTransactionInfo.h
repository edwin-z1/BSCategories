/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexTransactionInfo : NSObject <ICPropertyListSerializable, NSCopying, NSMutableCopying> {
    NSDictionary * _transactionInfoDictionary;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, copy) NSDictionary *transactionInfoDictionary;
@property (nonatomic, readonly) BOOL valid;

+ (id)completionTransactionID;
+ (id)invalidTransactionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (BOOL)guaranteesCompletionOfTransactionInfo:(id)arg1;
- (id)init;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initWithTransactionInfoDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyListObjectRepresentation;
- (void)setTransactionInfoDictionary:(id)arg1;
- (id)transactionIDForName:(id)arg1;
- (id)transactionInfoDictionary;
- (BOOL)valid;

@end
