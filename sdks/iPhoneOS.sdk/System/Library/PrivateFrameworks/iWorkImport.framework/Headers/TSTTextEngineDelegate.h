//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPTextDelegate-Protocol.h>

@class TSULocale, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate>
{
    TSWPPadding *mPadding;
    int mVerticalAlignment;
    double mMaxWidthForChildren;
    TSULocale *mLocale;
    BOOL mShouldHyphenate;
}

@property(readonly, nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=mShouldHyphenate;
@property(readonly, nonatomic) TSULocale *locale; // @synthesize locale=mLocale;
@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=mMaxWidthForChildren;
- (BOOL)forceWesternLineBreaking;
- (int)verticalAlignment;
- (id)padding;
- (void)dealloc;
- (id)initWithPadding:(UIEdgeInsets)arg1 verticalAlignment:(int)arg2 locale:(id)arg3 shouldHyphenate:(BOOL)arg4;

@end
