//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAccount, SSAppPurchaseHistoryDatabase, SSDatabaseCache;

@interface SSAppPurchaseHistoryCache : NSObject
{
    SSAccount *_account;
    SSDatabaseCache *_databaseCache;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
}

- (void).cxx_destruct;
- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (id)imageDataForAdamID:(id)arg1;
- (_Bool)setImageData:(id)arg1 forAdamID:(id)arg2 imageToken:(id)arg3;
- (void)clearCacheForAdamID:(id)arg1;
- (id)allUncachedImages;
- (id)allUncachedImages:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

