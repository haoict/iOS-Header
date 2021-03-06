//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class CTServiceDescriptor, NSMutableArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataOptionsController : PSListController
{
    NSMutableArray *_ratSpecifiers;
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}

- (void).cxx_destruct;
- (void)roamingOptionsDidChange;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setEUInternetCancelled:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (void)setDataRoamingEnabledForService:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatusForService:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (id)roamingSpecifierforSubscription;
- (id)roamingSpecifiers;
- (id)specifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithParentSpecifier:(id)arg1;
- (id)init;

@end

