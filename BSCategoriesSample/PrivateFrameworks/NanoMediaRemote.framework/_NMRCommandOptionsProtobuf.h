/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying> {
    NSString * _contentItemID;
    NSString * _contextID;
    NSString * _destinationAppDisplayID;
    BOOL  _externalPlayerCommand;
    struct { 
        unsigned int playbackPosition : 1; 
        unsigned int radioStationID : 1; 
        unsigned int trackID : 1; 
        unsigned int playbackQueueInsertionPosition : 1; 
        unsigned int playbackRate : 1; 
        unsigned int rating : 1; 
        unsigned int repeatMode : 1; 
        unsigned int sendOptions : 1; 
        unsigned int shuffleMode : 1; 
        unsigned int skipInterval : 1; 
        unsigned int externalPlayerCommand : 1; 
        unsigned int negative : 1; 
        unsigned int requestDefermentToPlaybackQueuePosition : 1; 
        unsigned int shouldBeginRadioPlayback : 1; 
        unsigned int shouldOverrideManuallyCuratedQueue : 1; 
    }  _has;
    NSString * _mediaType;
    BOOL  _negative;
    double  _playbackPosition;
    int  _playbackQueueInsertionPosition;
    float  _playbackRate;
    NSString * _radioStationHash;
    long long  _radioStationID;
    float  _rating;
    int  _repeatMode;
    BOOL  _requestDefermentToPlaybackQueuePosition;
    unsigned int  _sendOptions;
    BOOL  _shouldBeginRadioPlayback;
    BOOL  _shouldOverrideManuallyCuratedQueue;
    int  _shuffleMode;
    float  _skipInterval;
    NSString * _sourceID;
    NSString * _stationURL;
    NSData * _systemAppPlaybackQueueData;
    unsigned long long  _trackID;
}

