//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface _DKSyncSerializer : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}

+ (id)underlyingQueue;
+ (id)operationQueue;
+ (void)addDependentOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (void)addDependentOperation:(id)arg1;
+ (void)addOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
+ (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
+ (void)addOperation:(id)arg1;
+ (void)performAfter:(double)arg1 block:(id /* CDUnknownBlockType */)arg2;
+ (void)performSyncBlock:(id /* CDUnknownBlockType */)arg1;
+ (void)performAsyncBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedInstance;
@property __weak NSOperation *previousOperation; // @synthesize previousOperation=_previousOperation;
@property(readonly) NSObject<OS_dispatch_queue> *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)addDependentOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addOperationWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addDependentOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)performAfter:(double)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)performSyncBlock:(id /* CDUnknownBlockType */)arg1;
- (void)performAsyncBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end
