//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject
{
    NSMutableArray *mChildren;
}

// - (void).cxx_destruct;
- (void)writeToWriter:(struct OcWriter )arg1;
- (void)addChild:(id)arg1;
- (id)childAt:(NSUInteger)arg1;
- (NSUInteger)childCount;
- (struct EshRoot )eshRoot;
- (id)initFromReader:(struct OcReader )arg1;
- (id)init;
- (id)initWithEshObject:(struct EshObject )arg1;
- (id)pbReferenceWithID:(unsigned int)arg1;
- (id)initWithPbState:(id)arg1;

@end
