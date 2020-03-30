//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupGalleryShortcutEvent : WFEvent
{
    BOOL _completed;
    NSString *_key;
    NSString *_galleryCategoryIdentifier;
    NSString *_galleryIdentifier;
    NSString *_addToSiriBundleIdentifier;
}

+ (Class)codableEventClass;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *galleryCategoryIdentifier; // @synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;

@end
