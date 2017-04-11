/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {
    NSString * _localizedSectionHeader;
    NSMutableArray * _suggestionEntries;
}

@property (nonatomic, readonly) BOOL hasLocalizedSectionHeader;
@property (nonatomic, retain) NSString *localizedSectionHeader;
@property (nonatomic, retain) NSMutableArray *suggestionEntries;

+ (Class)suggestionEntriesType;

- (void)addSuggestionEntries:(id)arg1;
- (void)clearSuggestionEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLocalizedSectionHeader;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedSectionHeader;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSuggestionEntries:(id)arg1;
- (id)suggestionEntries;
- (id)suggestionEntriesAtIndex:(unsigned int)arg1;
- (unsigned int)suggestionEntriesCount;
- (void)writeTo:(id)arg1;

@end
