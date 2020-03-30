//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARDisplayDevice/ARDisplayService.h>

@class NSExtension, NSUUID;

@interface ARDisplayExtensionService : ARDisplayService
{
    NSExtension *_extension;
    NSUUID *_sessionUUID;
}

+ (id)nonDistortConfig;
+ (id)nonDistortConfiguration;
+ (id)defaultConfig;
+ (id)defaultLuckConfig;
+ (id)defaultFranCConfig;
+ (id)defaultConfigurationForHME:(id)arg1;
+ (id)defaultConfiguration;
+ (id)defaultNovGartaConfiguration;
+ (id)handheldConfig;
+ (id)handheldConfiguration;
+ (void)getConfig:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (void)getConfiguration:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (CGRect)screenDimensionsAdjustedForLPM;
+ (void)fetchServicesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)stopFetching:(id)arg1;
+ (id)fetchContinuously:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
// - (void).cxx_destruct;
- (void)beginUsingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)version;
- (id)productName;
- (id)productID;
- (id)vendor;
- (id)vendorID;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (id)init;

@end
