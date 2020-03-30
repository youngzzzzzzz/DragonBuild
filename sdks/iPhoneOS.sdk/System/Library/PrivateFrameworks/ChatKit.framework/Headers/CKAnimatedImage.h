//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface CKAnimatedImage : NSObject
{
    UIImage *_image;
    NSArray *_durations;
}

+ (BOOL)_writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3 frameProcessor:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3;
+ (id)imageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;
+ (id)filenameExtension;
+ (BOOL)_writeImagesWithDurations:(id)arg1 toOutputStream:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3 frameProcessor:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3;
+ (id)ASTCDataForImagesWithDurations:(id)arg1 imageProvider:(id /* CDUnknownBlockType */)arg2;
+ (id)animatedImageWithASTCData:(id)arg1;
+ (id)animatedImageWithContentsOfASTCURL:(id)arg1;
+ (BOOL)writeImagesWithDurations:(id)arg1 toASTCURL:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3 frameProcessor:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)writeImagesWithDurations:(id)arg1 toCPBitmapURL:(id)arg2 imageProvider:(id /* CDUnknownBlockType */)arg3 frameProcessor:(id /* CDUnknownBlockType */)arg4;
@property(copy, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (BOOL)writeToCPBitmapURL:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) CGSize size;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (id)description;
- (BOOL)writeToASTCURL:(id)arg1;
- (id)frames;

@end
