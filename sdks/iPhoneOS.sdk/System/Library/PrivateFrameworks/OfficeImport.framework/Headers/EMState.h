//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class EDSheet, EDWorkbook, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMState : CMState
{
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
    NSMutableDictionary *_hyperlinks;
}

@property __weak EDSheet *currentSheet; // @synthesize currentSheet=_currentSheet;
// - (void).cxx_destruct;
- (void)setHyperlink:(id)arg1 forRow:(NSUInteger)arg2 column:(NSUInteger)arg3;
- (id)hyperlinkForRow:(NSUInteger)arg1 column:(NSUInteger)arg2;

@end
