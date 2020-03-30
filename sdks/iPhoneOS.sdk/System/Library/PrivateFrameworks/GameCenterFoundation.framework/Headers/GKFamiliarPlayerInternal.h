//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
- (void)setCompositeName:(id)arg1;
- (id)compositeName;
- (void)setLastName:(id)arg1;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (id)firstName;
- (void)dealloc;

@end
