//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class HKInspectableValueInRange, HKReferenceRangeView, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordReferenceRangeViewCell : WDMedicalRecordGroupableCell
{
    HKInspectableValueInRange *_valueInRange;
    NSString *_subtitle;
    HKReferenceRangeView *_referenceRangeView;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) HKReferenceRangeView *referenceRangeView; // @synthesize referenceRangeView=_referenceRangeView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) HKInspectableValueInRange *valueInRange; // @synthesize valueInRange=_valueInRange;
// - (void).cxx_destruct;
- (void)setupSubviews;

@end
