//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCMasterKeyIndex, VCMediaStream;

@protocol VCMediaStreamNotification <NSObject>
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMasterKeyIndex:(VCMasterKeyIndex *)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;
@end

