//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SADecoratedString : AceObject <SAAceSerializable>
{
}

+ (id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2;
+ (id)decoratedString;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *regions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
