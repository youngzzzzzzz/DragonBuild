//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>

#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class CLInUseAssertion, NSString, PKApplyController;

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable>
{
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    CLInUseAssertion *_inUseAssertion;
}

// - (void).cxx_destruct;
- (void)_terminateSetupFlow;
- (void)presentErrorAlert;
- (void)termsAccepted:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)termsShown;
- (void)pdfTermsDataWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)htmlTermsDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)initalTermsDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)displayTitle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;

@end
