//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItem, HFItemUpdateOutcome, NAFuture;

@interface _HFItemUpdateFutureWrapper : NSObject
{
    BOOL _isInternal;
    NAFuture *_future;
    HFItem *_item;
    HFItemUpdateOutcome *_outcome;
}

+ (id)futuresFromWrappers:(id)arg1;
+ (id)wrapperWithFuture:(id)arg1 item:(id)arg2 isInternal:(BOOL)arg3;
@property(retain, nonatomic) HFItemUpdateOutcome *outcome; // @synthesize outcome=_outcome;
@property(nonatomic) BOOL isInternal; // @synthesize isInternal=_isInternal;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NAFuture *future; // @synthesize future=_future;
// - (void).cxx_destruct;

@end
