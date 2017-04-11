/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayAutoDetector : NSObject {
    BOOL  _isDetectingDisplays;
    NSMutableDictionary * _iteratorDict;
    struct IONotificationPort { } * _notificationPort;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedDetector;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detectDisplays;
- (id)init;
- (BOOL)isAutoDetectEnabled;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)stopDetectingDisplays;

@end
