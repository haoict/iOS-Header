//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraClipSegmentMetadata, HMFTimer, NSData, NSString;

@interface HMDCameraClipAppendAssetOperation : HMDCameraClipModelOperation <HMFTimerDelegate>
{
    unsigned long long _retryPolicy;
    NSString *_streamingAssetPropertyName;
    NSString *_metadataPropertyName;
    NSData *_segmentData;
    HMDCameraClipSegmentMetadata *_segmentMetadata;
    unsigned long long _state;
    HMFTimer *_retryTimer;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) HMDCameraClipSegmentMetadata *segmentMetadata; // @synthesize segmentMetadata=_segmentMetadata;
@property(readonly, copy) NSData *segmentData; // @synthesize segmentData=_segmentData;
@property(readonly, copy) NSString *metadataPropertyName; // @synthesize metadataPropertyName=_metadataPropertyName;
@property(readonly, copy) NSString *streamingAssetPropertyName; // @synthesize streamingAssetPropertyName=_streamingAssetPropertyName;
@property unsigned long long retryPolicy; // @synthesize retryPolicy=_retryPolicy;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)arg1;
- (id)_retryDelayForError:(id)arg1;
- (void)_appendToAsset;
- (id)_updateModelMetadata:(id)arg1 streamingAsset:(id)arg2;
- (void)main;
- (void)finish;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 streamingAssetPropertyName:(id)arg4 metadataPropertyName:(id)arg5 segmentData:(id)arg6 segmentMetadata:(id)arg7 dataSource:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

