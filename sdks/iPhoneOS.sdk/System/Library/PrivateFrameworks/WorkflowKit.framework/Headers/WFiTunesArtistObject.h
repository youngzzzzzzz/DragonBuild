//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFiTunesObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSString;

@interface WFiTunesArtistObject : WFiTunesObject <MTLJSONSerializing>
{
    NSString *_type;
    NSString *_genre;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
// - (void).cxx_destruct;

@end
