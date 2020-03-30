//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCAppLibrary, BRCPrivateServerZone, BRCProblemReport, BRCServerZoneHealthState, NSMapTable, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface BRCPrivateClientZone : BRCClientZone
{
    NSMutableArray *_syncBarriers;
    BRCServerZoneHealthState *_zoneHealthState;
    BRCProblemReport *_problemReport;
    NSMutableArray *_faultsLiveBarriers;
    NSMutableSet *_appLibraries;
    BRCAppLibrary *_defaultAppLibrary;
    NSMapTable *_pcsChainFolderOperations;
}

@property(readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState; // @synthesize zoneHealthState=_zoneHealthState;
@property(readonly, nonatomic) NSSet *appLibraries; // @synthesize appLibraries=_appLibraries;
// - (void).cxx_destruct;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE )arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE )arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE )arg2 reason:(id)arg3 result:(BOOL )arg4;
- (BOOL)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(BOOL)arg2 error:(id )arg3;
@property(readonly, nonatomic) BOOL isDocumentScopePublic;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (BOOL)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(id /* CDUnknownBlockType */)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* CDUnknownBlockType */)arg2;
- (BOOL)recomputeAppSyncBlockState;
@property(readonly, nonatomic) BOOL zoneHealthNeedsSyncUp;
- (void)zoneHealthWasReset;
- (void)syncedDownZoneHealthState:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (void)clearProblemReport;
- (void)updateWithPlist:(id)arg1;
- (id)plist;
- (void)resume;
- (void)setServerZone:(id)arg1;
- (BOOL)dumpTablesToContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(id )arg3;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6;
- (void)removeAppLibrary:(id)arg1;
- (void)addAppLibrary:(id)arg1;
@property(readonly, nonatomic) NSSet *appLibraryIDs;
- (id)pcsChainOperationForItemID:(id)arg1;
- (void)registerPCSChainingOperation:(id)arg1;
@property(readonly, nonatomic) BOOL hasDefaultAppLibrary;
@property(readonly, nonatomic) BRCAppLibrary *defaultAppLibrary; // @synthesize defaultAppLibrary=_defaultAppLibrary;
- (struct BRCDirectoryItem )fetchZoneRootItemInDB:(id)arg1;
- (id)rootItemID;
@property(readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
- (id)asPrivateClientZone;
@property(readonly, nonatomic) BOOL isPrivateZone;
- (struct PQLResultSet )unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg1;
- (BOOL)parentIDHasLiveUnchainedChildren:(id)arg1;
- (unsigned int)pcsChainStateForItem:(id)arg1;

@end
