//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, NSString, NSUUID, SUDownloadMetadata, SUScanOptions;

@protocol SUManagerServerInterface
- (void)registerCSInstallPredicatesOnDate:(NSDate *)arg1;
- (void)isAutomaticUpdateV2Enabled:(void (^)(BOOL, NSError *))arg1;
- (void)enableAutomaticUpdateV2:(BOOL)arg1;
- (void)createInstallationKeybag:(NSString *)arg1 forUnattendedInstall:(BOOL)arg2 withResult:(void (^)(BOOL, NSError *))arg3;
- (void)getMandatorySoftwareUpdateDictionary:(void (^)(NSDictionary *, NSError *))arg1;
- (void)setMandatorySoftwareUpdateDictionary:(NSDictionary *)arg1;
- (void)delayEndDate:(void (^)(NSDate *, NSError *))arg1;
- (void)isDelayingUpdates:(void (^)(BOOL, NSError *))arg1;
- (void)slaVersion:(void (^)(NSNumber *, NSError *))arg1;
- (void)setClientType:(int)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)installUpdateWithOptions:(NSArray *)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)installUpdate:(void (^)(BOOL, NSError *))arg1;
- (void)isUpdateReadyForInstallation:(void (^)(BOOL, NSError *))arg1;
- (void)isInstallationKeybagRequired:(void (^)(BOOL, NSError *))arg1;
- (void)presentAutoUpdateBanner:(void (^)(BOOL, NSError *))arg1;
- (void)isAutoUpdateScheduled:(void (^)(BOOL, NSError *))arg1;
- (void)isAutoUpdateEnabled:(void (^)(BOOL, NSError *))arg1;
- (void)currentPasscodePolicy:(void (^)(NSUInteger, NSError *))arg1;
- (void)consentToAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)cancelAutoInstallOperation:(NSUUID *)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)currentAutoInstallOperation:(BOOL)arg1 withResult:(void (^)(_SUAutoInstallOperationModel *, NSError *))arg2;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(void (^)(NSNumber *, NSError *))arg1;
- (void)deviceHasSufficientSpaceForDownload:(void (^)(BOOL, NSError *))arg1;
- (void)downloadAndInstallState:(void (^)(SUDownload *, SUInstallPolicy *, _SUAutoInstallOperationModel *, NSError *))arg1;
- (void)updateDownloadMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)resumeDownload:(void (^)(BOOL, NSError *))arg1;
- (void)pauseDownload:(void (^)(BOOL, NSError *))arg1;
- (void)purgeDownload:(void (^)(BOOL, NSError *))arg1;
- (void)cancelDownload:(void (^)(BOOL, NSError *))arg1;
- (void)startDownloadWithMetadata:(SUDownloadMetadata *)arg1 withResult:(void (^)(BOOL, NSError *))arg2;
- (void)startDownload:(void (^)(BOOL, NSError *))arg1;
- (void)isDownloading:(void (^)(BOOL, NSError *))arg1;
- (void)autoScanAndDownloadIfAvailable:(void (^)(SUDescriptor *, NSError *))arg1;
- (void)scanForUpdates:(SUScanOptions *)arg1 withResult:(void (^)(SUDescriptor *, NSError *))arg2;
- (void)isScanning:(void (^)(BOOL, NSError *))arg1;
@end
