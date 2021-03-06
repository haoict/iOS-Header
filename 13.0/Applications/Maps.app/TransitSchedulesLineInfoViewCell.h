//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;
@protocol GEOTransitLineItem;

__attribute__((visibility("hidden")))
@interface TransitSchedulesLineInfoViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_systemLineImageContainerView;
    id <GEOTransitLineItem> _transitLineItem;
}

@property(retain, nonatomic) id <GEOTransitLineItem> transitLineItem; // @synthesize transitLineItem=_transitLineItem;
- (void).cxx_destruct;
- (void)configureSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

