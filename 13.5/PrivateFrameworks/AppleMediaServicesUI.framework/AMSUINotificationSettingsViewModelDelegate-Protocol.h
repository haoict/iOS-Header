//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSNotificationSettingsItem, AMSUINotificationSettingsViewModel;

@protocol AMSUINotificationSettingsViewModelDelegate <NSObject>
- (void)viewModel:(AMSUINotificationSettingsViewModel *)arg1 didReceiveValueChange:(id)arg2 forItem:(AMSNotificationSettingsItem *)arg3;
@end

