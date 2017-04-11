/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODrivingWalkingSpokenInstruction : PBCodable <NSCopying> {
    GEOFormattedString * _continueStage;
    NSMutableArray * _executionStages;
    struct { 
        unsigned int shortChainedInstructionIndex : 1; 
    }  _has;
    GEOFormattedString * _initialStage;
    GEOFormattedString * _preparationStage;
    GEOFormattedString * _proceedStage;
    unsigned int  _shortChainedInstructionIndex;
}

@property (nonatomic, retain) GEOFormattedString *continueStage;
@property (nonatomic, retain) NSMutableArray *executionStages;
@property (nonatomic, readonly) BOOL hasContinueStage;
@property (nonatomic, readonly) BOOL hasInitialStage;
@property (nonatomic, readonly) BOOL hasPreparationStage;
@property (nonatomic, readonly) BOOL hasProceedStage;
@property (nonatomic) BOOL hasShortChainedInstructionIndex;
@property (nonatomic, retain) GEOFormattedString *initialStage;
@property (nonatomic, retain) GEOFormattedString *preparationStage;
@property (nonatomic, retain) GEOFormattedString *proceedStage;
@property (nonatomic) unsigned int shortChainedInstructionIndex;

+ (Class)executionStageType;

- (void)addExecutionStage:(id)arg1;
- (void)clearExecutionStages;
- (id)continueStage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executionStageAtIndex:(unsigned int)arg1;
- (id)executionStages;
- (unsigned int)executionStagesCount;
- (BOOL)hasContinueStage;
- (BOOL)hasInitialStage;
- (BOOL)hasPreparationStage;
- (BOOL)hasProceedStage;
- (BOOL)hasShortChainedInstructionIndex;
- (unsigned int)hash;
- (id)initialStage;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preparationStage;
- (id)proceedStage;
- (BOOL)readFrom:(id)arg1;
- (void)setContinueStage:(id)arg1;
- (void)setExecutionStages:(id)arg1;
- (void)setHasShortChainedInstructionIndex:(BOOL)arg1;
- (void)setInitialStage:(id)arg1;
- (void)setPreparationStage:(id)arg1;
- (void)setProceedStage:(id)arg1;
- (void)setShortChainedInstructionIndex:(unsigned int)arg1;
- (unsigned int)shortChainedInstructionIndex;
- (void)writeTo:(id)arg1;

@end
