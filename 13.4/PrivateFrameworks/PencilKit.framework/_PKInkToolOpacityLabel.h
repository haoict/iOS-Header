//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkToolOpacityLabel : UIView
{
    unsigned long long _sizeState;
    double _inkOpacity;
    UILabel *_label;
}

+ (id)_fontForSizeState:(unsigned long long)arg1;
+ (double)_maxLabelHeightForSizeState:(unsigned long long)arg1;
+ (double)_labelOffsetFromBottomEdgeForSizeState:(unsigned long long)arg1;
+ (double)_toolOffsetForSizeState:(unsigned long long)arg1;
+ (id)_formattedStringForInkOpacity:(double)arg1;
+ (double)_labelAlphaForInkOpacity:(double)arg1;
+ (_Bool)_shouldHideLabel:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double inkOpacity; // @synthesize inkOpacity=_inkOpacity;
@property(nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
- (struct CGRect)_frameForRotatedLabel;
- (id)_inkOpacityLabelString;
- (void)setInkOpacity:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

