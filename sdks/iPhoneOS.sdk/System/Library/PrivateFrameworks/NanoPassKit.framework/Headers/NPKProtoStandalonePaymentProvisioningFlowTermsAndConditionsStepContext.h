//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable <NSCopying>
{
    NSString *_termsURL;
    BOOL _allowNonSecureHTTP;
    struct {
        unsigned int allowNonSecureHTTP:1;
    } _has;
}

@property(nonatomic) BOOL allowNonSecureHTTP; // @synthesize allowNonSecureHTTP=_allowNonSecureHTTP;
@property(retain, nonatomic) NSString *termsURL; // @synthesize termsURL=_termsURL;
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
@property(nonatomic) BOOL hasAllowNonSecureHTTP;
@property(readonly, nonatomic) BOOL hasTermsURL;

@end
