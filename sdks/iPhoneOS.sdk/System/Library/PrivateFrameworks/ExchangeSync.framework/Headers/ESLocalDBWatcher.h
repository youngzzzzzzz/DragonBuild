//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NoteContext;

@interface ESLocalDBWatcher : NSObject
{
    int _lastSavedCalSequenceNumber;
    int _lastSavedABSequenceNumber;
    void _abWatcher;
    struct CalDatabase _calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
}

+ (id)sharedDBWatcher;
@property(nonatomic) int lastSavedCalSequenceNumber; // @synthesize lastSavedCalSequenceNumber=_lastSavedCalSequenceNumber;
@property(nonatomic) int lastSavedABSequenceNumber; // @synthesize lastSavedABSequenceNumber=_lastSavedABSequenceNumber;
// - (void).cxx_destruct;
- (void)didReceiveDarwinNotification:(id)arg1;
- (void)noteCalDBDirChanged;
- (void)noteABDBDirChanged;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_notesChangedExternally;
- (void)removeConcernedCalParty:(id)arg1;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_handleCalChangeNotification;
- (void)removeConcernedABParty:(id)arg1;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end
