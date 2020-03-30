//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKPolylinePath.h>

__attribute__((visibility("hidden")))
@interface VKTransitPolylinePath : VKPolylinePath
{
    NSUInteger _lineID;
    double _vertexEqualityTolerance;
}

@property(readonly, nonatomic) double vertexEqualityTolerance; // @synthesize vertexEqualityTolerance=_vertexEqualityTolerance;
- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e )arg3 pointCount:(NSUInteger)arg4 reversePoints:(BOOL)arg5 transform:(CDStruct_5ae1f918 )arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(NSUInteger)arg9;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e )arg3 pointCount:(NSUInteger)arg4 reversePoints:(BOOL)arg5 transform:(CDStruct_5ae1f918 )arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(NSUInteger)arg9 tileZ:(unsigned int)arg10 vertexPrecision:(unsigned char)arg11;

@end
