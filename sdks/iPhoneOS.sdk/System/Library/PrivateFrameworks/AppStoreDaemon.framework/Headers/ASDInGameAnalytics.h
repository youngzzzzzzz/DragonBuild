//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDInGameAnalytics : NSObject
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)interface;
+ (void)sendHeartbeatForSessionWithID:(id)arg1;
+ (void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2;
+ (void)gamePlayDidBeginWithCompletion:(id /* CDUnknownBlockType */)arg1;
+ (id)_sharedInstance;
// - (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_connect;
- (id)init;

@end
