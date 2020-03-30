//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/C2SessionDelegate-Protocol.h>

@class C2Session;

@interface C2SessionTLSCache : NSObject <C2SessionDelegate>
{
    C2Session *_pinnedSession;
    C2Session *_unpinnedSession;
}

@property(retain, nonatomic) C2Session *unpinnedSession; // @synthesize unpinnedSession=_unpinnedSession;
@property(retain, nonatomic) C2Session *pinnedSession; // @synthesize pinnedSession=_pinnedSession;
// - (void).cxx_destruct;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)underlyingDelegateQueue;
- (id)sessionForOptions:(id)arg1;
- (id)_createSessionWithTLSPinning:(BOOL)arg1;
- (id)init;

@end
