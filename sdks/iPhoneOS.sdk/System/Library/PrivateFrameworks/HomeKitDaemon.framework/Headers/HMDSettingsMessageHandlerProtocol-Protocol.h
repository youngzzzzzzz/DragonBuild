//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSUUID;
@protocol HMDSettingsMessageController;

@protocol HMDSettingsMessageHandlerProtocol <NSObject>
- (void)unconfigureFromSettingGroup:(NSUUID *)arg1;
- (void)configureForSettingGroup:(NSUUID *)arg1;
- (void)unconfigureFromSetting:(NSUUID *)arg1;
- (void)configureForSetting:(NSUUID *)arg1;
- (void)setMessageController:(id <HMDSettingsMessageController>)arg1;
@end
