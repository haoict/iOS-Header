//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, VUIFavoriteBannerLayout, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerView : UIView
{
    VUIFavoriteBannerLayout *_layout;
    UIView *_backgroundView;
    NSArray *_backgroundImageLogos;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *backgroundImageLogos; // @synthesize backgroundImageLogos=_backgroundImageLogos;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) VUIFavoriteBannerLayout *layout; // @synthesize layout=_layout;
- (void)prepareForCellReuse;
- (id)_generateSiderowImagePointsForSize:(struct CGSize)arg1;
- (id)_generatePlainWeaveImagePointsForSize:(struct CGSize)arg1;
- (id)_generatePointsForPlainWeaveSide:(double)arg1 containerRect:(struct CGRect)arg2 imageSize:(struct CGSize)arg3 direction:(unsigned long long)arg4;
- (id)_generateSingleRowImagePoints;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)imageSizeForBannerStyle:(unsigned long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;

@end

