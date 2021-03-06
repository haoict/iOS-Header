//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WGWidgetDiscoveryController;

@interface WGWidgetStatsController : NSObject
{
    _Bool _bootstrapFavoriteWidgets;
    WGWidgetDiscoveryController *_discoveryController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bootstrapFavoriteWidgets; // @synthesize bootstrapFavoriteWidgets=_bootstrapFavoriteWidgets;
@property(readonly, nonatomic) __weak WGWidgetDiscoveryController *discoveryController; // @synthesize discoveryController=_discoveryController;
- (void)unregisterWidgetForPredictionEvents:(id)arg1;
- (void)registerWidgetForPredictionEvents:(id)arg1;
- (void)_setupLaunchStats;
- (void)_teardownLaunchStats;
- (void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2;
- (void)dealloc;
- (id)initWithDiscoveryController:(id)arg1;

@end

