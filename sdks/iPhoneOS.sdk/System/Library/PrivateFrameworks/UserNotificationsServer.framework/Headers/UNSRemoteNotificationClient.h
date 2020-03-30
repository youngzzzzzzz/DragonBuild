//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_tokenIdentifier;
    NSString *_environment;
    NSData *_lastKnownDeviceToken;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(copy, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
