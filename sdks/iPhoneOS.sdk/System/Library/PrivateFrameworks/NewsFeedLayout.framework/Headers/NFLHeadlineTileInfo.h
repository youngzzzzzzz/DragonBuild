//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NSArray, NSString;
@protocol FCHeadlineProviding;

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo>
{
    BOOL _aggregated;
    NSString *_groupIdentifier;
    id <FCHeadlineProviding> _headline;
    NSString *_bookmarkableIdentifier;
    NSString *_namespacedIdentifier;
}

+ (id)identifierWithBookmarkableIdentifier:(id)arg1 groupIdentifier:(id)arg2;
@property(copy, nonatomic) NSString *namespacedIdentifier; // @synthesize namespacedIdentifier=_namespacedIdentifier;
@property(readonly, copy, nonatomic) NSString *bookmarkableIdentifier; // @synthesize bookmarkableIdentifier=_bookmarkableIdentifier;
@property(copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic, getter=isAggregated) BOOL aggregated; // @synthesize aggregated=_aggregated;
// - (void).cxx_destruct;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) NSUInteger tileInfoType;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSUInteger bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property(readonly, nonatomic) BOOL pageable;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2 aggregated:(BOOL)arg3;
- (id)init;

@end
