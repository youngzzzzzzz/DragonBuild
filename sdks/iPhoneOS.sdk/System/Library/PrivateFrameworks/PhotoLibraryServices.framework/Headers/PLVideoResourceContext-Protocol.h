//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol PLVideoResource;

@protocol PLVideoResourceContext <NSObject>
- (void)repairResource:(id <PLVideoResource>)arg1;
- (BOOL)validateResource:(id <PLVideoResource>)arg1;
- (id <PLVideoResource>)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (NSArray *)videoResourcesMatchingVersions:(NSArray *)arg1;
- (double)sizeThresholdForHighQuality;
@end
