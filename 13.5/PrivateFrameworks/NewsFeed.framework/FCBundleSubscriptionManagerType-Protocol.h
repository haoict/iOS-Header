//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/FCBundleSubscriptionProviderType-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionLookUpEntry, NSString;
@protocol FCBundleSubscriptionChangeObserver, FCEntitlementsOverrideProviderType;

@protocol FCBundleSubscriptionManagerType <FCBundleSubscriptionProviderType>
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)clearBundleSubscription;
- (void)prewarmBundleTagIDsWithPurchaseID:(NSString *)arg1;
- (void)renewalNoticeShownWithPurchaseID:(NSString *)arg1;
- (FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookupEntry;
- (void)removeObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)addObserver:(id <FCBundleSubscriptionChangeObserver>)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(void (^)(FCBundleSubscription *))arg2;
@property(nonatomic, retain) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property(nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@end

