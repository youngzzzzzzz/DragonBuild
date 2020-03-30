//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>

@class CLKDevice, NTKDigitalTimeLabel;

@interface NTKExtraLargeTimeView : UIView <NTKTimeView>
{
    CLKDevice *_device;
    BOOL _statusBarVisible;
    BOOL _frozen;
    NTKDigitalTimeLabel *_timeHourView;
    NTKDigitalTimeLabel *_timeMinuteView;
}

@property(retain, nonatomic) NTKDigitalTimeLabel *timeMinuteView; // @synthesize timeMinuteView=_timeMinuteView;
@property(retain, nonatomic) NTKDigitalTimeLabel *timeHourView; // @synthesize timeHourView=_timeHourView;
@property(nonatomic, getter=isFrozen) BOOL frozen; // @synthesize frozen=_frozen;
// - (void).cxx_destruct;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setStatusBarVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)performWristRaiseAnimation;
- (void)cancelWristRaiseAnimation;
- (void)prepareWristRaiseAnimation;
- (void)cleanupAfterZoom;
- (void)prepareToZoom;
- (void)setBottomColor:(id)arg1;
- (void)setTopColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2;

@end
