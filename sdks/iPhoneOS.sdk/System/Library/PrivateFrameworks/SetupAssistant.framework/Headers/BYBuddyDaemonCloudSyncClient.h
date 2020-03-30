//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYClientDaemonCloudSyncProtocol-Protocol.h>

@class NSXPCConnection;
@protocol BYClientDaemonCloudSyncProtocol;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol>
{
    BOOL _syncDidStart;
    BOOL _syncDidComplete;
    id <BYClientDaemonCloudSyncProtocol> _delegate;
    NSXPCConnection *_connection;
}

+ (id)clientInterface;
@property(nonatomic) BOOL syncDidComplete; // @synthesize syncDidComplete=_syncDidComplete;
@property(nonatomic) BOOL syncDidStart; // @synthesize syncDidStart=_syncDidStart;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYClientDaemonCloudSyncProtocol> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)syncProgress:(double)arg1;
- (void)connectToDaemon;
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3;
- (void)fetchCurrentSyncState:(id /* CDUnknownBlockType */)arg1;
- (void)isSyncInProgress:(id /* CDUnknownBlockType */)arg1;
- (void)cancelSync;
- (void)startSync;
- (void)needsToSync:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
