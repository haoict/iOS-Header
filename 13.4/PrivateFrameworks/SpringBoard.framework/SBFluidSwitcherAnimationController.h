//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBUIBlockAnimationController.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class NSString;

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver>
{
    CDUnknownBlockType _animationCompletion;
    SBFluidSwitcherAnimationController *_tetheredAnimationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SBFluidSwitcherAnimationController *tetheredAnimationController; // @synthesize tetheredAnimationController=_tetheredAnimationController;
@property(copy, nonatomic) CDUnknownBlockType animationCompletion; // @synthesize animationCompletion=_animationCompletion;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (_Bool)isFluidSwitcherAnimationController;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

