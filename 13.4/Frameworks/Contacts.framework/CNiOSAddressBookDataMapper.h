//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNContactsEnvironment, CNManagedAccountsCache, CNManagedConfiguration, CNiOSAddressBook, NSString;
@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>
{
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id <CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
    CNManagedAccountsCache *_managedAccountsCache;
}

+ (void *)_copyLocalSourceIfEnabledInAddressBook:(void *)arg1;
+ (void *)_copyEligiblePrimarySourceForAccountWithIdentifier:(id)arg1 addressBook:(void *)arg2 error:(id *)arg3;
+ (id)encodedPeopleFetcherForForFetchRequest:(id)arg1 addressBook:(void *)arg2 managedConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 environment:(id)arg5;
+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) CNManagedAccountsCache *managedAccountsCache; // @synthesize managedAccountsCache=_managedAccountsCache;
@property(readonly, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (_Bool)hasMultipleGroupsOrAccounts;
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;
- (id)currentHistoryToken;
- (id)individualContactCountWithError:(id *)arg1;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;
- (struct __CFArray *)copyChangeTableRowIDsFromChangeIDs:(id)arg1;
- (void *)copySourceForContainerIdentifier:(id)arg1 fromAddressBook:(void *)arg2;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 error:(id *)arg3;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (void)setLegacyTetheredSyncAnchor:(id)arg1 forKey:(struct __CFString *)arg2;
- (id)legacyTetheredSyncAnchorForKey:(struct __CFString *)arg1;
@property(retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property(retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)_containersMatchingPredicate:(id)arg1 remote:(_Bool)arg2 error:(id *)arg3;
- (id)defaultContainerIdentifierForAddressBook:(void *)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (_Bool)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processGroupsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (_Bool)_canReadUnderManagementRestrictionsFromSource:(void *)arg1 inAddressBook:(void *)arg2;
- (_Bool)_canWriteUnderManagementRestrictionsToSource:(void *)arg1 inAddressBook:(void *)arg2;
- (_Bool)_hasManagementRestrictionsEnabled;
- (_Bool)_hasAccessToReadFromAccountCorrespondingToSource:(void *)arg1 fromAddressBook:(void *)arg2;
- (_Bool)_hasAccessToWriteToAccountCorrespondingToSource:(void *)arg1 fromAddressBook:(void *)arg2;
- (_Bool)_hasWriteAccessToAccountContainingPerson:(void *)arg1 fromSaveContext:(id)arg2;
- (void *)_alternativeSourceWithAccessibleAccountFromAddressBook:(void *)arg1;
- (void *)_defaultSourceInAddressBook:(void *)arg1 error:(id *)arg2;
- (_Bool)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (_Bool)_processContainersFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processAccountsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchGroupsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContactsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContainersInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchAccountsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fechAllRecordsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)canExecuteSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 cursorCleanupBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)contactObservableForFetchRequest:(id)arg1;
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (int)saveSequenceCount;
- (id)identifierWithError:(id *)arg1;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactsEnvironment:(id)arg1 addressBook:(id)arg2 managedConfiguration:(id)arg3;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (id)initWithAddressBook:(id)arg1 managedConfiguration:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

