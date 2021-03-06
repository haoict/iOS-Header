//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "HMSetupRemoteService-Protocol.h"
#import "HSSetupCoordinatorDelegate-Protocol.h"

@class HSAccessoryBrowsingManager, HSEntitlementContext, HSSetupCoordinator, NSString;

@interface HSSetupViewController : UINavigationController <HSSetupCoordinatorDelegate, HMSetupRemoteService>
{
    _Bool _didNotifyFinishLoading;
    _Bool _didNotifyFinishPairing;
    HSEntitlementContext *_entitlementContext;
    HSSetupCoordinator *_setupCoordinator;
    HSAccessoryBrowsingManager *_accessoryBrowsingManager;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property(retain, nonatomic) HSAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(retain, nonatomic) HSSetupCoordinator *setupCoordinator; // @synthesize setupCoordinator=_setupCoordinator;
@property(nonatomic) _Bool didNotifyFinishPairing; // @synthesize didNotifyFinishPairing=_didNotifyFinishPairing;
@property(nonatomic) _Bool didNotifyFinishLoading; // @synthesize didNotifyFinishLoading=_didNotifyFinishLoading;
@property(retain, nonatomic) HSEntitlementContext *entitlementContext; // @synthesize entitlementContext=_entitlementContext;
- (void).cxx_destruct;
- (void)_notifyPairingEndedIfNecessary;
- (id)_setupAccessoryPairingViewControllerFromState:(long long)arg1;
- (id)_createPairingViewControllerForAccessoryDescription:(id)arg1;
- (void)_pushViewControllerForSetupStep:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (id)_viewControllerForSetupStep:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (id)_setupStepForCoordinator:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3;
- (void)setupCoordinator:(id)arg1 didFinishWithInfo:(id)arg2 error:(id)arg3;
- (void)setupCoordinator:(id)arg1 requestsUpdateForConfigurator:(id)arg2;
- (void)setupCoordinator:(id)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)setupCoordinatorDidBecomeReady:(id)arg1;
- (void)setupInterruptedWithError:(id)arg1;
- (void)setupFailedWithError:(id)arg1;
- (void)setHomeUUID:(id)arg1 accessoryDescription:(id)arg2;
- (void)_hostApplicationWillEnterForeground;
- (void)_hostApplicationDidEnterBackground;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

