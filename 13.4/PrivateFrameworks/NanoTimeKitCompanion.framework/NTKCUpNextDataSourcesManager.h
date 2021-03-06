//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RERelevanceEngine;
@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;

@interface NTKCUpNextDataSourcesManager : NSObject
{
    RERelevanceEngine *_relevanceEngine;
    unsigned int _watchVersion;
    NSArray *_firstPartyDataSourceEntries;
    NSArray *_thirdPartyDataSourceEntries;
    NSArray *_sportsDataSourceEntries;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;
    id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;
    NSObject<OS_dispatch_queue> *_fetchQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate; // @synthesize sportsIdentifiersDelegate=_sportsIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate; // @synthesize thirdPartyIdentifiersDelegate=_thirdPartyIdentifiersDelegate;
@property(nonatomic) __weak id <NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate; // @synthesize firstPartyIdentifiersDelegate=_firstPartyIdentifiersDelegate;
@property(copy) NSArray *sportsDataSourceEntries; // @synthesize sportsDataSourceEntries=_sportsDataSourceEntries;
@property(copy) NSArray *thirdPartyDataSourceEntries; // @synthesize thirdPartyDataSourceEntries=_thirdPartyDataSourceEntries;
@property(copy) NSArray *firstPartyDataSourceEntries; // @synthesize firstPartyDataSourceEntries=_firstPartyDataSourceEntries;
@property(readonly, nonatomic) unsigned int watchVersion; // @synthesize watchVersion=_watchVersion;
- (void)_buildRows;
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_firstPartyDataSourceEntries;
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1;
- (_Bool)_isNanoWeatherAppID:(id)arg1;
- (id)_preGraceThirdPartyBundleIdentifiers;
- (void)fetchIdentifiers;
- (void)_dataSourcesChangedNotification:(id)arg1;
- (void)_appsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWatchVersion:(unsigned int)arg1;

@end

