//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface RTTSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableDictionary *_serverCachedSettings;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
// - (void).cxx_destruct;
@property(nonatomic) BOOL internalOverrideTTYAvailability;
- (void)resetCannedResponses;
@property(retain, nonatomic) NSArray *cannedResponses;
@property(nonatomic) BOOL continuityRTTIsSupported;
@property(nonatomic) BOOL hasReceivedRTTCall;
- (void)setPreferredRelayNumber:(id)arg1 forContext:(id)arg2;
- (id)preferredRelayNumberForContext:(id)arg1;
- (void)setTTYShouldBeRealtime:(BOOL)arg1 forContext:(id)arg2;
- (BOOL)ttyShouldBeRealtimeForContext:(id)arg1;
- (void)setIncomingCallsTTY:(BOOL)arg1 forContext:(id)arg2;
- (BOOL)incomingCallsTTYForContext:(id)arg1;
- (void)setTTYSoftwareEnabled:(BOOL)arg1 forContext:(id)arg2;
- (BOOL)TTYSoftwareEnabledForContext:(id)arg1;
- (void)setTTYHardwareEnabled:(BOOL)arg1 forContext:(id)arg2;
- (BOOL)TTYHardwareEnabledForContext:(id)arg1;
@property(retain, nonatomic) NSString *preferredRelayNumber;
@property(nonatomic) BOOL ttyShouldBeRealtime;
@property(nonatomic) double lastDBVacuum;
@property(nonatomic) double lastCallCountReset;
- (void)setSettingsVersion:(long long)arg1;
- (long long)settingsVersion;
@property(nonatomic) long long outgoingTTYCallCount;
@property(nonatomic) long long incomingTTYCallCount;
@property(nonatomic) BOOL incomingCallsTTY;
@property(nonatomic) BOOL TTYSoftwareEnabled;
@property(nonatomic) BOOL TTYHardwareEnabled;
- (void)clearServerSettingsCacheForKey:(id)arg1;
- (void)clearAllServerSettingsCache;
- (id)valueForPreferenceKey:(id)arg1 andContext:(id)arg2;
- (id)valueForPreferenceKey:(id)arg1;
- (id)objectValueForKey:(id)arg1 withClass:(Class)arg2 andDefaultValue:(id)arg3;
- (id)objectValueForKey:(id)arg1 andContext:(id)arg2 withClass:(Class)arg3 andDefaultValue:(id)arg4;
- (BOOL)boolValueForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (BOOL)boolValueForKey:(id)arg1 andContext:(id)arg2 withDefaultValue:(BOOL)arg3;
- (long long)integerValueForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 andContext:(id)arg3;
- (void)updateGizmoValueIfNeeded:(id)arg1 forPreferenceKey:(id)arg2;
- (id)uuidFromContext:(id)arg1;
- (void)registerUpdateBlock:(id /* CDUnknownBlockType */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (id)notificationForSelector:(SEL)arg1;
- (void)_registerForNotification:(id)arg1;
- (SEL)selectorForPreferenceKey:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_selectorMap;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)migrateSettings;
- (BOOL)shouldMigrateSettings;
- (void)dealloc;
- (id)currentLocale;
- (id)init;

@end
