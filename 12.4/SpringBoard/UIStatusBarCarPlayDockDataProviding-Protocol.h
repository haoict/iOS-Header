//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage, UITraitCollection;

@protocol UIStatusBarCarPlayDockDataProviding <NSObject>
- (_Bool)shouldDisplayBadgeForBundleIdentifier:(NSString *)arg1;
- (NSString *)callDuration;
- (UIImage *)dockImageForBundleIdentifier:(NSString *)arg1 format:(int)arg2 traitCollection:(UITraitCollection *)arg3;
- (NSString *)activeBundleIdentifier;
- (NSArray *)bundleIdentifiers;
@end

