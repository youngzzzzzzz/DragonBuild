//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCloudStorageInfo : NSObject
{
    BOOL _hasMaxQuotaTier;
    long long _totalBytes;
    long long _availableBytes;
    long long _usedBytes;
    long long _cameraRollBackupBytes;
}

+ (id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(BOOL)arg5;
@property(nonatomic) BOOL hasMaxQuotaTier; // @synthesize hasMaxQuotaTier=_hasMaxQuotaTier;
@property(nonatomic) long long cameraRollBackupBytes; // @synthesize cameraRollBackupBytes=_cameraRollBackupBytes;
@property(nonatomic) long long usedBytes; // @synthesize usedBytes=_usedBytes;
@property(nonatomic) long long availableBytes; // @synthesize availableBytes=_availableBytes;
@property(nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (id)description;
- (id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 hasMaxQuotaTier:(BOOL)arg5;

@end
