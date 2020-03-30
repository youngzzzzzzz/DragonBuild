//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView;
@protocol CAMViewfinderTransitionable;

@interface CAMViewfinderOpenAndCloseTransition : NSObject
{
    BOOL _didEnterBackground;
    id <CAMViewfinderTransitionable> __transitionableViewfinder;
    CAMSnapshotView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(readonly, nonatomic) __weak id <CAMViewfinderTransitionable> _transitionableViewfinder; // @synthesize _transitionableViewfinder=__transitionableViewfinder;
@property(nonatomic) BOOL didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
// - (void).cxx_destruct;
- (void)closeWithoutBlurring;
- (void)closeAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)openAnimated:(BOOL)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2;
- (id)initWithTransitionableViewfinder:(id)arg1;

@end
