/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECFakeInterfaceListener : CoreRCInterfaceListener

- (id)fakeAddInterfaceWithProperties:(id)arg1;
- (BOOL)interface:(id)arg1 pingTo:(unsigned char)arg2 acknowledged:(BOOL*)arg3 error:(id*)arg4;
- (BOOL)interface:(id)arg1 sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4;
- (BOOL)interface:(id)arg1 setAddressMask:(unsigned short)arg2 error:(id*)arg3;
- (BOOL)interface:(id)arg1 setPromiscMode:(BOOL)arg2 error:(id*)arg3;

@end
