//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
- (void)setSupportsVoiceTrigger:(_Bool)arg1;
- (void)setSupportsInEarDetection:(_Bool)arg1;
- (void)setIsAdvancedAppleAudioDevice:(_Bool)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setAddress:(NSString *)arg1;
@end

