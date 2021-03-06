//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSFileManager, PLPhotoLibrary, PLXPCTransaction;

@interface PLModelMigrator : NSObject
{
    double _startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    struct os_unfair_lock_s _photoLibraryLock;
    NSDictionary *_syncedPropertiesByUUID;
}

+ (_Bool)_resetAnalysisStateForVideosInStore:(id)arg1;
+ (_Bool)_deleteVideoThumbsMadeFromPreferredFrameInStore:(id)arg1;
+ (_Bool)_filterSceneClassificationsInStore:(id)arg1;
+ (_Bool)_ensureAllUserVerifiedPersonsHaveFaceCropsInStore:(id)arg1;
+ (_Bool)_removeUntrackedPersonMetadataInStore:(id)arg1;
+ (_Bool)_ungroupDuplicateGroupedAssetsInStore:(id)arg1;
+ (_Bool)_populateCloudVerifiedTypeOnPersonsInStore:(id)arg1;
+ (_Bool)_populateCloudNameSourceOnFacesInStore:(id)arg1;
+ (_Bool)_markMigrationVerifiedTypePersonsInStore:(id)arg1;
+ (_Bool)_storeContainsFaceCrops:(id)arg1 success:(_Bool *)arg2;
+ (_Bool)_removeAutoloopCacheIfExists;
+ (_Bool)_fixUTIforSlowMoInStore:(id)arg1;
+ (_Bool)_unquarantineClass:(Class)arg1 inManagedObject:(id)arg2;
+ (_Bool)_unquarantinedQuarantinedItems:(id)arg1;
+ (_Bool)retryQuarantinedAssetsAndFixResourceRelation:(id)arg1;
+ (_Bool)_deletePersonsMissingUUIDInStore:(id)arg1;
+ (_Bool)_repushPersonsWithMergeTargetInStore:(id)arg1;
+ (_Bool)_persistStoreUUIDToMobileCPLPlist:(id)arg1;
+ (_Bool)_fixNilCloudMasterGUID:(id)arg1;
+ (_Bool)_fixAssetMasterResources:(id)arg1;
+ (_Bool)_repushAssetsWithAnyUserConfirmedFaceInStore:(id)arg1;
+ (_Bool)_repushAssetsWithNewGroupingPropertiesInStore:(id)arg1;
+ (_Bool)_repushAssetsMatchingPredicate:(id)arg1 inStore:(id)arg2 withMaster:(_Bool)arg3;
+ (id)_predicateForInconsistentHeifAssets;
+ (void)_fixIncorrectHeifMetadataForAsset:(id)arg1;
+ (_Bool)_fixIncorrectHeifMetadataInStore:(id)arg1;
+ (_Bool)_fixRawWithZeroDimensions:(id)arg1;
+ (_Bool)_populateCloudResourceLocalStateInStor:(id)arg1;
+ (_Bool)_fixZeroTrashedDateForEntityName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (_Bool)_fixTrashedDate:(id)arg1;
+ (_Bool)_fixMasterCloudLocalStateEnum:(id)arg1;
+ (_Bool)_tryToPromoteUnknownAssetsInStore:(id)arg1;
+ (_Bool)_rebuildWideCaptureThumbsInStore:(id)arg1;
+ (id)_dateForWideGamutCapture;
+ (_Bool)_rollbackSQLTransactionAndCloseDB:(struct sqlite3 *)arg1;
+ (_Bool)_commitSQLTransactionAndCloseDB:(struct sqlite3 *)arg1;
+ (struct sqlite3 *)_openSQLTransactionWithDBPath:(const char *)arg1;
+ (_Bool)_removeUntrackedCloudResourceImageDerivativesInStore:(id)arg1;
+ (_Bool)_fixCustomKeyAssetForAlbum:(id)arg1;
+ (_Bool)_fixupCroppedUnadjustedAssets:(id)arg1;
+ (_Bool)_fixupLocalResourcesStates:(id)arg1;
+ (void)_resetLocalResourcesStateForAssetsWithContext:(id)arg1 usingPredicate:(id)arg2;
+ (_Bool)_trimInvalidAlbumAssetsMappingRecords;
+ (_Bool)_fixRejectedKeyFace:(id)arg1;
+ (_Bool)_fixMergedPeopleThatShouldBeVerified:(id)arg1;
+ (_Bool)_refreshTriggerValues:(id)arg1;
+ (_Bool)_setUserTypeOnKeyFace:(id)arg1;
+ (_Bool)_recoverSingleBurstPhotos:(id)arg1;
+ (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
+ (_Bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id *)arg2;
+ (void)_repairSingletonObjectsInNewDatabase:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithNoPersistentStores;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithError:(id)arg1;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithInvalidDatabase;
+ (void)_repairSingletonObjectsInNewDatabaseFailedWithMissingDatabase;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)repairSingletonObjectsInNewDatabaseOrFail;
+ (_Bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (_Bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (_Bool)_deleteCloudSharedAndSynced:(_Bool)arg1 assetReferencesInStore:(id)arg2;
+ (_Bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)_deletePersistentHistoryInStore:(id)arg1;
+ (_Bool)_nukeWallpaperRemnantsInStore:(id)arg1;
+ (_Bool)_populateReverseLocationDataContainsLocation:(id)arg1;
+ (_Bool)_identifyVariationsAndDepthAdjustmentsIncludingBakedInLongExposure:(_Bool)arg1 inStore:(id)arg2;
+ (id)_fetchRequestToIdentifyAdjustedDepthAndVariationsCandidates;
+ (id)_fetchRequestToIdentifyBakedInVariationsCandidatesIncludingLongExposure:(_Bool)arg1;
+ (_Bool)_identifyVariationsAndDepthAdjustmentsForAsset:(id)arg1;
+ (id)_dateForVariations;
+ (_Bool)_runMigrationStepWithName:(id)arg1 fetchRequest:(id)arg2 store:(id)arg3 migrationHandler:(CDUnknownBlockType)arg4;
+ (_Bool)_runMigrationStepWithPrettyFunction:(const char *)arg1 store:(id)arg2 migrationHandler:(CDUnknownBlockType)arg3;
+ (_Bool)_updatePlaybackStylesAndVariationsInStore:(id)arg1;
+ (_Bool)_updatePlaybackWithBatchUpdateRequest:(id)arg1 targetDescription:(id)arg2 inContext:(id)arg3;
+ (_Bool)_fixMovieAttributesInStore:(id)arg1;
+ (_Bool)_setPlaybackStyleForAnimatedGIFsInStore:(id)arg1;
+ (_Bool)_removeAutoloopWorkerStatesInStore:(id)arg1;
+ (_Bool)_fixInitialSyncMarker;
+ (_Bool)_removingDuplicatedCloudAssetGuid:(id)arg1;
+ (_Bool)_convertNameSourceFromBoolToIntForDeferredRebuildFaceInStore:(id)arg1;
+ (_Bool)_populateUserKeyFacePickSourceForPersonInStore:(id)arg1;
+ (_Bool)_populateGroupingStateOnAllGroupedAssetsInStore:(id)arg1;
+ (_Bool)_populateAdjustmentTimestampsOnAssets:(id)arg1;
+ (_Bool)_migrateCloudResourcesRelationshipsInStagedStore:(id)arg1;
+ (_Bool)_revalidateImportSessionDates:(id)arg1;
+ (_Bool)_setImportedByInPLCloudMaster:(id)arg1;
+ (_Bool)_persistImportSessionAlbumType:(id)arg1;
+ (_Bool)_createImportSessionAlbums:(id)arg1;
+ (_Bool)_removeInvalidImportSessionAlbums:(id)arg1;
+ (_Bool)_migrateDetectedFacesGroupInStagedStore:(id)arg1;
+ (_Bool)_migrateRejectedFacesGroupInStagedStore:(id)arg1;
+ (_Bool)_migrateOriginalColorSpaceInStagedStore:(id)arg1;
+ (_Bool)_performMigrationCacheDateCreatedOnResources:(_Bool)arg1 cacheItemIdentifierOnResources:(_Bool)arg2 store:(id)arg3;
+ (_Bool)_fixupEditorBundleIDsInStore:(id)arg1;
+ (_Bool)_forceDupeAnalysis;
+ (_Bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (_Bool)_fixupAssetPersistence:(id)arg1;
+ (_Bool)_persistVideoComplPropertiesInStore:(id)arg1;
+ (_Bool)_persistPlaceAnnotationData:(id)arg1;
+ (_Bool)_fixVideoDimensionsInStore:(id)arg1;
+ (_Bool)_fixVideoDimensionsForAsset:(id)arg1;
+ (_Bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (_Bool)_fixEmptyVideoResourcePathsInStore:(id)arg1;
+ (_Bool)_fixLocalPathForVideoCmplDerivativesInStore:(id)arg1;
+ (_Bool)_fixItemIdentifierForVideoCmplInStore:(id)arg1;
+ (_Bool)_markPhotoIrisVideoOrphansInStore:(id)arg1;
+ (_Bool)_fixZeroDurationPhotoIrisWithLocalResourcesInStore:(id)arg1 assumeAdjustedIrisIsVisible:(_Bool)arg2;
+ (_Bool)_repushMemoriesWithNewFeaturesInStore:(id)arg1;
+ (_Bool)_fixWhitelistOwnerForPendingInvitationsInStore:(id)arg1;
+ (_Bool)_persistPhotoIrisVisibilityStateToDiskInStore:(id)arg1;
+ (_Bool)_markOldPhotoIrisEditsEvaluatedInStore:(id)arg1;
+ (_Bool)_saveChangesToPhotoIrisInStore:(id)arg1 matchingPredicate:(id)arg2 countChanged:(unsigned long long *)arg3 error:(id *)arg4 changeBlock:(CDUnknownBlockType)arg5;
+ (_Bool)_updateSidecarForCloudSharedIrisInStore:(id)arg1;
+ (_Bool)_moveCloudSharedDerivativesInStore:(id)arg1;
+ (_Bool)_purgeCloudSharedResourcesInStore:(id)arg1;
+ (_Bool)_fixOriginalPropertiesForCloudSharedAssetsInStore:(id)arg1;
+ (_Bool)_fixCloudSharedGIFsInStore:(id)arg1;
+ (_Bool)_fixCloudSharedVideosInStore:(id)arg1;
+ (_Bool)_fixupSharedVideosWithoutThumbnailsInStore:(id)arg1;
+ (_Bool)_addCloudKindSubtypeAndBurstFlagsInStore:(id)arg1;
+ (_Bool)_tagScreenshotsForAssetsInStore:(id)arg1;
+ (_Bool)_addCameraCaptureDeviceForAssetsInStore:(id)arg1;
+ (_Bool)_fixIncorrectAddedDateForAssetsInStore:(id)arg1;
+ (_Bool)fixPossiblyIncorrectAddedDateForAsset:(id)arg1;
+ (_Bool)_isReasonableCreationDate:(id)arg1;
+ (_Bool)_generateAddedDateForAssetsInStore:(id)arg1;
+ (_Bool)_repersistDuplicatedAssets:(id)arg1;
+ (_Bool)_fixKeywordsInStagedStore:(id)arg1;
+ (_Bool)_fixFaceAlgorithmVersion:(id)arg1;
+ (_Bool)_fixAlbumAndFolderSortAscending:(id)arg1;
+ (void)_resetICPLPrompt;
+ (void)_setLastWelcomedDBVersion;
+ (void)_shouldRepromptUserIfNeeded;
+ (_Bool)_deleteOrphanedUnverifiedPeople:(id)arg1;
+ (_Bool)_processDeletesForUUIDs:(id)arg1;
+ (_Bool)_fixMemoriesWithAssetLists:(id)arg1;
+ (_Bool)_updateKeyAssetInMemory:(id)arg1;
+ (_Bool)_fixLocallyAvailableFlagForThumbnailsInStore:(id)arg1;
+ (_Bool)_fixLastPrefetchDateInStore:(id)arg1;
+ (_Bool)_removeCameraRollInStore:(id)arg1;
+ (_Bool)_applyDataProtectionToDCIMFromClassBToClassC;
+ (_Bool)_deleteAllMemoriesInStore:(id)arg1;
+ (_Bool)_fixCustomRenderedValues:(id)arg1;
+ (id)_dateForFirstCRVSPhoto;
+ (_Bool)_flattenUnknownCustomRenderedValues:(id)arg1;
+ (_Bool)_fixPersonAndFaceGroup:(id)arg1;
+ (_Bool)_fixFaceGroupUnverifiedPerson:(id)arg1;
+ (_Bool)_fixSingletonFaceFaceGroup:(id)arg1;
+ (_Bool)_populateNilOriginalFilename:(id)arg1;
+ (_Bool)_populateNilOriginalFilenameOnMaster:(id)arg1;
+ (_Bool)_removeOldPersonMetadataInStore:(id)arg1;
+ (_Bool)_persistPersonsInStore:(id)arg1;
+ (_Bool)_persistMemoriesInStore:(id)arg1;
+ (_Bool)_populateLatLongInAsset:(id)arg1;
+ (_Bool)_populateRepresentativeAssets:(id)arg1;
+ (_Bool)_fixCloudMasterCloudLocalState:(id)arg1;
+ (_Bool)_resetUploadAttempts:(id)arg1;
+ (_Bool)_resetFailedCloudMasters:(id)arg1;
+ (_Bool)_resetFailedAssets:(id)arg1;
+ (_Bool)_fixVideoJPGPath:(id)arg1;
+ (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
+ (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
+ (_Bool)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
+ (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
+ (_Bool)_fixNonDuplicatedAssets:(id)arg1 adjusted:(_Bool)arg2;
+ (_Bool)_fixDuplicatedAssets:(id)arg1;
+ (_Bool)_fixVisibleBurstAsset:(id)arg1;
+ (_Bool)_fixAdjustedAssets:(id)arg1;
+ (_Bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(_Bool)arg2;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (_Bool)_performChangesOnBatchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (_Bool)_fixCorruptedOrientationsInStore:(id)arg1;
+ (_Bool)_convertManagedAdjustmentsInStore:(id)arg1;
+ (_Bool)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (_Bool)_persistMetadataToFileSystemForAlbum:(id)arg1;
+ (_Bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (_Bool)_setupRootFolderInStore:(id)arg1;
+ (_Bool)_fixDuplicatedRootFolderAndOrphanedAlbumsInStore:(id)arg1;
+ (_Bool)_removeInvalidAdjustmentResourceDataInStore:(id)arg1;
+ (_Bool)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1;
+ (_Bool)_migrateAssetLocationData:(id)arg1;
+ (_Bool)_addLocationHashesToAssets:(id)arg1;
+ (_Bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(_Bool)arg2;
+ (_Bool)_rebuildAllMomentsInStore:(id)arg1;
+ (_Bool)_deleteAllMomentsViaSQLFromStore:(id)arg1;
+ (_Bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (_Bool)_resetDupesAnalysisInStore:(id)arg1;
+ (_Bool)_cleanupInvalidAlbumsAndFoldersInStore:(id)arg1;
+ (_Bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (_Bool)_fixupCloudResourcesInStore:(id)arg1;
+ (_Bool)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (_Bool)_populateFaceRegionsInStore:(id)arg1;
+ (void)_populateFaceRegionsForAsset:(id)arg1;
+ (_Bool)_populateVideoCpFieldsInStagedStore:(id)arg1;
+ (_Bool)_populateAlbumAndFolderOrderKeysInStagedStore:(id)arg1;
+ (_Bool)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
+ (_Bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (_Bool)_fixupImportedAssetsInStore:(id)arg1;
+ (_Bool)_fixupImportedEventsInStore:(id)arg1;
+ (_Bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(_Bool)arg1 inStore:(id)arg2;
+ (_Bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (_Bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_postProcessFromVersion6006Store:(id)arg1;
+ (void)applyDataProtectionToAllPhotosFilesOnce;
+ (_Bool)skipDataProtectionForFilePath:(id)arg1;
+ (_Bool)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (_Bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStagedStore:(id)arg1;
+ (_Bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (void)_printMigrationSummaryInStore:(id)arg1;
+ (void)_printCountsForEntityName:(id)arg1 groupByProperties:(id)arg2 inManagedObjectContext:(id)arg3;
+ (_Bool)isPostProcessingLightweightMigration;
+ (_Bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1 fixAddedDate:(_Bool)arg2;
+ (_Bool)_shouldTriggerLightweightMigrationFailureForInternalTesting;
+ (_Bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (void)_setIsPostProcessingLightWeightMigration:(_Bool)arg1;
+ (_Bool)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (id)_stagedManagedObjectModelURLWithStageVersion:(id)arg1;
+ (id)_managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)_nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (id)_stagedVersions;
+ (_Bool)didCreateSqliteErrorFileForLightweightMigration;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (id)_newSyncedPropertiesByAssetUUIDs:(_Bool)arg1;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(_Bool)arg1;
+ (_Bool)shouldImportAssetsFromDCIMSubDirectoryAtURL:(id)arg1 assetsKind:(int *)arg2;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (void)setLoadingFacesFromFileSystem:(_Bool)arg1;
+ (_Bool)isLoadingFacesFromFileSystem;
+ (void)setDidImportFileSystemAssets:(_Bool)arg1;
+ (id)_modelMigrator;
+ (id)_sharedModelMigratorForImport;
+ (id)eventNameFromDate:(id)arg1;
+ (void)_generateAlbumMetadataFromLastiTunesSyncedPlist;
+ (id)_iTunesPhotosLastSyncMetadata;
+ (id)extractPathToAssetUUIDRecoveryMappingFromDatabasePath:(id)arg1;
+ (id)generatePathToAssetUUIDRecoveryMapping;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)didImportFileSystemAssets;
+ (_Bool)didImportFileSystemAssetsWithMOC:(id)arg1;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (_Bool)restartingAfterDeviceToDeviceRestoreFromBackup;
+ (_Bool)restartingAfterNonCloudRestoreFromBackup;
+ (_Bool)restartingAfterOTAMigration;
+ (_Bool)restartingAfterRestoreFromBackup;
+ (void)_parseDMContextForRestartingAfterRestoreFromBackup:(_Bool *)arg1 restartingAfterRestoreFromCloud:(_Bool *)arg2;
+ (void)repairPotentialModelCorruption;
+ (void)cleanupModelForDataMigration;
+ (void)migratePersonContactInfo;
+ (void)loadFacesFileSystemDataIntoDatabase;
+ (void)loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
+ (_Bool)waitForDataMigratorToExit;
+ (void)_createDatabase;
+ (void)_performRebuildPreventionSafetyCheckForInternalBuilds;
+ (void)_fatal_cannotProceedRebuildPreventionSafetyCheckTriggered;
+ (_Bool)_createPhotoDataDirectoryIfNecessary;
+ (void)_writeToPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (void)_createPhotoDataDirectoryFailedWithNoPermission:(id)arg1;
+ (void)createDatabase;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id *)arg1;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (_Bool)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (_Bool)_removeEvents:(id)arg1;
+ (_Bool)_forceSoftResetSync;
+ (_Bool)_disableICloudPhoto;
+ (_Bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (_Bool)_fixIncorrectThumbnailTables;
+ (_Bool)_resetThumbnailsAndInitiateRebuildRequestIfNeeded;
+ (_Bool)_resetThumbnailIndexesAndInitiateRebuildRequestIfSuccessful;
+ (_Bool)postProcessThumbnailsOnlyIfVersionMismatchOrMissing:(_Bool *)arg1;
+ (void)validateCurrentModelVersion;
+ (void)_validateCurrentModelVersionAttempt:(long long)arg1;
+ (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1;
+ (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+ (int)currentModelVersion;
+ (id)validatedExternalResourceFromCloudResource:(id)arg1 asset:(id)arg2;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 asset:(id)arg2 fromAdjustedSet:(_Bool)arg3;
+ (id)generateExternalResourceFromCPLResource:(id)arg1 cloudMaster:(id)arg2;
+ (id)_validatedExternalResourceFromExternalResourceCloudAttributes:(id)arg1 cplType:(unsigned long long)arg2 assetType:(short)arg3 uti:(id)arg4 originalOrientation:(unsigned int)arg5 orientation:(unsigned int)arg6 originalColorSpace:(id)arg7 resourceWidth:(unsigned long long)arg8 resourceHeight:(unsigned long long)arg9 assetWidth:(unsigned long long)arg10 assetHeight:(unsigned long long)arg11 resourceFingerprint:(id)arg12 resourceSize:(unsigned long long)arg13 isAvailable:(_Bool)arg14 fromAdjustedSet:(_Bool)arg15 resourceURL:(id)arg16 cloudMaster:(id)arg17 isForMigration:(_Bool)arg18;
+ (void)_applyImageOrientationToExternalResource:(id)arg1 originalOrientation:(unsigned int)arg2 assetOrienation:(unsigned int)arg3;
+ (void)_applyColorSpaceAndCodecToNonDerivativeExternalResource:(id)arg1 fromCloudMaster:(id)arg2 originalColorSpace:(id)arg3;
+ (void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)arg1 managedObjectContext:(id)arg2;
+ (short)_resourceVersionFromCPLType:(unsigned long long)arg1 fromAdjustedSet:(_Bool)arg2;
+ (short)_resourceTypeFromCPLType:(unsigned long long)arg1 assetType:(short)arg2;
+ (void)_recipeAndDerivativeStateFromCPLResourceType:(unsigned long long)arg1 fromAdjustedSet:(_Bool)arg2 assetType:(short)arg3 recipeID:(unsigned int *)arg4;
+ (_Bool)_isPenultimateVersionFromCPLType:(unsigned long long)arg1;
+ (unsigned int)_recipeIDFromCPLResourceType:(unsigned long long)arg1 assetType:(short)arg2 fromAdjustedSet:(_Bool)arg3;
+ (_Bool)resetAnalysisStateForVideosWithMoc:(id)arg1;
+ (_Bool)markUserConfirmedFacesAndCorrespondingFaceAnalysisStatesDirtyInStore:(id)arg1;
+ (_Bool)markAllDirtyFaceAnalysisStatesWithFaceDetectionWorkerFlagsInStore:(id)arg1;
+ (_Bool)resetRejectedFacesOnAllPersonsInStore:(id)arg1;
+ (_Bool)clearVisionWorkerCache;
+ (_Bool)touchAnalysisStateSortTokensInStoreInStore:(id)arg1;
+ (_Bool)migrateToRequiredAnalysisState:(id)arg1;
+ (_Bool)fixupStatesWithUnreachableAssetUUIDsInStore:(id)arg1;
+ (_Bool)fixupUnknownAnalysisStatesInStore:(id)arg1;
+ (_Bool)deleteAnalysisStatesInStore:(id)arg1 forWorkerType:(short)arg2;
+ (_Bool)deleteAllAssetAnalysisStatesInStore:(id)arg1;
+ (_Bool)_markAllProcessedAnalysisStatesDirtyForWorkerType:(short)arg1 withStartingWorkerFlags:(int)arg2 inStore:(id)arg3;
+ (_Bool)_executeBatchUpdateWithEntityName:(id)arg1 predicate:(id)arg2 propertiesToUpdate:(id)arg3 managedObjectContext:(id)arg4;
+ (_Bool)resetFaceQualityInStore:(id)arg1;
+ (_Bool)faceQualityResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (_Bool)resetManualOrderForNonFavoritePeopleInStore:(id)arg1;
+ (_Bool)resetManualOrderForNonFavoritePeopleInManagedObjectContext:(id)arg1;
+ (_Bool)performFaceAnalysisResetMigrationStepWithResetLevel:(long long)arg1 store:(id)arg2;
+ (_Bool)resetGraphPersonsInStore:(id)arg1;
+ (_Bool)markAllSceneAnalysisStatesDirtyAndClearDistanceIdentitiesInStoreAndClearSceneprints:(id)arg1;
+ (long long)faceMigrationResetLevelRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (_Bool)graphPersonResetRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (_Bool)sceneStepRequiredForPreviousStoreVersion:(unsigned long long)arg1;
+ (_Bool)enumerateObjectsWithIncrementalSaveDefaultBatchSizeFetchRequest:(id)arg1 managedObjectContext:(id)arg2 count:(unsigned long long *)arg3 error:(id *)arg4 block:(CDUnknownBlockType)arg5;
+ (_Bool)executeBatchDeleteWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3;
+ (_Bool)createInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)arg1;
+ (_Bool)_installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(_Bool)arg2 includeCloudResources:(_Bool)arg3 error:(id *)arg4;
+ (_Bool)installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(_Bool)arg2 error:(id *)arg3;
+ (_Bool)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)arg1;
+ (_Bool)resetInternalResourcesInStore:(id)arg1;
+ (_Bool)reconsiderSavedAssetTypeInStore:(id)arg1;
+ (_Bool)resetImageRequestHintsShouldRecalculate:(_Bool)arg1 inStore:(id)arg2;
+ (void)applyImageIOMetadataToExternalResource:(id)arg1 fromFileURL:(id)arg2 context:(id)arg3;
+ (id)_validatedExternalResourcesFromAssetWithCloudMaster:(id)arg1;
+ (id)_validatedExternalResourcesFromSharedStreamAsset:(id)arg1;
+ (id)generateVideoResourcesFromVideoAsset:(id)arg1;
+ (id)validatedExternalResourceForLocalVideoAtPath:(id)arg1 context:(id)arg2;
+ (id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)arg1;
+ (id)generateAdjustedFullSizeRenderResourceForFilePath:(id)arg1 basedOnFullSizeWidth:(long long)arg2 andHeight:(long long)arg3 context:(id)arg4;
+ (id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)arg1;
+ (void)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)arg1 forAsset:(id)arg2;
+ (void)onDemand_installLargeSRGBThumbnailForAsset:(id)arg1;
+ (void)onDemand_installLargeSRGBThumbnailForAsset:(id)arg1 andVersion:(short)arg2;
+ (id)_generatePrimaryImageResourceForFilePath:(id)arg1 requireFileToBePresent:(_Bool)arg2 version:(short)arg3 basedOnFullSizeWidth:(long long)arg4 andHeight:(long long)arg5 isNativeColorSpace:(_Bool)arg6 context:(id)arg7;
+ (void)_applyImageIOMetadataToExternalResource:(id)arg1 fromFileURL:(id)arg2 assumedWidth:(long long)arg3 assumedHeight:(long long)arg4 context:(id)arg5;
+ (unsigned long long)_getURLDataLength:(id)arg1;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)_importFileSystemImportAssets:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)_prepareForImportDeleteCorruptAssetsWithImporter:(id)arg1 context:(id)arg2;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)_importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)_collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(_Bool)arg5;
- (void)_importAllDCIMAssets;
- (id)_orderedAssetsToImportCameraRollOnly:(_Bool)arg1;
- (_Bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(_Bool *)arg3 isCPLAssets:(_Bool *)arg4 cameraRollOnly:(_Bool)arg5;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)repairPotentialModelCorruption;
- (void)cleanupModelForDataMigration;
- (void)_removeLegacyMemoryRelatedSnapshotDirectory;
- (void)_removeLegacyModelInterestDatabase;
- (void)_migratePersonContactInfo;
- (void)_loadFacesFileSystemDataIntoDatabase;
- (void)_loadFileSystemDataIntoDatabaseIfNeededWithReason:(id)arg1;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)init;
- (id)initWithImplicitTransaction:(_Bool)arg1;

@end

