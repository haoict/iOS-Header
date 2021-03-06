//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemStatus/STBatteryStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSString;

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (_Bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long chargingDescriptionType; // @dynamic chargingDescriptionType;
@property(copy, nonatomic) NSString *chargingDescription; // @dynamic chargingDescription;
@property(nonatomic, getter=isBatterySaverModeActive) _Bool batterySaverModeActive; // @dynamic batterySaverModeActive;
@property(nonatomic) unsigned long long percentCharge; // @dynamic percentCharge;
@property(nonatomic) unsigned long long chargingState; // @dynamic chargingState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

