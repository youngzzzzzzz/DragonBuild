//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGSuggestHistoryObserver-Protocol.h>

@class SGSqlEntityStore;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver>
{
    SGSqlEntityStore *_store;
}

// - (void).cxx_destruct;
- (void)hashesDidChange;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;
- (id)initWithStore:(id)arg1;

@end
