/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetConfig : PBCodable <NSCopying> {
    double  _alternativeButlerWidgetConfigPopulationCeiling;
    double  _alternativeButlerWidgetConfigPopulationFloor;
    long long  _backgroundMinimumUpdateInterval;
    unsigned int  _enabledSections;
    long long  _forYouBackgroundMinimumUpdateInterval;
    long long  _forYouCutoffTime;
    long long  _forYouForegroundMinimumUpdateInterval;
    long long  _foregroundMinimumUpdateInterval;
    struct { 
        unsigned int alternativeButlerWidgetConfigPopulationCeiling : 1; 
        unsigned int alternativeButlerWidgetConfigPopulationFloor : 1; 
        unsigned int backgroundMinimumUpdateInterval : 1; 
        unsigned int forYouBackgroundMinimumUpdateInterval : 1; 
        unsigned int forYouCutoffTime : 1; 
        unsigned int forYouForegroundMinimumUpdateInterval : 1; 
        unsigned int foregroundMinimumUpdateInterval : 1; 
        unsigned int parsecPopulationCeiling : 1; 
        unsigned int parsecPopulationFloor : 1; 
        unsigned int parsecTrendingCutoffTime : 1; 
        unsigned int topStoriesBackgroundMinimumUpdateInterval : 1; 
        unsigned int topStoriesCutoffTime : 1; 
        unsigned int topStoriesForegroundMinimumUpdateInterval : 1; 
        unsigned int trendingBackgroundMinimumUpdateInterval : 1; 
        unsigned int trendingCutoffTime : 1; 
        unsigned int trendingForegroundMinimumUpdateInterval : 1; 
        unsigned int enabledSections : 1; 
    }  _has;
    NSString * _identifier;
    double  _parsecPopulationCeiling;
    double  _parsecPopulationFloor;
    long long  _parsecTrendingCutoffTime;
    long long  _topStoriesBackgroundMinimumUpdateInterval;
    long long  _topStoriesCutoffTime;
    long long  _topStoriesForegroundMinimumUpdateInterval;
    long long  _trendingBackgroundMinimumUpdateInterval;
    long long  _trendingCutoffTime;
    long long  _trendingForegroundMinimumUpdateInterval;
}

