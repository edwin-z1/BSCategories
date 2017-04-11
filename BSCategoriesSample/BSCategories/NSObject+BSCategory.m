//
//  NSObject+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/21.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSObject+BSCategory.h"

#import <objc/runtime.h>

@implementation NSObject (BSCategory)

#pragma mark - for objc runtime coding

+ (NSString *)bs_className {
    return NSStringFromClass(self);
}

- (NSString *)bs_className {
    return [NSString stringWithUTF8String:class_getName([self class])];
}

- (void)bs_setAssociateRetainValue:(id)value forKey:(void *)key {
    objc_setAssociatedObject(self, key, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (void)bs_setAssociateAssignValue:(id)value forKey:(void *)key {
    objc_setAssociatedObject(self, key, value, OBJC_ASSOCIATION_ASSIGN);
}

- (id)bs_getAssociatedValueForKey:(void *)key {
    return objc_getAssociatedObject(self, key);
}

- (nullable NSArray<NSString *> *)bs_propertyListKeys {
    unsigned int count = 0;
    objc_property_t *propertyList = class_copyPropertyList(self.class, &count);
    
    NSMutableArray *keys = @[].mutableCopy;
    for (NSInteger i = 0; i < count; i++) {
        objc_property_t property = propertyList[i];
        
        const char *propertyName = property_getName(property);
        
        NSString *key = [NSString stringWithCString:propertyName encoding:NSUTF8StringEncoding];
        if (key) {
            [keys addObject:key];
        }
    }
    
    free(propertyList);
    return keys.copy;
}

- (nullable NSArray<NSString *> *)bs_propertyListValues {
    
    NSArray *keys = [self bs_propertyListKeys];
    
    NSMutableArray *values = @[].mutableCopy;
    for (NSInteger i = 0; i < keys.count; i++) {
        NSString* key = keys[i];
        
        id value = [self valueForKey:key];
        if (value) {
            [values addObject:[NSString stringWithFormat:@"%@", value]];
        } else {
            [values addObject:[NSNull null]];
        }
    }
    return values.copy;
}

+ (void)bs_swizzleInstanceMethod:(SEL)originalSel with:(SEL)swizzledSel {
    Method originalMethod = class_getInstanceMethod(self, originalSel);
    Method swizzledMethod = class_getInstanceMethod(self, swizzledSel);

     BOOL didAddMethod = class_addMethod(self, originalSel, method_getImplementation(swizzledMethod), method_getTypeEncoding(swizzledMethod));
     if (didAddMethod) {
         class_replaceMethod(self, swizzledSel, method_getImplementation(originalMethod), method_getTypeEncoding(originalMethod));
     } else {
         method_exchangeImplementations(originalMethod, swizzledMethod);
     }
    
//    method_exchangeImplementations(originalMethod, swizzledMethod);
}

+ (void)bs_swizzleClassMethod:(SEL)originalSel with:(SEL)swizzledSel {
    Class class = self;
    Method originalMethod = class_getClassMethod(class, originalSel);
    Method swizzledMethod = class_getClassMethod(class, swizzledSel);
    
    /* 以下方式也可以

     Class class = object_getClass(self);
     Method originalMethod = class_getInstanceMethod(class, originalSel);
     Method swizzledMethod = class_getInstanceMethod(class, swizzledSel);
     
     */
    method_exchangeImplementations(originalMethod, swizzledMethod);
}

#pragma mark - for GCD

- (void)bs_syncInMainQueue:(dispatch_block_t)block {
    [self bs_sync:block inQueue:dispatch_get_main_queue()];
}

- (void)bs_syncInGlobalQueue:(dispatch_block_t)block {
    [self bs_sync:block inQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)];
}

- (void)bs_sync:(dispatch_block_t)block inQueue:(dispatch_queue_t)queue {
    dispatch_sync(queue, block);
}

- (void)bs_asyncInMainQueue:(dispatch_block_t)block {
    [self bs_async:block inQueue:dispatch_get_main_queue()];
}

- (void)bs_asyncInGlobalQueue:(dispatch_block_t)block {
    [self bs_async:block inQueue:dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)];
}

- (void)bs_async:(void (^)(void))block inQueue:(dispatch_queue_t)queue {
    dispatch_async(queue, block);
}

- (void)bs_after:(NSTimeInterval)delay block:(void (^)())block {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        block();
    });
}

#pragma mark - for KVO

- (void)bs_setObserverForKeyPath:(NSString *)keyPath block:(BSKVOBlock)block {
    NSMutableDictionary *dictionary = [self KVOKeyPathToBlockDictionary];
    BSKVOBlock blockForKeyPath = dictionary[keyPath];
    if (!blockForKeyPath) {
        [self addObserver:self forKeyPath:keyPath options:NSKeyValueObservingOptionNew | NSKeyValueObservingOptionOld context:NULL];
    }
    dictionary[keyPath] = block;
}

- (void)bs_removeObserverForKeyPath:(NSString *)keyPath {
    NSMutableDictionary *dictionary = [self KVOKeyPathToBlockDictionary];
    [self removeObserver:self forKeyPath:keyPath];
    [dictionary removeObjectForKey:keyPath];
}

- (void)bs_removeAllObservers {
    NSMutableDictionary *dictionary = [self KVOKeyPathToBlockDictionary];
    [dictionary enumerateKeysAndObjectsUsingBlock: ^(NSString *keyPath, id block, BOOL *stop) {
        [self removeObserver:self forKeyPath:keyPath];
    }];
    
    [dictionary removeAllObjects];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSString *,id> *)change context:(void *)context {
    BOOL isPrior = [[change objectForKey:NSKeyValueChangeNotificationIsPriorKey] boolValue];
    if (isPrior) return;
    
    NSKeyValueChange changeKind = [[change objectForKey:NSKeyValueChangeKindKey] integerValue];
    if (changeKind != NSKeyValueChangeSetting) return;
    
    id oldVal = [change objectForKey:NSKeyValueChangeOldKey];
    
    id newVal = [change objectForKey:NSKeyValueChangeNewKey];
    
    NSMutableDictionary *dictionary = [self KVOKeyPathToBlockDictionary];
    BSKVOBlock blockForKeyPath = dictionary[keyPath];
    blockForKeyPath(oldVal, newVal);
}

- (NSMutableDictionary *)KVOKeyPathToBlockDictionary {
    NSMutableDictionary *dictionary = [self bs_getAssociatedValueForKey:_cmd];
    if (!dictionary) {
        dictionary = [NSMutableDictionary new];
        [self bs_setAssociateRetainValue:dictionary forKey:_cmd];
    }
    return dictionary;
}

@end
