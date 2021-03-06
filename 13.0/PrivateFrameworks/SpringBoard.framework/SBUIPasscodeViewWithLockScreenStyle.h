//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBUIBackgroundView;
@protocol SBUIPasscodeLockView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    SBUIBackgroundView *_backgroundView;
}

@property(readonly, nonatomic) UIView<SBUIPasscodeLockView> *passcodeView; // @synthesize passcodeView=_passcodeView;
- (void).cxx_destruct;
- (void)setBlurEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 includeBlur:(_Bool)arg2 passcodeViewGenerator:(CDUnknownBlockType)arg3;

@end

