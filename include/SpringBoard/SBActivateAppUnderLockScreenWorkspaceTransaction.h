//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    id <SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

// - (void).cxx_destruct;
- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_setupAndActivate;
- (void)_activateLockScreen;
- (void)_begin;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenEnvironment:(id)arg2;

@end

