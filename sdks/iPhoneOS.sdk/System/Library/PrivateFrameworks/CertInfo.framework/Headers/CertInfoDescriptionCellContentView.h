//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    CGSize _sizes;
}

// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (double)rowHeight;
- (void)setLabelsAndValues:(id)arg1;
- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (id)_labelFont;
- (void)dealloc;

@end
