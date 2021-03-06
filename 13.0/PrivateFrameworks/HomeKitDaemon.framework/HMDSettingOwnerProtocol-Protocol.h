//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingProtocol-Protocol.h>

@class HMSettingValue, NSArray;
@protocol HMDSettingConstraintProtocol;

@protocol HMDSettingOwnerProtocol <HMDSettingProtocol>
@property(readonly, copy) HMSettingValue *internalValue;
@property(readonly) NSArray *constraints;
- (_Bool)updateWithSettingValue:(HMSettingValue *)arg1;
- (void)addConstraint:(id <HMDSettingConstraintProtocol>)arg1;
@end

