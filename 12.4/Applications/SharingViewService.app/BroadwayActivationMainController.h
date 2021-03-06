//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SVSBaseMainController.h"

@class BroadwayActivationDoneViewController, BroadwayActivationFailedNoConnectivityViewController, BroadwayActivationFailedViewController, BroadwayActivationStartViewController, PKPhysicalCard, SVSCommonNavController, UIStoryboard;

@interface BroadwayActivationMainController : SVSBaseMainController
{
    _Bool _appeared;
    _Bool _dismissed;
    UIStoryboard *_storyboard;
    SVSCommonNavController *_vcNav;
    BroadwayActivationDoneViewController *_vcDone;
    BroadwayActivationFailedViewController *_vcFailed;
    BroadwayActivationFailedNoConnectivityViewController *_vcFailedNoConnectivity;
    BroadwayActivationStartViewController *_vcStart;
    _Bool _test;
    _Bool _noCardTest;
    PKPhysicalCard *_physicalCard;
    long long _forcedActivationResult;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(nonatomic) _Bool noCardTest; // @synthesize noCardTest=_noCardTest;
@property(nonatomic) long long forcedActivationResult; // @synthesize forcedActivationResult=_forcedActivationResult;
@property(nonatomic) _Bool test; // @synthesize test=_test;
@property(copy, nonatomic) PKPhysicalCard *physicalCard; // @synthesize physicalCard=_physicalCard;
- (void).cxx_destruct;
- (void)retryActivation;
- (void)showCompletedUI:(long long)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)presentAppropriateViewControllerIfReady;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

