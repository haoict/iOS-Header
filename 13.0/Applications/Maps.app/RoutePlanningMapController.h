//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOTransitVehicleUpdaterDelegate-Protocol.h"
#import "MapViewResponderHandling-Protocol.h"
#import "POIShapeLoadingObserver-Protocol.h"
#import "RoutePlanningDataObservation-Protocol.h"

@class GEOTransitVehicleUpdater, NSNumber, NSString;
@protocol ActionCoordination, RoutePlanningDataCoordination;

__attribute__((visibility("hidden")))
@interface RoutePlanningMapController : NSObject <POIShapeLoadingObserver, RoutePlanningDataObservation, GEOTransitVehicleUpdaterDelegate, MapViewResponderHandling>
{
    _Bool _finishedFraming;
    _Bool _allowSnapshotForRAP;
    GEOTransitVehicleUpdater *_transitVehicleUpdater;
    _Bool _selectCurrentRoute;
    id <ActionCoordination> _actionCoordinator;
    id <RoutePlanningDataCoordination> _dataCoordinator;
    NSNumber *_originalViewMode;
}

@property(retain, nonatomic) NSNumber *originalViewMode; // @synthesize originalViewMode=_originalViewMode;
@property(nonatomic, getter=selectsCurrentRoute) _Bool selectCurrentRoute; // @synthesize selectCurrentRoute=_selectCurrentRoute;
@property(nonatomic) __weak id <RoutePlanningDataCoordination> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(nonatomic) __weak id <ActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
- (void).cxx_destruct;
- (void)transitVehicleUpdater:(id)arg1 didUpdateVehiclePositions:(id)arg2 forTripIDs:(id)arg3;
- (id)transitVehicleUpdater:(id)arg1 shouldUpdateVehiclePositionsForTripIDs:(id)arg2;
- (id)_firstVehicleEntries;
- (void)_updateVehicleManagerIfNeeded;
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)_updateCameraIfPossibleWithRefinmentOnCompletionIfNeeded:(_Bool)arg1;
- (void)updateCameraIfPossible;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_snapshotMapForRAPIfNeeded;
- (void)_updateRouteAnnotationsController;
- (void)_updateSearchPinsManagerIfPossible;
- (void)poiShapeLoader:(id)arg1 didLoadStartPOIShape:(id)arg2 endPOIShape:(id)arg3;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRoutes:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRideBookingRideOptionState:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRequestState:(long long)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateCurrentRouteDisplayedMapRect:(CDStruct_02837cd9)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateRouteCollection:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateResolvedWaypointSet:(id)arg2;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateTransportType:(long long)arg2;
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)saveOriginalMapViewModeAs:(long long)arg1;
- (void)restoreOriginalMapViewMode:(_Bool)arg1;
- (void)clearMapState:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

