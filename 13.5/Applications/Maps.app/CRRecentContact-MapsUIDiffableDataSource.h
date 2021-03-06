//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRecents/CRRecentContact.h>

#import "CarSearchItemCellDataSource-Protocol.h"
#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"
#import "RAPAutocompleteSearchResult-Protocol.h"
#import "RecentsItem-Protocol.h"

@class NSString;

@interface CRRecentContact (MapsUIDiffableDataSource) <MapsUIDiffableDataSourceIdentifiable, CarSearchItemCellDataSource, RAPAutocompleteSearchResult, RecentsItem>
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (void)updateModel:(id)arg1;
- (id)entryWithTicket:(id)arg1;
@property(readonly, nonatomic) double timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