@property (nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) double alternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) long long backgroundMinimumUpdateInterval;
@property (nonatomic) unsigned int enabledSections;
@property (nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic) long long forYouCutoffTime;
@property (nonatomic) long long forYouForegroundMinimumUpdateInterval;
@property (nonatomic) long long foregroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationCeiling;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationFloor;
@property (nonatomic) BOOL hasBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasEnabledSections;
@property (nonatomic) BOOL hasForYouBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForYouCutoffTime;
@property (nonatomic) BOOL hasForYouForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasForegroundMinimumUpdateInterval;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic) BOOL hasParsecPopulationCeiling;
@property (nonatomic) BOOL hasParsecPopulationFloor;
@property (nonatomic) BOOL hasParsecTrendingCutoffTime;
@property (nonatomic) BOOL hasTopStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTopStoriesCutoffTime;
@property (nonatomic) BOOL hasTopStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingBackgroundMinimumUpdateInterval;
@property (nonatomic) BOOL hasTrendingCutoffTime;
@property (nonatomic) BOOL hasTrendingForegroundMinimumUpdateInterval;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double parsecPopulationCeiling;
@property (nonatomic) double parsecPopulationFloor;
@property (nonatomic) long long parsecTrendingCutoffTime;
@property (nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;
@property (nonatomic) long long topStoriesCutoffTime;
@property (nonatomic) long long topStoriesForegroundMinimumUpdateInterval;
@property (nonatomic) long long trendingBackgroundMinimumUpdateInterval;
@property (nonatomic) long long trendingCutoffTime;
@property (nonatomic) long long trendingForegroundMinimumUpdateInterval;

- (void).cxx_destruct;
- (double)alternativeButlerWidgetConfigPopulationCeiling;
- (double)alternativeButlerWidgetConfigPopulationFloor;
- (long long)backgroundMinimumUpdateInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enabledSections;
- (long long)forYouBackgroundMinimumUpdateInterval;
- (long long)forYouCutoffTime;
- (long long)forYouForegroundMinimumUpdateInterval;
- (long long)foregroundMinimumUpdateInterval;
- (BOOL)hasAlternativeButlerWidgetConfigPopulationCeiling;
- (BOOL)hasAlternativeButlerWidgetConfigPopulationFloor;
- (BOOL)hasBackgroundMinimumUpdateInterval;
- (BOOL)hasEnabledSections;
- (BOOL)hasForYouBackgroundMinimumUpdateInterval;
- (BOOL)hasForYouCutoffTime;
- (BOOL)hasForYouForegroundMinimumUpdateInterval;
- (BOOL)hasForegroundMinimumUpdateInterval;
- (BOOL)hasIdentifier;
- (BOOL)hasParsecPopulationCeiling;
- (BOOL)hasParsecPopulationFloor;
- (BOOL)hasParsecTrendingCutoffTime;
- (BOOL)hasTopStoriesBackgroundMinimumUpdateInterval;
- (BOOL)hasTopStoriesCutoffTime;
- (BOOL)hasTopStoriesForegroundMinimumUpdateInterval;
- (BOOL)hasTrendingBackgroundMinimumUpdateInterval;
- (BOOL)hasTrendingCutoffTime;
- (BOOL)hasTrendingForegroundMinimumUpdateInterval;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (long long)parsecTrendingCutoffTime;
- (BOOL)readFrom:(id)arg1;
- (void)setAlternativeButlerWidgetConfigPopulationCeiling:(double)arg1;
- (void)setAlternativeButlerWidgetConfigPopulationFloor:(double)arg1;
- (void)setBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setEnabledSections:(unsigned int)arg1;
- (void)setForYouBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setForYouCutoffTime:(long long)arg1;
- (void)setForYouForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setHasAlternativeButlerWidgetConfigPopulationCeiling:(BOOL)arg1;
- (void)setHasAlternativeButlerWidgetConfigPopulationFloor:(BOOL)arg1;
- (void)setHasBackgroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasEnabledSections:(BOOL)arg1;
- (void)setHasForYouBackgroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasForYouCutoffTime:(BOOL)arg1;
- (void)setHasForYouForegroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasForegroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasParsecPopulationCeiling:(BOOL)arg1;
- (void)setHasParsecPopulationFloor:(BOOL)arg1;
- (void)setHasParsecTrendingCutoffTime:(BOOL)arg1;
- (void)setHasTopStoriesBackgroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasTopStoriesCutoffTime:(BOOL)arg1;
- (void)setHasTopStoriesForegroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasTrendingBackgroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setHasTrendingCutoffTime:(BOOL)arg1;
- (void)setHasTrendingForegroundMinimumUpdateInterval:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParsecPopulationCeiling:(double)arg1;
- (void)setParsecPopulationFloor:(double)arg1;
- (void)setParsecTrendingCutoffTime:(long long)arg1;
- (void)setTopStoriesBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setTopStoriesCutoffTime:(long long)arg1;
- (void)setTopStoriesForegroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingBackgroundMinimumUpdateInterval:(long long)arg1;
- (void)setTrendingCutoffTime:(long long)arg1;
- (void)setTrendingForegroundMinimumUpdateInterval:(long long)arg1;
- (long long)topStoriesBackgroundMinimumUpdateInterval;
- (long long)topStoriesCutoffTime;
- (long long)topStoriesForegroundMinimumUpdateInterval;
- (long long)trendingBackgroundMinimumUpdateInterval;
- (long long)trendingCutoffTime;
- (long long)trendingForegroundMinimumUpdateInterval;
- (void)writeTo:(id)arg1;

@end
