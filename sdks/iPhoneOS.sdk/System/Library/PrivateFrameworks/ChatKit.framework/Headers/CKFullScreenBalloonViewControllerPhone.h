//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKFullScreenBalloonViewController.h>

#import <ChatKit/CKActionSheetMenuViewDelegate-Protocol.h>
#import <ChatKit/CKBalloonViewDelegate-Protocol.h>
#import <ChatKit/CKStickerDetailViewControllerDelegate-Protocol.h>
#import <ChatKit/PHLivePhotoViewDelegate-Protocol.h>

@class CKActionSheetMenuView, CKGroupAcknowledgmentVotingViewController, CKLivePhotoBalloonView, NSArray, UIView;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate>
{
    BOOL _shouldLayoutViews;
    BOOL _animationsDisabledForTesting;
    CKActionSheetMenuView *_menuView;
    CKGroupAcknowledgmentVotingViewController *_votingViewController;
    UIView *_balloonView;
    NSArray *_interfaceActions;
    CKLivePhotoBalloonView *_livePhotoBalloonView;
    double _balloonYOffsetFromTranscript;
}

@property(nonatomic) BOOL animationsDisabledForTesting; // @synthesize animationsDisabledForTesting=_animationsDisabledForTesting;
@property(nonatomic) double balloonYOffsetFromTranscript; // @synthesize balloonYOffsetFromTranscript=_balloonYOffsetFromTranscript;
@property(retain, nonatomic) CKLivePhotoBalloonView *livePhotoBalloonView; // @synthesize livePhotoBalloonView=_livePhotoBalloonView;
@property(copy, nonatomic) NSArray *interfaceActions; // @synthesize interfaceActions=_interfaceActions;
@property(retain, nonatomic) UIView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) CKGroupAcknowledgmentVotingViewController *votingViewController; // @synthesize votingViewController=_votingViewController;
@property(retain, nonatomic) CKActionSheetMenuView *menuView; // @synthesize menuView=_menuView;
// - (void).cxx_destruct;
- (void)disableAnimationsForTesting;
- (BOOL)_shouldShowVotingView;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2;
- (void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)liveBalloonTouched:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (void)performClosingAnimationsWithSendAnimation:(BOOL)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)dismissTapGestureRecognized:(id)arg1;
- (void)balloonEditMenuViewWasDismissed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)presentStickerDetailControllerWithStickers:(id)arg1;
- (void)performInitialAnimations;
- (void)loadLivePhotoBalloonViewIfNeeded;
- (id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(BOOL)arg5 showActionMenu:(BOOL)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8;
- (void)dealloc;

@end
