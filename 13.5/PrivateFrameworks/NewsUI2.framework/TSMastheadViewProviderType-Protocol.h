//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSMastheadViewLayoutOptions, UITraitCollection, UIView;

@protocol TSMastheadViewProviderType
- (long long)layoutVariantForTraitCollection:(UITraitCollection *)arg1;
- (struct UIEdgeInsets)layoutMarginForLayoutOptions:(TSMastheadViewLayoutOptions *)arg1;
- (double)heightForLayoutOptions:(TSMastheadViewLayoutOptions *)arg1;
- (void)layoutWithBridgedLayoutOptions:(TSMastheadViewLayoutOptions *)arg1;
@property(nonatomic, readonly) UIView *view;
@end

