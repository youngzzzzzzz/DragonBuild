//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSServiceDispatchingQueue-Protocol.h>

@protocol OS_dispatch_queue;

@interface _BSServiceDispatchingQueueImpl : NSObject <BSServiceDispatchingQueue>
{
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (void)performAsync:(id /* CDUnknownBlockType */)arg1 withHandoff:(id)arg2;
- (void)performAsync:(id /* CDUnknownBlockType */)arg1;
- (id)backingQueueIfExists;
- (void)assertOnQueue;
- (id)initWithQueue:(id)arg1;

@end
