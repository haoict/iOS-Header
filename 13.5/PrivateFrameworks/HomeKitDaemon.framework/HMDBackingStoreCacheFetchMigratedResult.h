//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation
{
    _Bool _update;
    _Bool _migration;
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    CDUnknownBlockType _fetchResult;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly) _Bool migration; // @synthesize migration=_migration;
@property(readonly) _Bool update; // @synthesize update=_update;
@property(retain, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;
- (id)initWithGroup:(id)arg1 update:(_Bool)arg2 migration:(_Bool)arg3 fetchResult:(CDUnknownBlockType)arg4;
- (id)initWithShareGroup:(id)arg1 update:(_Bool)arg2 migration:(_Bool)arg3 fetchResult:(CDUnknownBlockType)arg4;

@end

