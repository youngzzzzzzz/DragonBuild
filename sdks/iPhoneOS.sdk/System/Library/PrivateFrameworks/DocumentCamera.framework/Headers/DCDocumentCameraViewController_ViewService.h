//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/DCDocumentCameraViewController.h>

#import <DocumentCamera/BKSAccelerometerDelegate-Protocol.h>
#import <DocumentCamera/DCDocumentCameraPublicViewController-Protocol.h>

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession;
@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController <BKSAccelerometerDelegate, DCDocumentCameraPublicViewController>
{
    DCDocumentCameraViewServiceSession *_viewServiceSession;
    BKSAccelerometer *_accelerometer;
}

@property(retain, nonatomic) BKSAccelerometer *accelerometer; // @synthesize accelerometer=_accelerometer;
@property(retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession; // @synthesize viewServiceSession=_viewServiceSession;
// - (void).cxx_destruct;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (void)didCancel;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(CGSize)arg1;
@property(readonly, nonatomic, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property(readonly, nonatomic, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (id)castedChildViewController;
- (void)viewDidLoad;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
