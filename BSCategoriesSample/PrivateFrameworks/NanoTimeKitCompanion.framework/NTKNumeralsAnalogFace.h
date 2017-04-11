/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsAnalogFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (id)_customEditModes;
+ (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
+ (id)_defaultSelectedComplicationSlot;

- (id)_complicationMigrationPaths;
- (int)_editModeForOldEncodingIndex:(int)arg1;
- (void)_handleLocaleNumberSystemChange;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(int)arg3;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (void)dealloc;
- (id)init;

@end
