//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter
{
    NSArray *_filters;
    NSUInteger _type;
}

@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
// - (void).cxx_destruct;
- (id)stringRepresentationWithRecordType:(id)arg1;

@end
