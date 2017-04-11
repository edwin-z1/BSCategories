//
//  NSObject+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/21.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - for objc runtime coding

/// Get class name from class object.
+ (NSString *)bs_className;

/// Get class name from instance object.
- (NSString *)bs_className;

/// Get propertiy keys.
- (nullable NSArray<NSString *> *)bs_propertyListKeys;

/// Get property values.
- (nullable NSArray<NSString *> *)bs_propertyListValues;

/// Set OBJC_ASSOCIATION_RETAIN_NONATOMIC value for key
- (void)bs_setAssociateRetainValue:(id)value forKey:(void *)key;

/// Set OBJC_ASSOCIATION_ASSIGN value for key
- (void)bs_setAssociateAssignValue:(id)value forKey:(void *)key;

/// Get associated value
- (id)bs_getAssociatedValueForKey:(void *)key;

/// Switch instance method, use in + (void)initliaze or +(void)load, with dispatch_once
+ (void)bs_swizzleInstanceMethod:(SEL)originalSel with:(SEL)swizzledSel;

/// Switch class method, use in + (void)initliaze or +(void)load, with dispatch_once
+ (void)bs_swizzleClassMethod:(SEL)originalSel with:(SEL)swizzledSel;

#pragma mark - for GCD

- (void)bs_syncInMainQueue:(dispatch_block_t)block;
- (void)bs_syncInGlobalQueue:(dispatch_block_t)block;
- (void)bs_sync:(dispatch_block_t)block inQueue:(dispatch_queue_t)queue;

- (void)bs_asyncInMainQueue:(dispatch_block_t)block;
- (void)bs_asyncInGlobalQueue:(dispatch_block_t)block;
- (void)bs_async:(dispatch_block_t)block inQueue:(dispatch_queue_t)queue;

- (void)bs_after:(NSTimeInterval)delay block:(void (^)())block;

#pragma mark - for KVO

typedef void(^BSKVOBlock)(id oldValue, id newValue);

/// If the keypath has been observed ,replace old block with new block. Else, add KVO block
- (void)bs_setObserverForKeyPath:(NSString *)keyPath block:(BSKVOBlock)block;

/// Remove KVO block for keyPath
- (void)bs_removeObserverForKeyPath:(NSString *)keyPath;

/// Remove all KVOs
- (void)bs_removeAllObservers;

NS_ASSUME_NONNULL_END

@end
