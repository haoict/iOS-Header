//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PLRoundProgressView, UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface PUProgressIndicatorView : UIView
{
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    UIVisualEffectView *_visualEffectView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    _Bool _wantsImmediateHide;
    _Bool _wantsAnimatedHide;
    CDUnknownBlockType _completionHandler;
    _Bool _isDeterminate;
    _Bool _showsBackground;
    long long _style;
    double _currentProgress;
    NSString *_localizedMessage;
    long long __currentState;
    double __timestampBeganShowing;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setTimestampBeganShowing:) double _timestampBeganShowing; // @synthesize _timestampBeganShowing=__timestampBeganShowing;
@property(nonatomic, setter=_setCurrentState:) long long _currentState; // @synthesize _currentState=__currentState;
@property(nonatomic) _Bool showsBackground; // @synthesize showsBackground=_showsBackground;
@property(nonatomic, setter=setDeterminate:) _Bool isDeterminate; // @synthesize isDeterminate=_isDeterminate;
@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)_endShowingProgressIfReady;
- (void)endShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBeginShowingAnimated:(_Bool)arg1 wasImmediate:(_Bool)arg2;
- (void)beginShowingProgressWithDelay:(double)arg1 animated:(_Bool)arg2;
- (void)beginShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isShowingProgress) _Bool showingProgress;
- (void)_updateSubviewsOrdering;
- (void)_updatePieProgress;
- (void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateProgressViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_newVisualEffectBackgroundView;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

