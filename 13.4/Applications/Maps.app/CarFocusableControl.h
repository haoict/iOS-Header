//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, UIColor, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CarFocusableControl : UIControl
{
    UILongPressGestureRecognizer *_selectButtonRecognizer;
    CAShapeLayer *_focusShapeLayer;
    unsigned long long _focusableControlStyle;
    UIColor *_unfocusedTintColor;
    UIColor *_focusedTintColor;
    UIColor *_unfocusedBackgroundColor;
    UIColor *_focusedBackgroundColor;
    struct UIEdgeInsets _touchInsets;
    struct UIEdgeInsets _roundedFocusInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *focusedBackgroundColor; // @synthesize focusedBackgroundColor=_focusedBackgroundColor;
@property(retain, nonatomic) UIColor *unfocusedBackgroundColor; // @synthesize unfocusedBackgroundColor=_unfocusedBackgroundColor;
@property(retain, nonatomic) UIColor *focusedTintColor; // @synthesize focusedTintColor=_focusedTintColor;
@property(retain, nonatomic) UIColor *unfocusedTintColor; // @synthesize unfocusedTintColor=_unfocusedTintColor;
@property(nonatomic) struct UIEdgeInsets roundedFocusInsets; // @synthesize roundedFocusInsets=_roundedFocusInsets;
@property(nonatomic) unsigned long long focusableControlStyle; // @synthesize focusableControlStyle=_focusableControlStyle;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)focusDidChange:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)_adjustedColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)_selectButtonPressed:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_createFocusShapeLayer;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (_Bool)_isChargeEnabled;
- (id)initWithFrame:(struct CGRect)arg1;

@end

