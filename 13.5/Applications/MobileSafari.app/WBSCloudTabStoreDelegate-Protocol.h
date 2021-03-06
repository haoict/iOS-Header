//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WBSCloudTabStore;

@protocol WBSCloudTabStoreDelegate <NSObject>

@optional
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(WBSCloudTabStore *)arg1 error:(NSError *)arg2;
@end

