//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSOnboardingInterface-Protocol.h>

@class NSArray, NSNumber, NSObject, VUIOnboardingController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIJSOnboardingInterface : IKJSObject <VUIJSOnboardingInterface>
{
    VUIOnboardingController *_controller;
    _Bool _hasSynced;
    NSNumber *_lastReportedOptedInValue;
    _Bool _isShowing;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dismiss;
- (void)showForBids:(id)arg1:(id)arg2:(id)arg3;
- (void)show:(id)arg1;
@property(readonly, nonatomic) _Bool isShowing;
- (void)fetchEligibleBids:(id)arg1;
@property(readonly, nonatomic) NSArray *eligibleBids;
@property(readonly, nonatomic, getter=isOptedInCached) NSNumber *optedInCached;
- (void)setOptedIn:(_Bool)arg1:(id)arg2;
- (void)fetchOptedIn:(id)arg1;
@property(readonly, nonatomic, getter=isOptedIn) _Bool optedIn;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

