//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalCoding.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@interface HKMedicalCoding (HDCodingSupport) <HDCoding>
+ (id)codeableRepresentationForMedicalCodings:(id)arg1;
+ (id)multipleMedicalCodingsWithCodables:(id)arg1;
+ (id)medicalCodingsWithCodeable:(id)arg1;
+ (id)createWithCodable:(id)arg1;
- (id)codableRepresentationForSync;
@end
