//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation
{
    id /* CDUnknownBlockType */ _deleteAllZoneSubscriptionsCompletionBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ deleteAllZoneSubscriptionsCompletionBlock; // @synthesize deleteAllZoneSubscriptionsCompletionBlock=_deleteAllZoneSubscriptionsCompletionBlock;
// - (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end
