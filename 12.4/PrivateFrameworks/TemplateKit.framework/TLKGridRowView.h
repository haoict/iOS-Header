//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSMutableArray, TLKGridLayoutManager, TLKTableRow;

@interface TLKGridRowView : TLKView
{
    TLKGridLayoutManager *_manager;
    TLKTableRow *_tableRow;
    NSMutableArray *_labels;
    NSMutableArray *_imageViews;
    NSMutableArray *_currentListOfViews;
    unsigned long long _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long _indexOfFirstTrailingColumn;
}

+ (void)updateLabel:(id)arg1 withFormattedText:(id)arg2 alignment:(long long)arg3;
@property unsigned long long indexOfFirstTrailingColumn; // @synthesize indexOfFirstTrailingColumn=_indexOfFirstTrailingColumn;
@property unsigned long long indexOfFirstCenteredColumnForForcedCentering; // @synthesize indexOfFirstCenteredColumnForForcedCentering=_indexOfFirstCenteredColumnForForcedCentering;
@property(retain) NSMutableArray *currentListOfViews; // @synthesize currentListOfViews=_currentListOfViews;
@property(retain) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain) NSMutableArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) TLKTableRow *tableRow; // @synthesize tableRow=_tableRow;
@property(retain, nonatomic) TLKGridLayoutManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)description;
- (void)setStylesForEverything;
- (void)generateLabelsAndImagesIfNecessary;
- (void)resetStateOfAllViews;
- (void)observedPropertiesChanged;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

@end

