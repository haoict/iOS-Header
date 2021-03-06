//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, TLKEmbossedLabel;

@interface SearchUIOfferButtonView : UIButton
{
    NSString *_offerTitle;
    NSString *_symbolImageName;
    TLKEmbossedLabel *_label;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) TLKEmbossedLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(retain, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)updateSelectionState:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)init;

@end

