//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSUUID;
@protocol HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventCollector : NSObject
{
    id <HDWorkoutEventCollectorDelegate> _delegate;
    NSUUID *_sessionId;
    HDProfile *_profile;
}

+ (BOOL)isAvailableInCurrentHardware;
@property(readonly) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly) NSUUID *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly) __weak id <HDWorkoutEventCollectorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)requestPendingEventsThroughDate:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (BOOL)supportsWorkoutActivityType:(NSUInteger)arg1;
- (void)stop;
- (void)startWithSessionId:(id)arg1;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;

@end
