//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"
#import "RouteCollectionUpdateProvider-Protocol.h"

@class MNNavigationService, NSString, RouteCollection;
@protocol RouteCollectionUpdateProviderDelegate;

__attribute__((visibility("hidden")))
@interface NavdRouteCollectionUpdateProvider : NSObject <MNNavigationServiceObserver, RouteCollectionUpdateProvider>
{
    id <RouteCollectionUpdateProviderDelegate> _delegate;
    RouteCollection *_currentRouteCollection;
    MNNavigationService *_navigationService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(retain, nonatomic) RouteCollection *currentRouteCollection; // @synthesize currentRouteCollection=_currentRouteCollection;
@property(nonatomic) __weak id <RouteCollectionUpdateProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;
- (void)updateRoute:(id)arg1 withTraffic:(id)arg2;
- (void)dealloc;
- (id)initWithNavigationService:(id)arg1 routeCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

