//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDChartTypesCollection : EDCollection
{
    CHDChart *mChart;
}

// - (void).cxx_destruct;
- (void)resetSeriesOrder;
- (NSUInteger)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;

@end
