//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MapsTheming-Protocol.h"
#import "SignHintDisplayAnimatable-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, NavSignContainerView, UILabel;

__attribute__((visibility("hidden")))
@interface NavSignContainerHintView : UIView <MapsTheming, SignHintDisplayAnimatable>
{
    NSLayoutConstraint *_signTopConstraint;
    NSLayoutConstraint *_hintLabelTopConstraint;
    UILabel *_hintLabel;
    NavSignContainerView *_signContainerView;
    UIView *_labelBackgroundView;
    NSTimer *_hintVisibleTimer;
}

@property(retain, nonatomic) NSTimer *hintVisibleTimer; // @synthesize hintVisibleTimer=_hintVisibleTimer;
@property(retain, nonatomic) UIView *labelBackgroundView; // @synthesize labelBackgroundView=_labelBackgroundView;
@property(readonly, nonatomic) NavSignContainerView *signContainerView; // @synthesize signContainerView=_signContainerView;
- (void).cxx_destruct;
- (void)updateTheme;
- (void)setHintLabelHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)displayTemporaryHintTextOnSignsAnimated:(_Bool)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (id)_initialConstraints;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

