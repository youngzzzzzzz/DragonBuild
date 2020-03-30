//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class WDCancellationToken;

__attribute__((visibility("hidden")))
@interface WDBrandLogoView : UIImageView
{
    BOOL _isFallback;
    double _size;
    WDCancellationToken *_cancellationToken;
}

@property(nonatomic) BOOL isFallback; // @synthesize isFallback=_isFallback;
@property(retain, nonatomic) WDCancellationToken *cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(nonatomic) double size; // @synthesize size=_size;
// - (void).cxx_destruct;
- (void)_updateStyle;
- (void)prepareForReuse;
- (void)fetchBrandable:(id)arg1 dataProvider:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (id)initWithFrame:(CGRect)arg1;

@end
