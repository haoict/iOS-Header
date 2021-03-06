//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CarChromeViewController, GEOComposedRoute, GEOComposedRouteTraffic, GEORouteMatch, MKMapItem, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface CarRouteGeniusAnnotationsManager : NSObject
{
    VKPolylineOverlay *_routeLine;
    CarChromeViewController *_chromeViewController;
    GEOComposedRoute *_route;
    GEOComposedRouteTraffic *_traffic;
    GEORouteMatch *_match;
    MKMapItem *_destination;
}

@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEORouteMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void).cxx_destruct;
- (id)mapView;
- (id)mapViewCurrentRouteMatch:(id)arg1;
- (void)setRoute:(id)arg1 traffic:(id)arg2;
- (void)clearAnnotations;
- (void)_drawRoute:(id)arg1 traffic:(id)arg2;
- (void)_eraseRoute:(id)arg1;
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;

@end

