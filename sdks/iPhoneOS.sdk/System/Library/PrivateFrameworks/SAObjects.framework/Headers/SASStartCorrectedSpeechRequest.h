//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest
{
}

+ (id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startCorrectedSpeechRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *utteranceSource;
@property(copy, nonatomic) NSString *sessionId;
@property(copy, nonatomic) NSString *previousUtterance;
@property(nonatomic) double originalScore;
@property(nonatomic) long long originalRank;
@property(nonatomic) BOOL onDeviceUtterancesPresent;
@property(copy, nonatomic) NSString *interactionId;
@property(nonatomic) double combinedScore;
@property(nonatomic) long long combinedRank;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
