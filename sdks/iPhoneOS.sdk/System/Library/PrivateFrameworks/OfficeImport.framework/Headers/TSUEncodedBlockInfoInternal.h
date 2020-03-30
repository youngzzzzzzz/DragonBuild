//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUEncodedBlockInfo-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo>
{
    NSUInteger _encodedLength;
}

@property(readonly, nonatomic) NSUInteger encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSUInteger decodedLength;
- (id)initWithEncodedLength:(NSUInteger)arg1;

@end
