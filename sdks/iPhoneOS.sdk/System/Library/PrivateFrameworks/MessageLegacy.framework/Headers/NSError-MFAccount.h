//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (MFAccount)
- (BOOL)mf_isInaccessibleAccountCredentialError;
- (BOOL)mf_isMissingAccountCredentialError;
- (BOOL)mf_shouldFailDownload;
- (id)mf_shortDescription;
- (id)mf_moreInfo;
- (BOOL)mf_shouldBeReportedToUser;
- (BOOL)mf_isSMIMEError;
- (BOOL)mf_isUserCancelledError;
@end
