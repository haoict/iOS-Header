//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void).cxx_destruct;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)animationSettings;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

