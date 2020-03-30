//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordID, CKRecordZoneID, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject
{
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
    BOOL _isTest;
    BOOL _isPrivateContainerSecure;
    BOOL _updateInProgress;
    BOOL _sandboxEnvironment;
    BOOL _supportsDeviceToDeviceEncryption;
    NSUInteger _dpidReconcileState;
    NSDate *_dpidReconcileStartDate;
    CKRecordZoneID *_zoneID;
    CKRecordID *_recordID;
    CKContainer *_privateContainer;
    long long _qualityOfService;
    NSString *_DPID;
    NSMutableArray *_operationsInProgress;
}

+ (id)DPIDOperationTypeToString:(NSUInteger)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL supportsDeviceToDeviceEncryption; // @synthesize supportsDeviceToDeviceEncryption=_supportsDeviceToDeviceEncryption;
@property(nonatomic) BOOL sandboxEnvironment; // @synthesize sandboxEnvironment=_sandboxEnvironment;
@property(retain, nonatomic) NSMutableArray *operationsInProgress; // @synthesize operationsInProgress=_operationsInProgress;
@property(nonatomic) BOOL updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(retain, nonatomic) NSString *DPID; // @synthesize DPID=_DPID;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) BOOL isPrivateContainerSecure; // @synthesize isPrivateContainerSecure=_isPrivateContainerSecure;
@property(retain, nonatomic) CKContainer *privateContainer; // @synthesize privateContainer=_privateContainer;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSDate *dpidReconcileStartDate; // @synthesize dpidReconcileStartDate=_dpidReconcileStartDate;
@property NSUInteger dpidReconcileState; // @synthesize dpidReconcileState=_dpidReconcileState;
@property(readonly, nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
// - (void).cxx_destruct;
- (void)syncDPIDWithiCloud:(id /* CDUnknownBlockType */)arg1;
- (void)saveDPIDtoiCloud:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)handleCloudKitError:(id)arg1;
- (void)removeDPIDfromiCloud:(id /* CDUnknownBlockType */)arg1;
- (void)fetchDPIDfromiCloud:(id /* CDUnknownBlockType */)arg1;
- (void)createErrorForPrivateDB:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)teardowniCloudSubscription:(id /* CDUnknownBlockType */)arg1;
- (void)setupiCloudSubscription:(id /* CDUnknownBlockType */)arg1;
- (void)resetEncryptedZone:(id /* CDUnknownBlockType */)arg1;
- (void)retryIfNeeded:(id /* CDUnknownBlockType */)arg1;
- (BOOL)canGenerateDPID;
- (BOOL)shouldSyncDPID;
- (id)generateDPID;
- (void)setupLocalDPID;
- (id)insecureContainer;
- (id)secureContainer;
- (id)containerWithIDString:(id)arg1;
- (void)finishOperation:(NSUInteger)arg1;
- (void)startOperation:(NSUInteger)arg1;
- (id)operationQueueLog;
- (void)setiCloudAccountSubscribed:(BOOL)arg1;
- (BOOL)iCloudAccountSubscribed;
- (id)subscriptionIdentifier;
- (void)writeDPIDtoKeychain;
- (BOOL)limitAdTrackingEnabled;
- (BOOL)isRestrictedByApple;
- (NSUInteger)primaryiCloudAccountSecurityLevel;
- (id)primaryiCloudAccountAltDSID;
- (BOOL)isLoggedIntoiTunes;
- (void)resetDPID:(id /* CDUnknownBlockType */)arg1;
- (void)handlePushNotification:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)continueReconcileWithAccountStatus:(long long)arg1 andError:(id)arg2 with:(id /* CDUnknownBlockType */)arg3;
- (void)backupFlowForCloudKitWorkAtTime:(id)arg1 with:(id /* CDUnknownBlockType */)arg2;
- (void)resolveAccountVsStoredManateeState:(long long)arg1 andError:(id)arg2 with:(id /* CDUnknownBlockType */)arg3;
- (void)reconcileDPID:(id /* CDUnknownBlockType */)arg1;
- (BOOL)canContinueProcessing:(id)arg1;
- (void)updateActiveRecordICloudDSID;
- (id)init;

@end
