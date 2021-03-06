//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/TVViewDescription.h>

@class NSString, UIImage;

@interface TVImageDescription : TVViewDescription
{
    _Bool _configureForMetrics;
    _Bool _needsRoomBannerImageDecorator;
    _Bool _isInBackgroundOrBanner;
    _Bool _hasGradient;
    id _imageProxy;
    UIImage *_placeholderImage;
    long long _semanticContentAttribute;
    NSString *_accessibilityText;
    NSString *_siriData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *siriData; // @synthesize siriData=_siriData;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) _Bool hasGradient; // @synthesize hasGradient=_hasGradient;
@property(nonatomic) _Bool isInBackgroundOrBanner; // @synthesize isInBackgroundOrBanner=_isInBackgroundOrBanner;
@property(nonatomic) _Bool needsRoomBannerImageDecorator; // @synthesize needsRoomBannerImageDecorator=_needsRoomBannerImageDecorator;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute=_semanticContentAttribute;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool configureForMetrics; // @synthesize configureForMetrics=_configureForMetrics;
@property(retain, nonatomic) id imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2;

@end

