//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane
{
    UITextView *_textView;
}

// - (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)handlesDoneButton;

@end
