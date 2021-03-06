//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject
{
    FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry;
    FCKeyValueStore *_localStore;
}

@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry; // @synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry;
- (void).cxx_destruct;
- (void)cleanupStaleExpiredEntry;
- (void)updateEntry:(id)arg1;
- (void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(_Bool)arg3 isPurchaser:(_Bool)arg4;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;

@end

