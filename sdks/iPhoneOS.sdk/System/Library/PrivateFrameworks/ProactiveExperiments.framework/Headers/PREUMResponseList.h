//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, PREUMMessageMetadata, PREUMTrialExperiment;

@interface PREUMResponseList : PBCodable <NSCopying>
{
    NSUInteger _responseTimePerf;
    PREUMTrialExperiment *_experiment;
    int _generationStatus;
    NSMutableArray *_items;
    PREUMMessageMetadata *_msgMetadata;
    BOOL _isCached;
    struct {
        unsigned int responseTimePerf:1;
        unsigned int generationStatus:1;
        unsigned int isCached:1;
    } _has;
}

+ (Class)itemsType;
@property(nonatomic) NSUInteger responseTimePerf; // @synthesize responseTimePerf=_responseTimePerf;
@property(nonatomic) BOOL isCached; // @synthesize isCached=_isCached;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) PREUMMessageMetadata *msgMetadata; // @synthesize msgMetadata=_msgMetadata;
@property(retain, nonatomic) PREUMTrialExperiment *experiment; // @synthesize experiment=_experiment;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsGenerationStatus:(id)arg1;
- (id)generationStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasGenerationStatus;
@property(nonatomic) int generationStatus; // @synthesize generationStatus=_generationStatus;
@property(nonatomic) BOOL hasResponseTimePerf;
@property(nonatomic) BOOL hasIsCached;
- (id)itemsAtIndex:(NSUInteger)arg1;
- (NSUInteger)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
@property(readonly, nonatomic) BOOL hasMsgMetadata;
@property(readonly, nonatomic) BOOL hasExperiment;

@end
