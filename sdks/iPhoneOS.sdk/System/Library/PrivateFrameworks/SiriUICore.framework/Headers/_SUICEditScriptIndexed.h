//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUICore/_SUICEditScript.h>

@class _SUICAtomIndexed;

@interface _SUICEditScriptIndexed : _SUICEditScript
{
    _SUICAtomIndexed *_currentScriptAtom;
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(long long)arg4;
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;
// - (void).cxx_destruct;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(NSUInteger)arg2 newText:(id)arg3 indexInArrayB:(NSUInteger)arg4;
- (void)initializeCurrentScriptAtom;
- (id)applyToArray:(id)arg1;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(BOOL)arg5;

@end
