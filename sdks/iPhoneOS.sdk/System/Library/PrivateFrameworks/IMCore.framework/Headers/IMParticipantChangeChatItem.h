//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem
{
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property(readonly, nonatomic) IMHandle *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
// - (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
@property(readonly, nonatomic) long long changeType;
// - (id)copyWithZone:(_NSZone )arg1;

@end
