//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODaemon;

@interface GEOServer : NSObject
{
    GEODaemon *_daemon;
}

+ (BOOL)canHandleIncomingMessage:(id)arg1;
+ (Class)requestClassForMethod:(id)arg1;
+ (BOOL)usesModernRequestReply;
+ (BOOL)shouldStartImmediately;
+ (Class)peerClass;
+ (id)identifier;
@property(nonatomic) __weak GEODaemon *daemon; // @synthesize daemon=_daemon;
// - (void).cxx_destruct;
- (id)description;
- (void)peerDidDisconnect:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;

@end
