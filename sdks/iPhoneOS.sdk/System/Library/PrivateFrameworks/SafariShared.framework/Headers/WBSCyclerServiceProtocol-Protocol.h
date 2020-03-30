//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol WBSCyclerServiceProtocol
- (void)fetchStatusWithReply:(void (^)(WBSCyclerStatus *, NSError *))arg1;
- (void)sendRequestToTestSuite:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)stopCyclingWithReply:(void (^)(NSError *))arg1;
- (void)startCyclingFromBeginning:(BOOL)arg1 reply:(void (^)(NSError *))arg2;
- (void)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)setTestTargetEndpoint:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(NSError *))arg2;
@end
