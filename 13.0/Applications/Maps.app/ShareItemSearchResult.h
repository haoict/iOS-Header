//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ShareItemSource-Protocol.h"

@class CNContact, MKMapItem, NSArray, NSString, Route, SearchResult, _MKCustomFeatureStore, _ShareCustomFeature;

__attribute__((visibility("hidden")))
@interface ShareItemSearchResult : NSObject <ShareItemSource>
{
    _MKCustomFeatureStore *_customFeatureStore;
    _ShareCustomFeature *_shareCustomFeature;
    _Bool _includePrintActivity;
    NSArray *_activityProviders;
    SearchResult *_searchResult;
    CNContact *_contact;
}

@property(readonly, nonatomic) _Bool includePrintActivity; // @synthesize includePrintActivity=_includePrintActivity;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) Route *route;
- (CDStruct_b7cb895d)boundingRegionInMapView:(id)arg1;
- (void)drawInMapView:(id)arg1;
@property(readonly, nonatomic) NSString *navigationBarTitle;
- (void)_setupCustomFeatureForMapItem;
- (void)_setupCustomFeatureStore;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
- (void)setActivityProviderDelegate:(id)arg1;
@property(readonly, nonatomic) NSArray *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)initWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

