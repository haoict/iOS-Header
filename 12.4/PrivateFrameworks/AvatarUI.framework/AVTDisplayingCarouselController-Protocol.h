//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTCarouselController-Protocol.h>

@class AVTView;
@protocol AVTDisplayingCarouselControllerDelegate;

@protocol AVTDisplayingCarouselController <AVTCarouselController>
@property(readonly, nonatomic) AVTView *focusedDisplayView;
@property(nonatomic) __weak id <AVTDisplayingCarouselControllerDelegate> displayingDelegate;
@end

