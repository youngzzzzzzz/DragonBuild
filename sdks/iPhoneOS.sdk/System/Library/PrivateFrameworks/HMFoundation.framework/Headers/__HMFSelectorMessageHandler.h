//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/__HMFMessageHandler.h>

__attribute__((visibility("hidden")))
@interface __HMFSelectorMessageHandler : __HMFMessageHandler
{
    SEL _selector;
}

@property(readonly) SEL selector; // @synthesize selector=_selector;
- (BOOL)invokeWithMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