@property (nonatomic, retain) NSString *contentItemID;
@property (nonatomic, retain) NSString *contextID;
@property (nonatomic, retain) NSString *destinationAppDisplayID;
@property (nonatomic) BOOL externalPlayerCommand;
@property (nonatomic, readonly) BOOL hasContentItemID;
@property (nonatomic, readonly) BOOL hasContextID;
@property (nonatomic, readonly) BOOL hasDestinationAppDisplayID;
@property (nonatomic) BOOL hasExternalPlayerCommand;
@property (nonatomic, readonly) BOOL hasMediaType;
@property (nonatomic) BOOL hasNegative;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic, readonly) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationID;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL hasSendOptions;
@property (nonatomic) BOOL hasShouldBeginRadioPlayback;
@property (nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasSkipInterval;
@property (nonatomic, readonly) BOOL hasSourceID;
@property (nonatomic, readonly) BOOL hasStationURL;
@property (nonatomic, readonly) BOOL hasSystemAppPlaybackQueueData;
@property (nonatomic) BOOL hasTrackID;
@property (nonatomic, retain) NSString *mediaType;
@property (nonatomic) BOOL negative;
@property (nonatomic) double playbackPosition;
@property (nonatomic) int playbackQueueInsertionPosition;
@property (nonatomic) float playbackRate;
@property (nonatomic, retain) NSString *radioStationHash;
@property (nonatomic) long long radioStationID;
@property (nonatomic) float rating;
@property (nonatomic) int repeatMode;
@property (nonatomic) BOOL requestDefermentToPlaybackQueuePosition;
@property (nonatomic) unsigned int sendOptions;
@property (nonatomic) BOOL shouldBeginRadioPlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (nonatomic) int shuffleMode;
@property (nonatomic) float skipInterval;
@property (nonatomic, retain) NSString *sourceID;
@property (nonatomic, retain) NSString *stationURL;
@property (nonatomic, retain) NSData *systemAppPlaybackQueueData;
@property (nonatomic) unsigned long long trackID;

- (void).cxx_destruct;
- (int)StringAsRepeatMode:(id)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (id)contentItemID;
- (id)contextID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAppDisplayID;
- (id)dictionaryRepresentation;
- (BOOL)externalPlayerCommand;
- (BOOL)hasContentItemID;
- (BOOL)hasContextID;
- (BOOL)hasDestinationAppDisplayID;
- (BOOL)hasExternalPlayerCommand;
- (BOOL)hasMediaType;
- (BOOL)hasNegative;
- (BOOL)hasPlaybackPosition;
- (BOOL)hasPlaybackQueueInsertionPosition;
- (BOOL)hasPlaybackRate;
- (BOOL)hasRadioStationHash;
- (BOOL)hasRadioStationID;
- (BOOL)hasRating;
- (BOOL)hasRepeatMode;
- (BOOL)hasRequestDefermentToPlaybackQueuePosition;
- (BOOL)hasSendOptions;
- (BOOL)hasShouldBeginRadioPlayback;
- (BOOL)hasShouldOverrideManuallyCuratedQueue;
- (BOOL)hasShuffleMode;
- (BOOL)hasSkipInterval;
- (BOOL)hasSourceID;
- (BOOL)hasStationURL;
- (BOOL)hasSystemAppPlaybackQueueData;
- (BOOL)hasTrackID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaType;
- (void)mergeFrom:(id)arg1;
- (BOOL)negative;
- (double)playbackPosition;
- (int)playbackQueueInsertionPosition;
- (float)playbackRate;
- (id)radioStationHash;
- (long long)radioStationID;
- (float)rating;
- (BOOL)readFrom:(id)arg1;
- (int)repeatMode;
- (id)repeatModeAsString:(int)arg1;
- (BOOL)requestDefermentToPlaybackQueuePosition;
- (unsigned int)sendOptions;
- (void)setContentItemID:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setDestinationAppDisplayID:(id)arg1;
- (void)setExternalPlayerCommand:(BOOL)arg1;
- (void)setHasExternalPlayerCommand:(BOOL)arg1;
- (void)setHasNegative:(BOOL)arg1;
- (void)setHasPlaybackPosition:(BOOL)arg1;
- (void)setHasPlaybackQueueInsertionPosition:(BOOL)arg1;
- (void)setHasPlaybackRate:(BOOL)arg1;
- (void)setHasRadioStationID:(BOOL)arg1;
- (void)setHasRating:(BOOL)arg1;
- (void)setHasRepeatMode:(BOOL)arg1;
- (void)setHasRequestDefermentToPlaybackQueuePosition:(BOOL)arg1;
- (void)setHasSendOptions:(BOOL)arg1;
- (void)setHasShouldBeginRadioPlayback:(BOOL)arg1;
- (void)setHasShouldOverrideManuallyCuratedQueue:(BOOL)arg1;
- (void)setHasShuffleMode:(BOOL)arg1;
- (void)setHasSkipInterval:(BOOL)arg1;
- (void)setHasTrackID:(BOOL)arg1;
- (void)setMediaType:(id)arg1;
- (void)setNegative:(BOOL)arg1;
- (void)setPlaybackPosition:(double)arg1;
- (void)setPlaybackQueueInsertionPosition:(int)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationID:(long long)arg1;
- (void)setRating:(float)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)setRequestDefermentToPlaybackQueuePosition:(BOOL)arg1;
- (void)setSendOptions:(unsigned int)arg1;
- (void)setShouldBeginRadioPlayback:(BOOL)arg1;
- (void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1;
- (void)setShuffleMode:(int)arg1;
- (void)setSkipInterval:(float)arg1;
- (void)setSourceID:(id)arg1;
- (void)setStationURL:(id)arg1;
- (void)setSystemAppPlaybackQueueData:(id)arg1;
- (void)setTrackID:(unsigned long long)arg1;
- (BOOL)shouldBeginRadioPlayback;
- (BOOL)shouldOverrideManuallyCuratedQueue;
- (int)shuffleMode;
- (id)shuffleModeAsString:(int)arg1;
- (float)skipInterval;
- (id)sourceID;
- (id)stationURL;
- (id)systemAppPlaybackQueueData;
- (unsigned long long)trackID;
- (void)writeTo:(id)arg1;

@end
