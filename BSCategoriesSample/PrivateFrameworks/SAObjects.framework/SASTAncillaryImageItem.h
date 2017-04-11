/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTAncillaryImageItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (nonatomic, retain) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)ancillaryImageItem;
+ (id)ancillaryImageItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (void)setImageResource:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
