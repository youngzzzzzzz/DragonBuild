//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IKListItemLockupElement, MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasTableViewCell : UITableViewCell
{
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_artworkSpacerHeightConstraint;
    NSLayoutConstraint *_textSpacerHeightConstraint;
    NSLayoutConstraint *_artworkWidthConstraint;
    NSLayoutConstraint *_artworkHeightConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    IKListItemLockupElement *_element;
}

@property(nonatomic) IKListItemLockupElement *element; // @synthesize element=_element;
@property(readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainerView; // @synthesize artworkContainerView=_artworkContainer;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configureForListItemLockupElement:(id)arg1 wide:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
