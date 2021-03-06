//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, XDCDevice;
@protocol OS_dispatch_queue;

@interface XDCDeviceManager : NSObject
{
    NSMutableDictionary *_devices;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateDevicesWithArray:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (id)deviceForFromID:(id)arg1 usingService:(id)arg2;
- (id)deviceForDestinationID:(id)arg1;
@property(readonly) XDCDevice *activePairedDevice;
- (id)init;

@end

