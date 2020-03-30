//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout
{
    NFLSingleComponentLayout *_leftSixImageOnTopComponent;
    NFLSingleComponentLayout *_rightSixImageOnTopComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLSingleComponentLayout *_bottomImageOnSideComponent;
}

@property(retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent; // @synthesize bottomImageOnSideComponent=_bottomImageOnSideComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *topPairComponent; // @synthesize topPairComponent=_topPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent; // @synthesize rightSixImageOnTopComponent=_rightSixImageOnTopComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent; // @synthesize leftSixImageOnTopComponent=_leftSixImageOnTopComponent;
// - (void).cxx_destruct;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (NSUInteger)columnSpan;
- (NSUInteger)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (BOOL)isValid;

@end
