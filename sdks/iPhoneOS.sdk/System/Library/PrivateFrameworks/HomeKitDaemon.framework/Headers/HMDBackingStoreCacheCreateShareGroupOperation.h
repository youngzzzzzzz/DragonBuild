//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation
{
    HMDBackingStoreCacheShareGroup *_record;
    id /* CDUnknownBlockType */ _creationBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ creationBlock; // @synthesize creationBlock=_creationBlock;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *record; // @synthesize record=_record;
// - (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(id /* CDUnknownBlockType */)arg4;

@end
