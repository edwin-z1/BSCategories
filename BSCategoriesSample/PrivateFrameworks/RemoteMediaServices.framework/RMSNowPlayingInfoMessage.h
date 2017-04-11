/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNowPlayingInfoMessage : PBCodable <NSCopying> {
    NSString * _albumName;
    NSString * _artistName;
    BOOL  _canSkipNext;
    BOOL  _canSkipPrevious;
    BOOL  _canWishlist;
    unsigned long long  _databaseID;
    struct { 
        unsigned int databaseID : 1; 
        unsigned int itemID : 1; 
        unsigned int timeRemaining : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalDuration : 1; 
        unsigned int likedState : 1; 
        unsigned int mediaKind : 1; 
        unsigned int playbackState : 1; 
        unsigned int revisionNumber : 1; 
        unsigned int scrubbableState : 1; 
        unsigned int canSkipNext : 1; 
        unsigned int canSkipPrevious : 1; 
        unsigned int canWishlist : 1; 
        unsigned int hasChapterData : 1; 
        unsigned int likeable : 1; 
    }  _has;
    BOOL  _hasChapterData;
    unsigned long long  _itemID;
    BOOL  _likeable;
    int  _likedState;
    int  _mediaKind;
    int  _playbackState;
    unsigned int  _revisionNumber;
    int  _scrubbableState;
    double  _timeRemaining;
    double  _timestamp;
    double  _totalDuration;
    NSString * _trackName;
}

@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic) BOOL canSkipNext;
@property (nonatomic) BOOL canSkipPrevious;
@property (nonatomic) BOOL canWishlist;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic, readonly) BOOL hasAlbumName;
@property (nonatomic, readonly) BOOL hasArtistName;
@property (nonatomic) BOOL hasCanSkipNext;
@property (nonatomic) BOOL hasCanSkipPrevious;
@property (nonatomic) BOOL hasCanWishlist;
@property (nonatomic) BOOL hasChapterData;
@property (nonatomic) BOOL hasDatabaseID;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasItemID;
@property (nonatomic) BOOL hasLikeable;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) BOOL hasMediaKind;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasRevisionNumber;
@property (nonatomic) BOOL hasScrubbableState;
@property (nonatomic) BOOL hasTimeRemaining;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDuration;
@property (nonatomic, readonly) BOOL hasTrackName;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) BOOL likeable;
@property (nonatomic) int likedState;
@property (nonatomic) int mediaKind;
@property (nonatomic) int playbackState;
@property (nonatomic) unsigned int revisionNumber;
@property (nonatomic) int scrubbableState;
@property (nonatomic) double timeRemaining;
@property (nonatomic) double timestamp;
@property (nonatomic) double totalDuration;
@property (nonatomic, retain) NSString *trackName;

- (void).cxx_destruct;
- (id)albumName;
- (id)artistName;
- (BOOL)canSkipNext;
- (BOOL)canSkipPrevious;
- (BOOL)canWishlist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAlbumName;
- (BOOL)hasArtistName;
- (BOOL)hasCanSkipNext;
- (BOOL)hasCanSkipPrevious;
- (BOOL)hasCanWishlist;
- (BOOL)hasChapterData;
- (BOOL)hasDatabaseID;
- (BOOL)hasHasChapterData;
- (BOOL)hasItemID;
- (BOOL)hasLikeable;
- (BOOL)hasLikedState;
- (BOOL)hasMediaKind;
- (BOOL)hasPlaybackState;
- (BOOL)hasRevisionNumber;
- (BOOL)hasScrubbableState;
- (BOOL)hasTimeRemaining;
- (BOOL)hasTimestamp;
- (BOOL)hasTotalDuration;
- (BOOL)hasTrackName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)itemID;
- (BOOL)likeable;
- (int)likedState;
- (int)mediaKind;
- (void)mergeFrom:(id)arg1;
- (int)playbackState;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)revisionNumber;
- (int)scrubbableState;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setCanSkipNext:(BOOL)arg1;
- (void)setCanSkipPrevious:(BOOL)arg1;
- (void)setCanWishlist:(BOOL)arg1;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setHasCanSkipNext:(BOOL)arg1;
- (void)setHasCanSkipPrevious:(BOOL)arg1;
- (void)setHasCanWishlist:(BOOL)arg1;
- (void)setHasChapterData:(BOOL)arg1;
- (void)setHasDatabaseID:(BOOL)arg1;
- (void)setHasHasChapterData:(BOOL)arg1;
- (void)setHasItemID:(BOOL)arg1;
- (void)setHasLikeable:(BOOL)arg1;
- (void)setHasLikedState:(BOOL)arg1;
- (void)setHasMediaKind:(BOOL)arg1;
- (void)setHasPlaybackState:(BOOL)arg1;
- (void)setHasRevisionNumber:(BOOL)arg1;
- (void)setHasScrubbableState:(BOOL)arg1;
- (void)setHasTimeRemaining:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTotalDuration:(BOOL)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setLikeable:(BOOL)arg1;
- (void)setLikedState:(int)arg1;
- (void)setMediaKind:(int)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setRevisionNumber:(unsigned int)arg1;
- (void)setScrubbableState:(int)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setTrackName:(id)arg1;
- (double)timeRemaining;
- (double)timestamp;
- (double)totalDuration;
- (id)trackName;
- (void)writeTo:(id)arg1;

@end
