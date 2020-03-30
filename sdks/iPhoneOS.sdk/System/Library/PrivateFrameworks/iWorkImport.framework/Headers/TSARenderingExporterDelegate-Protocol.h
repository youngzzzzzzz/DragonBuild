//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL;

@protocol TSARenderingExporterDelegate
- (BOOL)supportsRenderingQuality;
- (BOOL)supportsPaging;
- (void)releaseCGContext:(CGContext )arg1;
- (CGContext )newCGContextForURL:(NSURL *)arg1;
- (double)viewScale;
- (void)teardown;
- (void)setup;

@optional
- (int)renderingQuality;
@end
