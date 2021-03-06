//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBReusableView-Protocol.h"

@class NSArray, SBIcon, UIViewPropertyAnimator;
@protocol SBIconAccessoryInfoProvider;

@protocol SBIconAccessoryView <SBReusableView>
+ (NSArray *)checkoutAccessoryImagesForIcon:(SBIcon *)arg1 location:(long long)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (_Bool)displayingAccessory;
- (struct CGPoint)accessoryCenterForIconBounds:(struct CGRect)arg1;
- (void)configureForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 infoProvider:(id <SBIconAccessoryInfoProvider>)arg2 animator:(UIViewPropertyAnimator *)arg3;

@optional
- (void)setWallpaperRelativeCenter:(struct CGPoint)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
@end

