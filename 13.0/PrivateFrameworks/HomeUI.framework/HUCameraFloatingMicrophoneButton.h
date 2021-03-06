//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NAUILayoutConstraintSet, UIImageView, UILabel, UIVisualEffectView;

@interface HUCameraFloatingMicrophoneButton : UIButton
{
    UIVisualEffectView *_backgroundView;
    UILabel *_microphoneLabel;
    UIImageView *_microphoneImageView;
    NAUILayoutConstraintSet *_constraintSet;
}

+ (id)_createBackgroundEffect;
+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UIImageView *microphoneImageView; // @synthesize microphoneImageView=_microphoneImageView;
@property(readonly, nonatomic) UILabel *microphoneLabel; // @synthesize microphoneLabel=_microphoneLabel;
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setupConstraintSet;
- (void)_updateSelectionState;
- (void)_updateAlpha;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

