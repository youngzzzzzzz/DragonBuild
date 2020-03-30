//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import <IMCore/IMMessageChatItem-Protocol.h>

@class IMHandle, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
    IMHandle *_sender;
    BOOL _actionableEclipsed;
}

// - (void).cxx_destruct;
- (void)_setActionableEclipsed:(BOOL)arg1;
- (BOOL)_isActionableEclipsed;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) long long offerState;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
// - (id)copyWithZone:(_NSZone )arg1;

@end
