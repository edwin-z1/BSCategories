/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASRecognition : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic) int sentenceConfidence;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *utterances;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)recognition;
+ (id)recognitionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phrases;
- (int)sentenceConfidence;
- (void)setPhrases:(id)arg1;
- (void)setSentenceConfidence:(int)arg1;
- (void)setUtterances:(id)arg1;
- (id)utterances;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_speechPhrases;
- (id)af_speechUtterances;

@end
