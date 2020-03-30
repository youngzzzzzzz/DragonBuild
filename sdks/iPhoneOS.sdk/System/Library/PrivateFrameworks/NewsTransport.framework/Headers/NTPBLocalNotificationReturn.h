//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBLocalNotificationReturn : PBCodable <NSCopying>
{
    long long _localNotificationSentTimestamp;
    int _localNoticationNumberReceived;
    int _localNotificationDirectOpenNumber;
    int _localNotificationType;
    BOOL _localNotificationDirectOpen;
    struct {
        unsigned int localNotificationSentTimestamp:1;
        unsigned int localNoticationNumberReceived:1;
        unsigned int localNotificationDirectOpenNumber:1;
        unsigned int localNotificationType:1;
        unsigned int localNotificationDirectOpen:1;
    } _has;
}

@property(nonatomic) int localNotificationDirectOpenNumber; // @synthesize localNotificationDirectOpenNumber=_localNotificationDirectOpenNumber;
@property(nonatomic) long long localNotificationSentTimestamp; // @synthesize localNotificationSentTimestamp=_localNotificationSentTimestamp;
@property(nonatomic) int localNoticationNumberReceived; // @synthesize localNoticationNumberReceived=_localNoticationNumberReceived;
@property(nonatomic) BOOL localNotificationDirectOpen; // @synthesize localNotificationDirectOpen=_localNotificationDirectOpen;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLocalNotificationDirectOpenNumber;
@property(nonatomic) BOOL hasLocalNotificationSentTimestamp;
@property(nonatomic) BOOL hasLocalNotificationType;
@property(nonatomic) int localNotificationType; // @synthesize localNotificationType=_localNotificationType;
@property(nonatomic) BOOL hasLocalNoticationNumberReceived;
@property(nonatomic) BOOL hasLocalNotificationDirectOpen;

@end
