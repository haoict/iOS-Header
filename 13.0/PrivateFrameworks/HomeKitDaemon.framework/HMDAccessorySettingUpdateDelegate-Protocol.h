//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccessorySettingUpdateBase, NSError;

@protocol HMDAccessorySettingUpdateDelegate <NSObject>
- (void)settingUpdate:(HMDAccessorySettingUpdateBase *)arg1 didCompleteWithError:(NSError *)arg2;
@end

