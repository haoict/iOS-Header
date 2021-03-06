//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIBrowseItemComponent : SKUIPageComponent
{
    NSString *_title;
    NSString *_subtitle;
    long long _index;
    SKUIImageViewElement *_decorationImage;
    _Bool _showTopBorder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUIImageViewElement *decorationImage; // @synthesize decorationImage=_decorationImage;
@property(nonatomic) _Bool showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;

@end

