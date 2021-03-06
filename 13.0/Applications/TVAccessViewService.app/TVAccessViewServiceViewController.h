//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSArray, NSString, VUIAccessViewController;

@interface TVAccessViewServiceViewController : SBUIRemoteAlertServiceViewController
{
    VUIAccessViewController *_accessViewController;
    NSArray *_bundleIDs;
    NSString *_accountName;
}

+ (_Bool)_isSecureForRemoteViewService;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_configureWithUserInfo:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

