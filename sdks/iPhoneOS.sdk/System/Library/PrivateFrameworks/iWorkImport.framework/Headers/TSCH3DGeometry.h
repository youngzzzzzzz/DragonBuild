//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3Dvec3DataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DGeometry : NSObject
{
    TSCH3Dvec3DataBuffer *mVertexBuffer;
    TSCH3Dvec3DataBuffer *mNormalBuffer;
    int mNumVertices;
    box_a3bd9649 mGeometryBounds;
}

+ (id)geometry;
- (id).cxx_construct;
@property(readonly, nonatomic) box_a3bd9649 geometryBounds;
- (id)elementsBoundsPositions;
- (id)selectionKnobPositions;
- (int)capCount;
- (unsigned int)capOffset;
- (int)geometryCount;
- (unsigned int)geometryOffset;
- (void)allocateArrays:(int)arg1;
- (void)transformArrays:(const tmat4x4_3074befe )arg1;
- (tvec3_17f03ce0 )normalArrayPointer;
- (tvec3_17f03ce0 )vertexArrayPointer;
- (vector_7200ab52 )normalArray;
- (vector_7200ab52 )vertexArray;
- (id)normalBuffer;
- (id)vertexBuffer;
- (void)reset;
- (int)numVertices;
- (void)dealloc;
- (id)init;

@end
