//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalZone, HMBProcessingModelCreation, HMBProcessingModelDeletion, HMBProcessingModelUpdate, NAFuture;

@protocol HMBLocalZoneModelObserver <NSObject>
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelDeletion:(HMBProcessingModelDeletion *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelUpdate:(HMBProcessingModelUpdate *)arg2;
- (NAFuture *)localZone:(HMBLocalZone *)arg1 didProcessModelCreation:(HMBProcessingModelCreation *)arg2;
@end

