//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKAdjustableTapTargetButton, NSArray, UILabel, UIStackView, _HKDocumentImageView;
@protocol HKCDADocumentTableViewCellDelegate;

@interface HKCDADocumentTableViewCell : UITableViewCell
{
    _HKDocumentImageView *_documentImageView;
    UILabel *_titleLabel;
    NSArray *_cellLabels;
    UIStackView *_imageLabelStack;
    BOOL _showsCheckbox;
    id <HKCDADocumentTableViewCellDelegate> _delegate;
    HKAdjustableTapTargetButton *_checkboxButton;
}

@property(retain, nonatomic) HKAdjustableTapTargetButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property(nonatomic) __weak id <HKCDADocumentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showsCheckbox; // @synthesize showsCheckbox=_showsCheckbox;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_selectedCheckbox:(id)arg1;
- (void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3;
- (id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 flexibleHeight:(BOOL)arg3;
- (void)_updateForCurrentSizeCategory;
- (void)_setupCellStructure;
@property(nonatomic, getter=isChecked) BOOL checked;
- (void)setCellValuesForDocumentSample:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
