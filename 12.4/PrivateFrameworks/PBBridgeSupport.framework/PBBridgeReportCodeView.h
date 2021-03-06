//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface PBBridgeReportCodeView : UIView
{
    NSMutableArray *_frames;
    NSTimer *_animationTimer;
    long long _frameIndex;
}

@property(nonatomic) long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
- (void)_tick:(id)arg1;
- (void)addFrame:(id)arg1;
- (void)stopAnimation;
- (void)playAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

