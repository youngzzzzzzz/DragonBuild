//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCHLegendModelCache;

__attribute__((visibility("hidden")))
@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent>
{
    NSUInteger mCellCount;
    NSUInteger mNumberOfRows;
    NSUInteger mNumberOfColumns;
    CGSize mFinalSize;
    TSCHLegendModelCache *mModelCache;
    CGPoint mCellOrigins;
}

@property(readonly) CGSize legendSize; // @synthesize legendSize=mFinalSize;
@property(readonly) NSUInteger numberOfColumns; // @synthesize numberOfColumns=mNumberOfColumns;
@property(readonly) NSUInteger numberOfRows; // @synthesize numberOfRows=mNumberOfRows;
// - (void).cxx_destruct;
- (CGPoint)originForCell:(id)arg1;
- (void)dealloc;
- (void)clearParent;
- (id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2;

@end
