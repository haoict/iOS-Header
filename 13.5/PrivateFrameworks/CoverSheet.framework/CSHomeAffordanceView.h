//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CoverSheet/SBSystemCursorInteractionDelegate-Protocol.h>
#import <CoverSheet/SBUIOptionalLegibility-Protocol.h>

@class MTLumaDodgePillView, MTStaticColorPillView, NSString, SBFHomeGrabberSettings, UIColor, _UILegibilitySettings;
@protocol CSCoverSheetContextProviding;

@interface CSHomeAffordanceView : UIView <SBSystemCursorInteractionDelegate, SBUIOptionalLegibility>
{
    SBFHomeGrabberSettings *_settings;
    _Bool _systemCursorInteractionEnabled;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _style;
    UIColor *_overrideColor;
    id <CSCoverSheetContextProviding> _coverSheetContext;
    MTStaticColorPillView *_staticHomeAffordance;
    MTLumaDodgePillView *_dynamicHomeAffordance;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MTLumaDodgePillView *dynamicHomeAffordance; // @synthesize dynamicHomeAffordance=_dynamicHomeAffordance;
@property(nonatomic) __weak MTStaticColorPillView *staticHomeAffordance; // @synthesize staticHomeAffordance=_staticHomeAffordance;
@property(nonatomic, getter=isSystemCursorInteractionEnabled) _Bool systemCursorInteractionEnabled; // @synthesize systemCursorInteractionEnabled=_systemCursorInteractionEnabled;
@property(retain, nonatomic) id <CSCoverSheetContextProviding> coverSheetContext; // @synthesize coverSheetContext=_coverSheetContext;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (id)_viewForStyle:(unsigned long long)arg1;
- (void)_transitionToStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (_Bool)shouldBeginCursorInteractionAtLocation:(struct CGPoint)arg1 forView:(id)arg2;
- (struct UIEdgeInsets)cursorInteractionHitTestInsetsForView:(id)arg1;
- (void)layoutSubviews;
- (void)_updateForLegibility;
- (struct CGRect)extendedFrameForPointerAnimationSuppression;
- (double)suggestedEdgeSpacing;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_createDynamicHomeAffordance;
- (void)_createStaticHomeAffordance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

