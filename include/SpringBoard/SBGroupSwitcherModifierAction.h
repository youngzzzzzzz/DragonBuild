//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSMutableArray;

@interface SBGroupSwitcherModifierAction : SBSwitcherModifierAction
{
    NSMutableArray *_actions;
}

+ (id)groupActionWithActions:(id)arg1;
// - (void).cxx_destruct;
- (NSUInteger)leafCount;
- (void)enumerateLeafActionsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateActionsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)appendAction:(id)arg1;
- (void)addActions:(id)arg1;
- (void)addAction:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)init;
- (long long)type;

@end

