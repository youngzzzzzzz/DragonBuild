//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMService : NSObject
{
}

+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;
+ (NSUInteger)statusForABPerson:(id)arg1;
+ (NSUInteger)statusForIMPerson:(id)arg1;
+ (BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2;
+ (id)myIdleTime;
+ (NSUInteger)myStatus;
+ (id)notificationCenter;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (id)imageURLForStatus:(NSUInteger)arg1;
+ (id)imageNameForStatus:(NSUInteger)arg1;
+ (void)forgetStatusImageAppearance;
+ (id)smsService;
+ (id)iMessageService;
+ (id)facetimeService;
+ (id)callService;
+ (id)jabberService;
+ (id)subnetService;
+ (id)aimService;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (NSUInteger)status;
- (id)name;
- (id)localizedShortName;
- (id)localizedName;
- (BOOL)initialSyncPerformed;
- (void)logout;
- (void)login;
- (BOOL)isEnabled;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)infoForDisplayedPeople;
- (id)infoForAllPeople;
- (id)infoForPerson:(id)arg1;

@end
