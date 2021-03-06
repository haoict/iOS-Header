//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface PUImportSectionBackgroundView : UICollectionReusableView
{
    _Bool _needsBottomStrokeViewUpdate;
    double _strokeWidth;
    UIColor *_bottomStrokeColor;
    UIView *_bottomStrokeView;
}

@property(nonatomic) _Bool needsBottomStrokeViewUpdate; // @synthesize needsBottomStrokeViewUpdate=_needsBottomStrokeViewUpdate;
@property(retain, nonatomic) UIView *bottomStrokeView; // @synthesize bottomStrokeView=_bottomStrokeView;
@property(retain, nonatomic) UIColor *bottomStrokeColor; // @synthesize bottomStrokeColor=_bottomStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)needsStroke;
- (void)updateBottomStrokeViewIfNeeded;
- (void)setNeedsBottomStrokeViewUpdate;
- (void)applyLayoutAttributes:(id)arg1;

@end

