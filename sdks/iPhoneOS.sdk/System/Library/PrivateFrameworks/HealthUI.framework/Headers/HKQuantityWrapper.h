//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSDateInterval;

@interface HKQuantityWrapper : NSObject
{
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
}

@property(retain) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(retain) HKQuantity *quantity; // @synthesize quantity=_quantity;
// - (void).cxx_destruct;
- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;

@end
