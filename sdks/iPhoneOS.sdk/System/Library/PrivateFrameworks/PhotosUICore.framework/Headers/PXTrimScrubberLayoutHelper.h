//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXTrimScrubberLayoutHelper : NSObject
{
    BOOL _needsUpdate;
    double _filmstripScale;
    double _pivotAnchor;
    CDStruct_1b6d18a9 _duration;
    CGRect _viewportFrame;
    UIEdgeInsets _horizontalTimelineInset;
    CGRect _filmstripFrame;
    CGRect _filmstripFrameInScrubberSpace;
    CGRect _visibleFrameInFilmstripSpace;
}

@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) CGRect visibleFrameInFilmstripSpace; // @synthesize visibleFrameInFilmstripSpace=_visibleFrameInFilmstripSpace;
@property(nonatomic) CGRect filmstripFrameInScrubberSpace; // @synthesize filmstripFrameInScrubberSpace=_filmstripFrameInScrubberSpace;
@property(nonatomic) CGRect filmstripFrame; // @synthesize filmstripFrame=_filmstripFrame;
@property(nonatomic) UIEdgeInsets horizontalTimelineInset; // @synthesize horizontalTimelineInset=_horizontalTimelineInset;
@property(nonatomic) double pivotAnchor; // @synthesize pivotAnchor=_pivotAnchor;
@property(nonatomic) double filmstripScale; // @synthesize filmstripScale=_filmstripScale;
@property(nonatomic) CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) CGRect durationInsetFilmstripFrame;
- (void)_updateIfNeeded;
- (CDStruct_1b6d18a9)timeForOffsetInScrubberSpace:(double)arg1;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInViewportSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1 fallbackAnchor:(double)arg2;
- (double)offsetInScrubberSpaceForTime:(CDStruct_1b6d18a9)arg1;
- (id)init;

@end
