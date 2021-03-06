//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MessageView : UIView
{
    UIVisualEffectView *_visualEffectView;
    UIView *_animationView;
    _Bool _animationStarted;
    UIColor *_color;
    NSLayoutConstraint *_offsetConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *offsetConstraint; // @synthesize offsetConstraint=_offsetConstraint;
- (void)createAnimation;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

