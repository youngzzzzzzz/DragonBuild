//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse
{
    BOOL _success;
    NSString *_displayName;
}

@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
