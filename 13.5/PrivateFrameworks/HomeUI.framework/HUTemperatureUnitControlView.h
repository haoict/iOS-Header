//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSArray, NSString, UILabel;
@protocol HUControlViewDelegate;

@interface HUTemperatureUnitControlView : UIView <HUControlView>
{
    _Bool _canBeHighlighted;
    _Bool _viewDisabled;
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    long long _currentUnit;
    NSArray *_labelConstraints;
}

+ (Class)valueClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(nonatomic) _Bool viewDisabled; // @synthesize viewDisabled=_viewDisabled;
@property(nonatomic) long long currentUnit; // @synthesize currentUnit=_currentUnit;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool canBeHighlighted; // @synthesize canBeHighlighted=_canBeHighlighted;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_unitStringForCurrentUnit;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

