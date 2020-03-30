//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconViewProviding-Protocol.h>

@class SBIconListView;

@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding>
{
    SBIconListView *_listView;
}

@property(readonly, nonatomic) __weak SBIconListView *listView; // @synthesize listView=_listView;
// - (void).cxx_destruct;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (BOOL)isIconViewRecycled:(id)arg1;
- (void)recycleIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)initWithListView:(id)arg1;

@end
