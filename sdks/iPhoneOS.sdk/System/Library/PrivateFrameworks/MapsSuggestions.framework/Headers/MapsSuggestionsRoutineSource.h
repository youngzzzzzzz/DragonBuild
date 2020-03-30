//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsPreloadableSource-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MapsSuggestionsRoutine, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsPreloadableSource>
{
    MapsSuggestionsRoutine *_routine;
    NSArray _previouslyAddedEntries;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _running;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (NSUInteger)disposition;
+ (BOOL)isEnabled;
// - (void).cxx_destruct;
- (void)_requestTouristInfoFromRoutineIfNeededForLocation:(id)arg1;
- (BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (BOOL)suggestionsEntriesAtLocation:(id)arg1 period:(NSDateInterval )arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (void)_startMonitoringVehicleEvents;
- (void)_updateSuggestionEntries;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
