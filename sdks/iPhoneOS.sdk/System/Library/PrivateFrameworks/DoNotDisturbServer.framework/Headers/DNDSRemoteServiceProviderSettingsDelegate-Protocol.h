//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDBehaviorSettings, DNDBypassSettings, DNDSRemoteServiceProvider, DNDScheduleSettings;

@protocol DNDSRemoteServiceProviderSettingsDelegate <NSObject>
- (BOOL)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setScheduleSettings:(DNDScheduleSettings *)arg2 withError:(id )arg3;
- (DNDScheduleSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 scheduleSettingsWithError:(id )arg2;
- (BOOL)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setPhoneCallBypassSettings:(DNDBypassSettings *)arg2 withError:(id )arg3;
- (DNDBypassSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 phoneCallBypassSettingsWithError:(id )arg2;
- (BOOL)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setBehaviorSettings:(DNDBehaviorSettings *)arg2 withError:(id )arg3;
- (DNDBehaviorSettings *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 behaviorSettingsWithError:(id )arg2;
@end
