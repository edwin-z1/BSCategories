/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    BOOL  _cancelled;
    int  _priority;
    CPLResource * _resource;
    NSString * _taskIdentifier;
}

@property (getter=isCancelled, nonatomic, readonly) BOOL cancelled;
@property (getter=isHighPriority, nonatomic) BOOL highPriority;
@property (nonatomic, retain) CPLResource *resource;
@property (nonatomic, copy) NSString *taskIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancelTask;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCancelled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHighPriority;
- (void)launch;
- (id)resource;
- (void)setHighPriority:(BOOL)arg1;
- (void)setResource:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)taskIdentifier;

@end
