//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, SBApplication, UIView, FBSMutableSceneSettings, FBSSceneTransitionContext;
@protocol SBLoginAppSceneHosterDelegate;

@protocol SBLoginAppSceneHoster <NSObject>
@property(nonatomic) BOOL deferHIDEvents;
@property(readonly, nonatomic) SBApplication *hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

