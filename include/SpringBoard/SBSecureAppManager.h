//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, SBWakeDestination;

@interface SBSecureAppManager : NSObject
{
    NSMutableDictionary *_secureAppActions;
    NSMutableArray *_remoteAlertActions;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *remoteAlertActions; // @synthesize remoteAlertActions=_remoteAlertActions;
@property(retain, nonatomic) NSMutableDictionary *secureAppActions; // @synthesize secureAppActions=_secureAppActions;
// - (void).cxx_destruct;
- (void)_enumerateSecureAppActionsOfType:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_applicationForAction:(id)arg1;
- (id)_applicationSceneEntityForAction:(id)arg1;
- (void)_addRemoteAlertLockScreenContentAction:(id)arg1;
- (void)_addSecureAppAction:(id)arg1;
- (id)secureAppAction;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (BOOL)hasSecureAppOfType:(NSUInteger)arg1;
@property(readonly, nonatomic) BOOL hasSecureApp;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addLockScreenContentAction:(id)arg1;
@property(readonly, nonatomic) SBWakeDestination *wakeDestinaton;
@property(readonly, nonatomic) BOOL hasWakeDestinaton;
- (id)init;

@end

