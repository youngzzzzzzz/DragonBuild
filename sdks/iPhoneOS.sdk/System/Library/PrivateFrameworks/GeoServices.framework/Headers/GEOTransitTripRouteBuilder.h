//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEOPBTransitLine, GEOPDTransitTripGeometry, NSArray, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface GEOTransitTripRouteBuilder : NSObject
{
    NSMutableArray *_steps;
    NSMutableArray *_composedGuidanceEvents;
    NSMutableArray *_legs;
    NSMutableData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEOPDTransitTripGeometry *_geometry;
    GEOPBTransitLine *_line;
    NSArray *_stops;
}

@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSMutableArray *pointSections; // @synthesize pointSections=_pointSections;
// - (void).cxx_destruct;
- (double)_buildPointSectionsForRoute:(id)arg1 pointRange:(_NSRange)arg2 stepIndex:(NSUInteger)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5;
- (void)buildPointSectionsForRoute:(id)arg1;
- (void)buildRoute:(id)arg1;
- (id)initWithGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3;

@end
