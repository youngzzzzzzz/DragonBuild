//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject
{
    NSMutableDictionary *_formattersForKey;
}

+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;
@property(retain, nonatomic) NSMutableDictionary *formattersForKey; // @synthesize formattersForKey=_formattersForKey;
// - (void).cxx_destruct;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(BOOL)arg2;
- (id)init;

@end
