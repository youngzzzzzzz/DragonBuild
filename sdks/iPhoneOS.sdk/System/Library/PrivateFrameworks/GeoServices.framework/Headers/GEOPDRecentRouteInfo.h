//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRecentRouteInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_routeId;
    NSData *_sessionState;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_routeId:1;
        unsigned int read_sessionState:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeId:1;
        unsigned int wrote_sessionState:1;
        unsigned int wrote_zilchPoints:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSData *routeId;
@property(readonly, nonatomic) BOOL hasRouteId;
- (void)_readRouteId;
@property(retain, nonatomic) NSData *sessionState;
@property(readonly, nonatomic) BOOL hasSessionState;
- (void)_readSessionState;
@property(retain, nonatomic) NSData *zilchPoints;
@property(readonly, nonatomic) BOOL hasZilchPoints;
- (void)_readZilchPoints;
- (id)initWithData:(id)arg1;
- (id)init;

@end
