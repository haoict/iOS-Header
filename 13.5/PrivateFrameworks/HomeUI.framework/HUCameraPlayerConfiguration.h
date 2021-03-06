//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCameraProfile, HMHome, NSDate, NSUUID;

@interface HUCameraPlayerConfiguration : NSObject
{
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    long long _scrubberType;
    NSUUID *_notificationUUID;
    NSUUID *_clipUUID;
    NSDate *_startingPlaybackDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startingPlaybackDate; // @synthesize startingPlaybackDate=_startingPlaybackDate;
@property(readonly, nonatomic) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
@property(readonly, nonatomic) NSUUID *notificationUUID; // @synthesize notificationUUID=_notificationUUID;
@property(readonly, nonatomic) long long scrubberType; // @synthesize scrubberType=_scrubberType;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (_Bool)isConfiguredForLiveStream;
- (void)fetchClipsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2 scrubberType:(long long)arg3 notificationUUID:(id)arg4 clipUUID:(id)arg5;

@end

