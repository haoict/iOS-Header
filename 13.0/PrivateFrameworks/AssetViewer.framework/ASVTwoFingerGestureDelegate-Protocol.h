//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/NSObject-Protocol.h>

@class ASVGesture;

@protocol ASVTwoFingerGestureDelegate <NSObject>
@property(readonly, nonatomic) float maximumObjectScale;
@property(readonly, nonatomic) float minimumObjectScale;
- (void)gestureStopScaleAnimation;
- (void)gestureStartScaleAnimationFrom:(float)arg1 to:(float)arg2;
- (void)gestureDidSnapAwayFromScale:(ASVGesture *)arg1;
- (void)gestureDidSnapToScale:(ASVGesture *)arg1;
- (void)gestureEndedScaling:(ASVGesture *)arg1;
- (void)gesture:(ASVGesture *)arg1 scaledAssetToScale:(float)arg2;
- (void)gestureBeganScaling:(ASVGesture *)arg1;
- (void)gesture:(ASVGesture *)arg1 rotatedAssetByDeltaYaw:(float)arg2;
@end

