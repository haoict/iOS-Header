//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKIconsView : TLKStackView
{
    NSMutableArray *_imageViews;
    unsigned long long _prominence;
}

@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)updateIcons:(id)arg1;
- (id)init;

@end

