//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>
{
}

+ (id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appIdentifyingInfo;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSString *clientIdentifier;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSString *buildNumber;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
