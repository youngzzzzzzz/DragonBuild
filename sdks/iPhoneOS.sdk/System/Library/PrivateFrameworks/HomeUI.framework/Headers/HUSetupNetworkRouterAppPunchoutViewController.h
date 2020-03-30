//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <HomeUI/HFSetupPairingPopupAppPunchout-Protocol.h>

@class HFAppPunchoutRequest, HMSetupAccessoryDescription, HULinkedApplicationItem, OBTrayButton;
@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterAppPunchoutViewController : OBWelcomeController <HFSetupPairingPopupAppPunchout>
{
    id <HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
    HFAppPunchoutRequest *_punchoutRequest;
    HULinkedApplicationItem *_linkedApplicationItem;
    OBTrayButton *_punchoutButton;
}

@property(readonly, nonatomic) OBTrayButton *punchoutButton; // @synthesize punchoutButton=_punchoutButton;
@property(retain, nonatomic) HULinkedApplicationItem *linkedApplicationItem; // @synthesize linkedApplicationItem=_linkedApplicationItem;
@property(retain, nonatomic) HFAppPunchoutRequest *punchoutRequest; // @synthesize punchoutRequest=_punchoutRequest;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property(readonly, nonatomic) __weak id <HFSetupPairingPopupDelegate> popupDelegate; // @synthesize popupDelegate=_popupDelegate;
// - (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (void)_punchoutPressed:(id)arg1;
- (id)_lookUpSoftwareAndUpdateUI;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSUInteger popupType;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;

@end
