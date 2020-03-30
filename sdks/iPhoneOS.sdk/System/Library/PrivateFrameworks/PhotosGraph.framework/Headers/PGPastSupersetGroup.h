//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSMutableArray, NSMutableSet, PGGraphLocationNode;

@interface PGPastSupersetGroup : NSObject
{
    NSMutableArray *_moments;
    NSDateInterval *_dateInterval;
    NSMutableSet *_supersetCityNodes;
    NSMutableSet *_densestCloseLocationNodes;
    PGGraphLocationNode *_stateNode;
}

+ (id)pastSupersetGroupWithMoments:(id)arg1 dateInterval:(id)arg2 supersetCityNode:(id)arg3 densestCloseLocationNode:(id)arg4;
@property(retain) PGGraphLocationNode *stateNode; // @synthesize stateNode=_stateNode;
@property(retain) NSMutableSet *densestCloseLocationNodes; // @synthesize densestCloseLocationNodes=_densestCloseLocationNodes;
@property(retain) NSMutableSet *supersetCityNodes; // @synthesize supersetCityNodes=_supersetCityNodes;
@property(retain) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain) NSMutableArray *moments; // @synthesize moments=_moments;
// - (void).cxx_destruct;

@end
