/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCaptureFormat : NSObject

+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)AVAssetExportPresetForExportingToExtension:(id)arg1;
+ (id)AVFileTypeUTIForFileExtension:(id)arg1;
+ (id)AVMediaTypeForFileExtension:(id)arg1;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)fileExtensionForAssetExport;
+ (id)fileExtensionForIntermediateAssetCapture;
+ (id)fileExtensionsSupported;
+ (id)fileFormatsDirectlyImportable;

@end
