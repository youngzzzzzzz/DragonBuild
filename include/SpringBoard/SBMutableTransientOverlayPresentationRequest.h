//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayPresentationRequest.h>

@class SBTransientOverlayViewController;

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest
{
}

@property(retain, nonatomic) SBTransientOverlayViewController *viewController; // @dynamic viewController;
@property(nonatomic) BOOL shouldDismissSiri; // @dynamic shouldDismissSiri;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @dynamic completionHandler;
@property(nonatomic, getter=isAnimated) BOOL animated; // @dynamic animated;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;

@end

