/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBreathingComplicationDataSource : NTKComplicationDataSource

+ (id)_templateForFamily:(int)arg1;
+ (BOOL)acceptsComplicationFamily:(int)arg1;
+ (BOOL)acceptsComplicationType:(unsigned int)arg1;

- (id)_template;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(int)arg2;
- (id)lockedTemplate;

@end
