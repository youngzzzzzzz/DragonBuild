//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/TSPCopying-Protocol.h>

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying>
{
    TSWPStorage *mStorage;
}

- (BOOL)requiresRichText;
- (id)string;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (id)initWithStorage:(id)arg1;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=mStorage;

@end
