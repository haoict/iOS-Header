//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkNoContentBannerView : UIView
{
    _Bool _siriButtonEnabled;
    _Bool _siriButtonSelected;
    UILabel *_titleLabel;
    UIButton *_siriButton;
    NSMutableArray *_constraintsForTitleLabel;
    NSMutableArray *_constraintsForTitleLabelAndSiriButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool siriButtonSelected; // @synthesize siriButtonSelected=_siriButtonSelected;
@property(retain) NSMutableArray *constraintsForTitleLabelAndSiriButton; // @synthesize constraintsForTitleLabelAndSiriButton=_constraintsForTitleLabelAndSiriButton;
@property(retain) NSMutableArray *constraintsForTitleLabel; // @synthesize constraintsForTitleLabel=_constraintsForTitleLabel;
@property(retain) UIButton *siriButton; // @synthesize siriButton=_siriButton;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool siriButtonEnabled; // @synthesize siriButtonEnabled=_siriButtonEnabled;
- (void)stateUpdated;
- (void)traitCollectionDidChange:(id)arg1;
- (void)choose;
- (void)deselect;
- (void)select;
- (void)clickGestureDidUpdate:(id)arg1;
- (void)siriButtonTouchUp:(id)arg1;
- (void)siriButtonTouchDown:(id)arg1;
- (void)siriButtonTapped:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
@property(retain, nonatomic) NSString *titleString;
- (void)setupClickGestureRecognizer;
- (void)updateConstraints;
- (void)setupConstraintsForTitleLabelAndSiriButton;
- (void)setupConstraintsforTitleLabel;
- (void)setupSiriButton;
- (void)setupTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

