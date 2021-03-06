//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

__attribute__((visibility("hidden")))
@interface _UIMotionAnalyzer : NSObject
{
    _UIMotionAnalyzerSettings *_settings;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property(readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose; // @synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose;
@property(readonly, nonatomic) _UIMotionAnalyzerSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)resetHysteresis;
- (void)updateHistory;
- (_Bool)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(_Bool)arg3 returningShouldToggleSlowUpdates:(_Bool *)arg4 logger:(id)arg5;
- (void)reset;
- (void)updateWithEvent:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSettings:(id)arg1;

@end

