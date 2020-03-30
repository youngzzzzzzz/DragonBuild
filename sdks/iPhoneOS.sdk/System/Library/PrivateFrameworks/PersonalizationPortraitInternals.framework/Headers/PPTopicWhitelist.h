//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPTopicWhitelist : NSObject
{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)_keyFor:(id)arg1 of:(id)arg2;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)filterTopicDictionary:(id)arg1 withWhitelistOf:(id)arg2;
- (id)indexesOfTopicsInScoredTopicArray:(id)arg1 inWhitelistOf:(id)arg2;
- (id)indexesOfTopicsInRecordArray:(id)arg1 inWhitelistOf:(id)arg2;
- (BOOL)shouldBypassWhitelist:(id)arg1;
- (void)_loadAssetData;
- (void)dealloc;
- (id)_init;

@end
